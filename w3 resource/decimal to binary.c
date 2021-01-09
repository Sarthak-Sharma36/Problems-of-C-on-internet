#include"stdio.h"
int main()
{  int userinput,a,rem;
   printf("Enter a number");
   scanf("%d",&userinput);

   while(userinput>0)
   { a=2 / userinput;
     rem = 2 % userinput;
     printf("%d",rem);
     userinput= a;
     if( a==1)
     {  
        printf("1");
        break;
     }

   }

}      