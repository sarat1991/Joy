#include <stdio.h>

int my_strlen(char *s)
{
  //my_strlen comment
   char *p = s;
  //test

   while (*p)
      ++p;

   return (p - s);
}

//Test 123

int main(void)
{
 // This is a main function 
  int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));

   return 0;
}
