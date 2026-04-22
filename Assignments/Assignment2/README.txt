4. Explain your answers (20 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. Printing patterns
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

The way the programs work is by running a loop n number of times that prints each row then prints a new line
Inside this loop:
	For non mirrored triangles, the amount of stars is printed using a for loop. 
		For decreasing #of stars, initial value = n and goes down by one until it reaches 0.
		
		For increasing #of stars, initial value = 0 and goes up by one until it reaches n.
	
	For mirrored triangles, the amount of spaces is printed using a for loop, then the amount of stars.
		For decreasing #of stars, a loop that prints spaces runs i times, 
		then a loop that prints stars runs n - i times.
		
		For increasing #of stars, a loop that prints spaces runs n - i times, 
		then a loop that prints stars runs i times.

2. Arithmetic calculator
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

A while loop runs as long as the value of choice != 6
	This loop prints the instructions
	Gets value from user
	Then uses a switch that has cases 1-6, each asking for an input then printing 
	the corresponding results of the operation.

Ex: Case 1 Addition
	Prints "Enter two integers"
	Takes user input
	Calculates num 1 + num2
	Prints result
	breaks

The default case prints invalid choice, then the loop moves to the next iteration.

3. Lockers
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

A variable state is defined as 0 for false or closed.
A loop runs t times for the amount of students.
	Each iteration it checks if the locker number l is divisible by the iteration / number of student,
	if divisible, state = !state essentially toggles the state
after running, returns state

4. Making change
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

Base cases: 
	checks if amount = 0 for when you made the exact amount, returning 1 because there valid representation
	checks if amount < 0 for when you overshot, returning 0 because there is no valid representation

if the maxcoin is mathanol or of value 1, there is only one valid representation left which is using one cent coins. 
the call return count(amount - value(maxCoin,maxCoin)) essentially runs until amount is 0 in which is returns 1 for the 1 solution involving coins of value 1.


The most important line:
	return count(amount - value(maxCoin),maxCoin) + count(amount, maxCoin -1)

splits the problem into two and then adds then
-counts #of ways to represent amount using the current coin
-counts #of ways to represent amount using the next smallest coin

Example: count(2,2) finds # of ways to represent 2 using at max a coin of value 2

after first call, recursive calls to count are

count(2-2,2) - finding amount of ways to represent 2 using 2.
returning 1 because amount is 0, signifying there is one way to write 2 using 2.

count(2,1) - finding amount of ways to represent 2 using 1.

count(2,1) makes another call to the function count(2-1,1) since max coin is = 1

count(1,1) makes another call to the function count(1-1,1) since max coins is = 1

count(0,1) returns 1 because amount = 0.