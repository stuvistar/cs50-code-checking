#include<stdio.h>
#include<cs50.h>

int main(void)
{
// Creating loop to ask user for height until he gives value b/w 1 to 8 
 
 int height;
     do
     {
        height = get_int("Height : ");
     }
     while (height < 1 || height > 8);
 

     printf("stored : %d\n", height);
 
 
// creating right aligned pyramid using for loop

      for (int i = 0 ; i < height ; i++)
     {
       int k = 0;
       while (k < (height - (i + 1)))
       {
           printf(" ");
            k++;
       }
      
      for (int j = 0 ; j < i + 1 ; j++)
      {
      
         printf("#");
     
      }
      printf("\n");
     }
 
}