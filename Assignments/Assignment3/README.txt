6. Explain your answers (25 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. Frequency of leading digits
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
funtion getMSDigit takes an integer n and outputs its first digit. A while loop divides n by 10 until it reaches the last digit, then it returns the n.
a while loop scans several integers, for each integer is finds the most significant digit, then incriments the corresponding ith element in array freq.

2. Checking if a string is a palindrome
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
A for loop traverses the string array of user input, for each character it checks if it is a valid character. 
If it is, it is first moved to lowercase then added into array called fmtstring (formatted string) 
then the string is broken in half into two smaller strings, the second is reversed through a for loop, and 
an if statement checks whether the values of the strings are equal.

3. We shall trim!
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
Trim finds the last alphanumeric character or ! symbol in string array through a for loop checks for the next  alphanumeric
character and assigns it to a variable. Then creates a copy of the original string up until the last alphanumeric character.


4. Multiplying matrices
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

The program first reads the row and columns of a matrix. If it is n x k * k * m, then the matrices are compatible
The program does matrix multipication by finding the sum of each element
the sum is found by multiplying an elements row by its column

5. Merge sort
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

Base case:
left >= right . if the array has one element then return

calculate the midpoint and recursively sort the left and right hald

call merge to combine two sorted halves

merge creates two temp arrays containing the left and right halves of the array
it compares left and right side elements, copy the smaller into array, then go to the next numbers
copy the remaining numbers

