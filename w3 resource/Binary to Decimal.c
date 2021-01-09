
   #include<stdio.h>
int main()
{ int userinput,remainder,b=1,decimal,c;
   printf("Enter a binary number for conversion into decimal number->  ");
   scanf("%i",&userinput);
   c= userinput;
   while(userinput != 0)
   {  remainder=userinput%10;
      decimal=decimal+remainder*b;
      userinput = userinput/10;
      b=b*2;
   }
    printf("the answer of %d is %d",c,decimal);
   getchar();
   getchar();
}
