4. Explain your answers (15 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. Running total and average
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

There is a while loop that runs as long as the user inputs a number/float or terminates it. this is done with while(scanf("%lf", &X) == 1)
Inside this loop, each user input is added to a variable called sum to find the sum of all entries. Then a count variable n is incremented
by 1 to count how many numbers have been inputted. The average of the numbers is found by dividing the sum of all inputs by the number of inputs. Then a print statement print outs the sum of all entries and the loop runs again.

2. Approximating pi
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

A loop runs from i=0 to i=n. Each loop get the next term of the summation of pi using the i value of the current loop in the equation 4/(8i+1) -2/(8i+4) - 1/(8i+5) - 1/(8i+6). Each term is multiplied by 1/16i so I have a float called power that starts at 1.0 and is divided by 16 each iteration. After each iteration, a variable pi adds the next term.
This one was the hardest for me to get just because of the calculation so sorry if i have a bad explanation.

3. Happy numbers
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

A loop runs until the sum of digits is equal to 4 or 1.
Inside this loop is another loop that uses a temp variable to store the last inputted number. Then it gets the right most digit of the number inputted using temp %10, then the digits squares is added to a variable called sum. Then the temp variable gets rid of the last digit by temp /= 10 and the loop runs for the rest of the digits until there are none.
When this loop finishes, the sum of the digits is printed, then the outer loop runs as long as the sum is not 4 or 1, indicating an unhappy or a happy number.
