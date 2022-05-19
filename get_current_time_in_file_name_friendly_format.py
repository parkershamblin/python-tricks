from datetime import datetime
f = lambda: print(datetime.now().strftime("%Y-%m-%d_%H-%M-%S"))
f() # Now we can quickly type f() to get the current time in file name friendly format
