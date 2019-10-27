#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char *arr;    int i;

   printf("coucou\n");
   arr = (char *)malloc(sizeof(char)*5);
   strcpy(arr,"ameeaa");
   printf("print %s\n", arr);
   printf("coucou\n");
   return 0;
}

