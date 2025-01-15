import random
import time
from datetime import datetime, timedelta
import curses

# List of log levels and messages
LOG_LEVELS = ['INFO', 'DEBUG', 'WARNING', 'ERROR', 'CRITICAL']
MESSAGES = [
    'User logged in successfully',
    'File not found',
    'Database connection established',
    'Invalid user input',
    'Server restarted',
    'Connection timeout',
    'Memory usage high',
    'Disk space running low',
    'User logged out'
]

def generate_log_entry(unique_id):
    """
    Generates a single unique fake log entry.
    """
    # Random log level
    level = random.choice(LOG_LEVELS)
    
    # Random message
    message = random.choice(MESSAGES)
    
    # Unique timestamp
    timestamp = (datetime.now() - timedelta(minutes=unique_id)).strftime('%Y-%m-%d %H:%M:%S')
    
    # Log format: [timestamp] [level] - message
    log_entry = f'[{timestamp}] [{level}] - {message} (ID: {unique_id})'
    return log_entry

def generate_logs(num_entries):
    """
    Generates a specified number of unique fake log entries.
    """
    logs = []
    for i in range(num_entries):
        logs.append(generate_log_entry(i))
        # Optional: Sleep for a short period to simulate real-time logging
        time.sleep(random.uniform(0.1, 0.5))
    return logs

def display_logs(stdscr, logs):
    """
    Display logs in a curses window with a black background.
    """
    curses.curs_set(0)  # Hide cursor
    stdscr.bkgd(' ', curses.color_pair(1))  # Set background color to black
    stdscr.clear()
    
    # Initialize color pairs
    curses.start_color()
    curses.init_pair(1, curses.COLOR_WHITE, curses.COLOR_BLACK)
    
    max_y, max_x = stdscr.getmaxyx()
    for i, log in enumerate(logs):
        if i < max_y:
            stdscr.addstr(i, 0, log[:max_x-1])  # Add log entry to the screen
    
    stdscr.refresh()
    stdscr.getch()  # Wait for user input to exit

if __name__ == "__main__":
    num_entries = 99
    logs = generate_logs(num_entries)
    
    # Display logs in the terminal
    curses.wrapper(display_logs, logs)
