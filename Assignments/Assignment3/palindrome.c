#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[101];
    char fmtstr[101];
    printf("Enter a string (max 100 characters): ");

    /* TODO: read an input string until the new-line character is read. 
             remove the new line character and check if the string is a palindrome.
             your check should ignore all non alpha-numeric characters and case-sensitivity.
             print if the string is a palindrome or not.
             your print statements should match the sample output prints shown in the pdf. */
    
    scanf("%100[^\n]", str);
    int j = 0;

    /*
    Formats string
    - removes non alphanumeric characters
    - makes string lowercase
    */

    for (int i = 0; i < strlen(str); i++){
        if (isalnum(str[i])){
            fmtstr[j] = tolower(str[i]);
            j++;
        }
    }

    /*
    palindrome checker
    - breaks string into two seperate strings, reversing order of one
    - checks if ascii value is equivalent
    - racecar --> string1 = rac, string2 = rac
    */

    char fhalf[51] = "", shalf[51] = "";

    for (int i = 0; i < strlen(fmtstr)/2; i++){
        j = (strlen(fmtstr) -1 - i);
        fhalf[i] = fmtstr[i];
        shalf[i] = fmtstr[j];
    }
    if (strcmp(fhalf, shalf) ==0){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
