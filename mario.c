#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int height = 0;
do{
    printf(" height:");
    height =  get_int();
    // height = get_int("#\n");
    if (height == 0-23)
{
return 0 ;

}// adding a while before the loop to indicate limit
// input set for height
}
while (height == 0 || height > 23);

for(int i= 0; i< height; i++)
{
// printf("%s","");
// }
   for(int j = 0; j < height-i-1; j++)
        {
            printf("%s", " ");
        }
        // Print the '#' character.
  for(int k = 0; k < i+1; k++)
    {
   printf("##");
  }
   printf("#\n");
    }
 return 0;
}