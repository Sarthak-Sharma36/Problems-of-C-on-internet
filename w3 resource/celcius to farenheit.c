#include"stdio.h"
int main () 
{
	printf("Enter celcius     ");
	float userinput,ans;
	scanf("%f",&userinput);

	ans=(userinput * 9/5)+32;
	printf("The answer is %10.2f",ans);
	getchar();
	getchar();
}