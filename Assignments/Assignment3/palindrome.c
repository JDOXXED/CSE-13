#include <stdio.h>
#include <string.h>

/*
removes spaces from string
-checks if character is a space
-if a space, moves to next character
-if a character, inputs character
*/
void remove_spaces(char *str){
    int i = 0; j = 0;

    while (str[i]){
        if (str[i] != " "){
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int palindrome(char *str){
     /*
    palindrome function
    -uses string without spaces
    -checks first char with last, then continues
    -iterates #chars / 2
    Examples:
    rttr - 4 chars --> 2 iterations --> compare string[0] with string[3], compare string[1] with string[2]
    rtr - 3 chars --> 1 iteration --> compare string[0] with string[2], string[1] is middle
    */

    int lenstring = strlen(str);

    for (int i = 0; i < ; i++;){
        if (getchar(i)){

        }
    }
}

int main(){
    char string[100];

    printf("Enter a string (max 100 characters): ");
    fgets(string, 100, stdin);
    
    i

    return 0;
}