#include <stdio.h>
// #include <conio.h>
// < > - угловые
// [ ] - квадратные
// ( ) - круглае
// { } - фигурные

// ' ' - одиночные
// " " - двойные
int main (){
    // clrscr();

    printf("Write your number: ");

    int y;

    scanf("%d", &y);
    printf("your number is %d", y);

    if(y > 0)
    {
        printf("your number is positive");
    }
    
    if(y < 0)
    {
        printf("your number is negative");
    }
    return 0;
}
// bool g; // true/false <-- from bool.h
// int y;//integer 
// unsigned int//unsigned without any signs
// float//number with numbers after coma
// double//more accurate version of float


