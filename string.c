#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//\n need to have this here for copying for keyboard :(

int main(int argc, string argv[])
{
    //get key in
    if (argc != 2)
    {
        printf("add the number before running it...");
        return 1;
    }

    // convert string to integer key
    int key = atoi(argv[1]);
    //prints the string
    printf("plaintext:");
    string s = get_string();
    //prints the output string
    printf("ciphertext:");
    //runs through conditions
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //isalpha - checks if character is an alphabetic letter.
        if (isalpha(s[i]))
        {
            if (isupper(s[i]))
            {
                //checks caps
                printf("%c", ((s[i] - 'A' + key) % 26) + 'A');
            }
            else
            {
                //checks caps
                printf("%c", ((s[i] - 'a' + key) % 26) + 'a');
            }
        }
        else
        {
            printf("%d", s[i]);
        }
    }
    printf("\n");
    return 0;
}
