#include <stdio.h>
void Print(char *arr[], int len);
int main()
{
   char *pArray[] = {"How","are","you"};
   int num = sizeof(pArray) / sizeof(char);
   printf("Total string numbers = %d\n", num);
   Print(pArray, num);
   return 0;
}
void Print(char *arr[], int len)
{
   int i;
   for(i = 0; i < len; i++)
   {
      printf("%s ", arr[i]);
   }
   printf("\n");
}
#include <stdio.h>
void Print(char *arr[], int len);
int main()
{
   char *pArray[] = {"How","are","you"};
	int num = sizeof(pArray) / sizeof(char*);
   printf("Total string numbers = %d\n", num);
   Print(pArray, num);
   return 0;
}
void Print(char *arr[], int len)
{
   int i;
   for(i = 0; i < len; i++)
   {
      printf("%s ", arr[i]);
   }
   printf("\n");
}