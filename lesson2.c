#include <stdio.h>
// #include <conio.h>
int main(){
    // clrscr();

    int y;

    int x;

    printf("Write x and y: ");

    scanf("%d %d", &x, &y);

    // printf("%d %d", x,y);

    if(x > y)
    {
        printf("%d is bigger than %d", x, y);
    } else if(y > x)
    {
        printf("%d is bigger than %d", y, x);
    } else 
    {
        printf("%d is equal to %d", x, y);
    }
        return 0;

    
}