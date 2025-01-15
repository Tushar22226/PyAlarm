import random
import time
from datetime import datetime
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
    timestamp = datetime.now().strftime('%Y-%m-%d %H:%M:%S')
    
    # Log format: [timestamp] [level] - message
    log_entry = f'[{timestamp}] [{level}] - {message} (ID: {unique_id})'
    return log_entry

def display_logs(stdscr):
    """
    Continuously display logs in a curses window with a black background,
    appending new logs and keeping previous ones visible.
    """
    curses.curs_set(0)  # Hide cursor
    stdscr.bkgd(' ', curses.color_pair(1))  # Set background color to black
    stdscr.clear()
    
    # Initialize color pairs
    curses.start_color()
    curses.init_pair(1, curses.COLOR_WHITE, curses.COLOR_BLACK)
    
    max_y, max_x = stdscr.getmaxyx()
    log_lines = []
    
    while True:
        # Generate new logs
        for i in range(5):
            log_lines.append(generate_log_entry(i))
        
        # Clear the screen
        stdscr.clear()
        
        # Display all logs
        for idx, line in enumerate(log_lines):
            if idx < max_y:
                stdscr.addstr(idx, 0, line[:max_x-1])  # Add log entry to the screen
        
        stdscr.refresh()
        
        # Scroll logs up if they exceed the terminal height
        if len(log_lines) > max_y:
            log_lines = log_lines[-max_y:]
        
        time.sleep(1)  # Wait for 1 second before generating new logs

if __name__ == "__main__":
    # Display logs in the terminal
    curses.wrapper(display_logs)
