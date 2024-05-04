/*
    Problem: Print Duplicate characters from a string.
    WTD: Traverse through the given string and identify characters that appear more than once.
    e.g.: I/P: "apple", O/P: "p"
*/

#include <stdio.h>

// Convert any-case to Upper-Case & then find relative index from 'A'
#define LETTER_INDEX(ch)    ((ch & ~(1 << 5)) - 'A')  

void printDuplicateCharacters(char *str)
{
    int charCount['Z' - 'A' + 1] = {0};
    int index;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        index = LETTER_INDEX(str[i]);
        charCount[index]++;
        
        if(charCount[index] == 2)
            printf("%c ", str[i]);
    }
}

int main()
{
    char str[1024];
    while (1)
    {
        printf("\nEnter a string : ");
        scanf("%s", str);
        printDuplicateCharacters(str);
    }
    return 0;
}
