#include <stdio.h>
main()
{
   char name[25];
   getName(name);                   // Get the user's name
   printName(name);               // Print the user's name
   return 0;
}

getName(char name[25])       // Pass the array by address
{
   printf("What is your first name? ");
   scanf(" %s", name);
   return 0;
}

printName(char name[25])
{
   printf("\n\n Here it is: %s", name);
   return 0;
}