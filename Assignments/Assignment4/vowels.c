/* Counting the number of vowels in a string */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int countVowels(char *str) {
    /* TODO: return the number of vowels in the string str */
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    int n;
    printf("Enter the maximum length of the string: ");
    scanf("%d", &n);

    char *str;  //pointer to the string
    int vowelCount; //variable to store the number of vowels

    /* TODO: Allocate memory to store the string. 
             If allocation is successful, then read a string and call count the number of vowels. 
                You can use fgets() to read the string from stdin. 
                You may wish to consume any leftover newline character before reading your string using scanf(" ");
             If allocation is not successful, print "Memory allocation failed!" and exit with a return value of 1
             Tip: do not forget to free any memory that you allocated.
    */

    str = (char *)malloc((n + 1) * sizeof(char)); // Allocate memory for n characters + null terminator
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    scanf(" ");

    printf("Enter a string: ");
    fgets(str, n + 1, stdin);

    vowelCount = countVowels(str);

    printf("Number of vowels: %d\n", vowelCount);

    free(str);
    return 0;
}
