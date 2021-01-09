#include"stdio.h"
int main()
{ int userinput,a = 0,b = 1,z,result=0; 
      printf("Enter thr number to find its fibonnaci  ");
      scanf("%i",&userinput);
      for(z=0;z<userinput;z++)
      {  printf("%d   ",a);
         result= a+b;
         a=b;
         b=result;
      }
      getchar();
      getchar();
}
