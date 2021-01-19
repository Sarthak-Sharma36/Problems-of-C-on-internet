#include<stdio.h>
int main()
{ int userinput = 0,rem = 0;
   scanf("%d",&userinput);
   int arr[userinput];
   for(int i= 0;i<userinput;i++)
   {
          scanf("%d",&arr[userinput]);
   }
     for(int i = 0;i<userinput;i++)
     { rem=arr[userinput]%10;
     	arr[userinput]++;
       printf("%d\n",rem);
       rem = 0;
     }
     getchar();
     getchar();
}

