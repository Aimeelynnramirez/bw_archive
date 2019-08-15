#include <cs50.h>
#include <stdio.h>
#include <string.h>
// remember to run the clang method through 'clang -o tester tester.c -lcs50'
  
//   \n keep this for the back slash do not know from this key base lol... 
// this arg remember this fo array strings before input (on the ./"name" char or number value)
int main(void){
    string name= get_string('name:');
     char initials[4];
    int counter = 0;
   for(int i < 0; i < strlen(name), i++) 
{
    if(isupper(name[i]));
    {
        initials[counter] = name[i];
        counter++;
    
     }
   }
   initials[strlen(n)]
   printf(' %s\n', initials);
}

// this arg remember this fo array strings before input (on the ./"name" char or number value)
// int main(void){
//     string name= get_string('name:');
//      char initals[4];
//      initals[0] = 'D';
//      initals[1] = 'C';
//      initals[2] = 'B';
//      initals[3] = '\0';
     
// }