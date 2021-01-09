#include "stdio.h"
int main()
{ int a,b,c; 
	printf("Which table do you expect to me->");
	scanf("%d",&a);
	printf("And from %d to which number eg:%ito10 or some thing else->",a,a);
	scanf("%d",&b);
     while(b>0)
     {  

        c=a*b;
        printf("%d * %d = %d\n",a,b,c);
        b--;
     }
	getchar();
	getchar();//Usme thoda bhut Linux Api ke baare me hai Lekin Win32 mainly microsoft ke Documentations me hi hai
}