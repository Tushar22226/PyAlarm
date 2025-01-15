import time
import datetime
import pygame
import threading

def get_alarm_time():
    while True:
        try:
            user_input = input("Enter alarm time (HH:MM): ")
            alarm_time = datetime.datetime.strptime(user_input, '%H:%M').time()
            now = datetime.datetime.now()
            alarm_datetime = datetime.datetime.combine(now.date(), alarm_time)
            if alarm_datetime < now:
                alarm_datetime += datetime.timedelta(days=1)
            return alarm_datetime
        except ValueError:
            print("Invalid format. Please enter time in HH:MM format.")

def play_alarm_sound():
    pygame.mixer.init()
    sound_file_path = '/home/tushar/Downloads/notification216.mp3'
    try:
        sound = pygame.mixer.Sound(sound_file_path)
        sound.play(-1)  
        return sound
    except pygame.error as e:
        print(f"Error playing sound file: {e}")
        return None

def stop_or_snooze_alarm(sound):
    snooze_time = 5  
    while True:
        user_input = input("Press 'a' to stop, 's' to snooze: ").lower()
        if user_input == 'a': 
            sound.stop()
            print("Alarm stopped.")
            return
        elif user_input == 's': 
            sound.stop()
            snooze_until = datetime.datetime.now() + datetime.timedelta(minutes=snooze_time)
            print(f"Alarm snoozed for {snooze_time} minutes.")
            show_remaining_time(snooze_until)
            return

def show_remaining_time(alarm_time):
    while True:
        now = datetime.datetime.now()
        remaining_time = alarm_time - now
        if remaining_time.total_seconds() <= 0:
            print("Alarm time reached!")
            sound = play_alarm_sound()
            if sound:
                # Start a separate thread to handle stop/snooze input while the alarm plays
                input_thread = threading.Thread(target=stop_or_snooze_alarm, args=(sound,))
                input_thread.start()
                input_thread.join()
            break
        hours, remainder = divmod(remaining_time.seconds, 3600)
        minutes, seconds = divmod(remainder, 60)
        print(f"Time remaining: {remaining_time.days * 24 + hours}h {minutes}m {seconds}s", end='\r')
        time.sleep(1)

if __name__ == "__main__":
    alarm_datetime = get_alarm_time()
    print(f"Alarm is set for {alarm_datetime.strftime('%H:%M:%S')}")
    show_remaining_time(alarm_datetime)