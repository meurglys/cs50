#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //input lowercase
    string s = get_string("Before: ");
    //output uppercase
    printf("After: ");
    //function
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
            // 32 - ASCII code for uppercase
        }
        else
        {
            //print the rest
            printf("%c", s[i]);
        }
    }
    //new line
    printf("\n");
}
