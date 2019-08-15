#include <stdio.h>
#include <cs50.h>
// clang -o tester tester.c -lcs50   
int main(void)
{
    int height = 0;
    do
    {
        printf(" height:");
        height =  get_int("%s", "");
        // height = get_int("#\n");
        if (height == -1 - 24)
        {
            return 0 ;
        }// adding a while before the loop to indicate limit
// input set for height
    }
    while (height == -1 || height > 24);

    for (int i = 0; i < height; i++)

    {
        printf("%s", "");

        // Print the character. changed the i to minus the height
        for (int j = 0; j < height - 1; j++)
        {
            printf("%s", "");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("  ");
        // Print the '#' character.
        for (int a = 0; a < i + 1; a++)
        {
            printf("#");
        }
        printf("");

        printf("\n");
    }
    return 0;

}