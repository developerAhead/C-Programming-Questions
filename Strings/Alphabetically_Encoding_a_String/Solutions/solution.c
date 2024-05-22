/**
 * Problem: String Encoding.
 * WTD: : Encode a string by replacing each character with the third character 
 * after it in the alphabet. Wrap around to the start of the alphabet after 'z'.
 * e.g.: I/P: "abc", O/P: "def"
*/

#include <stdio.h>

#define CONVERT_LETTER_TO_NUM(ch)   (ch & ~((char)0x3 << 5))

int main()
{
    char str[1024];
    printf("Enter a string : ");
    scanf("%[^\n]%*c", str);

    char ch;
    for(int i = 0; str[i] != '\0'; i++)
    {
        ch = str[i] - 'a';
        ch = (ch + 3) % ('z' - 'a' + 1);
        str[i] = ch + 'a';
        
    }
    printf("Output Str\t : %s\n", str);

    return 0;
}