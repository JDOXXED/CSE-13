#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim(char s[]) {
   /* TODO: remove all trailing spaces at the end of the string s. 
    * Any other spaces in-between the string must be preserved.
   */
  /*
    - find last character
    - only apply characters before spaces
  */
    char copy[strlen(s)];
    strcpy(copy, s);

    int lastc = 0;

    for (int i = 0; i < strlen(s); i++){
        if (isalnum(s[i]) || s[i] == '!'){
            lastc = i;
        }
    }
    //makes array empty
    memset(s,0,strlen(s));
    //copies chars up to last character
    strncpy(s, copy, lastc+1);

}

int main() {
   char str[100];  // Assuming max input length of 100 characters
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);  // Read input including spaces
   printf("Input string: [%s]\n", str);
   trim(str);  // Call the function to trim trailing spaces
   printf("Trimmed string: [%s]\n", str);

   return 0;
}
