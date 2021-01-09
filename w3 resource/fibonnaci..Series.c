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
      getchar();// compiler hai ya nhi ye bhi dekhle// badn krde dono///////// gnu c++ compiler??
} // kuch ni hota CChljayegu han 
// bye ab ho jaayega jab complete ho jaaye installation tab chlana dekj han h