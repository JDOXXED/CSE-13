4. Explain your answers (15 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. Reversing an array using pointers.
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
Reverse finds the addresses of the first and last elements of the array from inputs
then it finds the amout of iterations required by dividing the size of the array by 2 and rounding down
on the first iteration it saves the value of the first element to a temp variable
then the address of the first element is assigned the value of the last element
then the address of the last element is assigned the value of the temp variable which is the value originally held in the first element
after this switch of values, 
a variable holding the address to the first element is incremented and
a variable holding the address to the last element is decremented
then the same process occurs each iteration, swapping the values of the next innermost elements

2. Filtering and sorting zoo records
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
has_b:
works by using strchr to check if the inputted string array contains the character "b"
returns true if it contatins the value
returns false otherwise

should_keep:
runs has_b using the name of the animal, returns true if result of call is true
otherwise it checks if age of the animal is larger than 15, returns true if result of call is true
otherwise it checks if weight of the animal is larger than 200, returns true if result of call is true
otherwise it defaults to returning false, rejecting the animal from the list

compare_animals:
checks if the species of animal A is different than animal B's,
if true it returns the result of their species names compared
if they are the same species, if checks if the age is different,
if true it returns the difference of their ages
if they are the same name, it returns the string comparison of their names

swap:
Not an assigment function
swaps the values held in the addresses of two elements of the Animal type using a temp variable
works within sort_animals

sort_animals:
initializes a variable swapped that is used as a boolean each iteration of the sorting algorithm to determine whether or not to continue looping
Iterates over each element of an array holding elements of type Animal using Bubble sort algorithm
For each element, checks the current animal against the next animal in the array by calling compare_animals
If compare_animals returns a value larger than 0, it means the current animal should come after the next animal in sorted order
If true, the function calls swap, switching positions of the two elements in the array
After each full pass through the array, the largest remaining element has been moved to its correct position
The inner loop becomes one element shorter each iteration because the end of the array is already sorted
If a whole pass occurs without any swaps, swaps remains zero, at the outside of the innermost loop, each iteration an if statement checks if swapped is false. If swapped is false then it breaks out the outer loop.

3. String handling with dynamic memory.
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

countVowels works by initializing a count variable to 0
using a while loop it traverses over the string inputted until it reaches end char \0.
a temp variable holds the value of the current character in lowercase
an if statement checks if the temp matches the vowels, "a e i o u",
if true it increases count variable
after this check, iteraion variable i id incremented and while loop moves to the next iteration.
after the while loop reaches the end character, the function returns the count variable.

inside main
a malloc call allocates memory for n characters + null terminator
str is given the pointer of the memory allocated
if the string holds null, signifying unsuccessful allocation, exits program with error using return 1.
the address of str is assigned the input from user
vowelCount is called with the address of the string, str, and the value is assigned to a variable.
Program prints the value
then it frees the memory allocated by calling free with the address of the head of string or str.


