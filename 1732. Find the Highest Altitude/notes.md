## Application:

The gain array stores all the track points. The current variable is initialized to 0 and in this part of code “ current =+ gain[i] “, the current variable stores the sum of each track point after that it enters a loop where it checks if the current is greater than max. We initialized max to 0. If the current is larger than max, max stores the current value. It exits the loop and returns max

##Where I went wrong:
Overlooked the use of current variable and its importance. Started with just gain and max variables
