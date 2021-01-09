#include "stdio.h"
#include"conio.h"
int main()
{  int diameter,radius;
    printf("Enter diameter of circle ");
    scanf("%d",&diameter);

    diameter=diameter /  2;
    radius=diameter;
    radius=radius  *  radius;
    
    printf("the area of circle is %d\n",radius);
    getchar();
    getchar();
}