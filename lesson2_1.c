#include <stdio.h>
// #include <conio.h>
int main()
{
    // clrscr();

 

    int x;

    printf("Write x: ");

    scanf("%d",&x);

    // printf("%d %d", x,y);
if(x == 0)
{
    printf("0");
} else if(x%2 == 0)
{
    printf("even");
} else
{
    printf("odd");
}
 return 0;
}