#include <stdio.h>//h - header
#include <math.h>
#include <time.h>
#include <string.h>
#include "functions.h"
#define SIZE 20
// void welcome(char name[20])
// {
//     // char hi[20];
//     printf("whats your name?\n");
//     scanf("%s", name);
//     printf("welcome to the program %s\n", name);
// }

// void bye(char name[20],int age,char gender[20])
// {
//     if(age > 50)
//     {
//         if(strcmp(gender,"male") == 0)
//         {
//         printf("Goodbye Mr.%s.Have a good day.\n", name);
//         }
//         else
//         {
//         printf("Goodbye Ms.%s.Have a good day.\n", name);
//         } 
        
        
        
//     } else if(age < 5)
//     {
//         if(strcmp(gender,"male") == 0)
//         {
//             printf("bye little boy %s\n", name);
//         } else
//         { 
//         printf("bye little girl %s\n", name);
//         }
//     }
//     else
//     {
//         printf("goodbye %s\n",name);
//     }
// }

// int ask_age(char name[20])
// {
//     int x;

//     printf("whats your age %s?\n", name);

//     scanf("%d", &x);
//     return x;
// }

// void ask_gender(char gender[20])
// {   

//     printf("whats your gender?\n");

//     scanf("%s", gender);
//     while(strcmp(gender,"male") != 0 && strcmp(gender,"female") != 0)
//     {
//         printf("there are only 2 genders!\n");
//         scanf("%s", gender);
//     }
// }

// int abs(int x)
// {
//     if(x < 0)
//     {
//         x *= -1;
//     }
//     return x;
// }

// void swop(int x,int y)
// {
//     int z;

//     z = x;

//     x = y;

//     y = z;

    
// }


void printArr(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {

        printf("%d ", arr[i]);
    }
}





int main()
{
    // int a;
    // scanf("%d", &a);
    // if(a > 9999 && a < 100000)
    // {
    //     printf("%d", a);
    // } else
    // {
    //     printf("error");
    // }

    

    // int b;
    // // scanf("%d", &b);

    // for (b = 0;b < 20;b++)
    // {
    //     printf("x = %d: ", b);

    //     if (!(b < 5) && b > 6)
    //     {
    //         printf("bəli\n");
    //     }
    //     else
    //     {
    //         printf("yox\n");
    //     }
    // }
    // int res;

    // for (int i = -100;i < 100;++i)
    // {
    //     if (!(i >= 15) && (i < 8) && (i%2 == 1))
    //     {
    //         res = i;
    //         break;
    //     }
    // }
    // printf("result: %d", res);
    // for (int x = -100; x < 100; ++x)
    // {
    //     if(!((x >= 3) || ! (x>=2)))
    //     {
    //         printf("result = %d", x);
    //         break;
    //     }
    // }
    // int s, t, a;
    // scanf("%d %d %d", &s, &t, &a);
    // if((s > 10) || (t > a))
    // {
    //     printf("YES");
    // } else
    // {
    //     printf("NO");
    // }

    // for (int i = 121;i < 1000;i++)
    // {
    //     if(!(!(i > 50) || (i%2 == 0)))
    //     {
    //         printf("result is: %d", i);
    //         break;
    //     }
    // }
    // int x;


    // scanf("%d", &x);

    // for (;x/2 != 0;x = x/2)
    // {
    //     printf("%d", x % 2);
    // }
    // printf("%d", x % 2);
    // int x, y ,z;
    // int counter = 0;
    // scanf("%d %d", &x, &y);

    // if(x > y)
    // {
    //     z = x;
    //     x = y;
    //     y = z;
    // }
    // for (int i = -100 ;i <= 100;i++)
    // {
    //     if((i >= x) && (i <= y))
    //     {
    //         counter++;
    //     }
    // }
    // printf("%d", counter);
    // int number;
    // scanf("%d", &number);
    
    // printf("1");
   

    // for (int i = 2;number >= i;i++)

    // {
    //     if(number%i == 0)
    // {
    //     printf(",%d", i);
        
    // } 
    // }
    // int x, y;
    // int sum = 0;

    // scanf("%d %d", &x, &y);

    // double time_spend = 0.0;

    // clock_t begin = clock();

    

    // if(x > y)
    // {
    //     int z = x;
    //     x = y;
    //     y = z;
    // }

    // for (int i = x;y >= i;i++)
    // {
    //     if((x <= i) && (y >= i))
    // {
    //     sum = sum + i;
    // }
    // }
    // printf("%d\n", sum);

    // clock_t end = clock();

    // time_spend = (double)(end - begin) / CLOCKS_PER_SEC ;

    // printf("%f", time_spend);

    // int x, y;
    // int sum = 0;

    // scanf("%d %d", &x, &y);

    // double time_spend = 0.0;

    // clock_t begin = clock();

    // if(x > y)
    // {
    //     int z = x;
    //     x = y;
    //     y = z;
    // }

    // int counter = y - x + 1;
    // sum = ((x + y) * counter)/2;
    // printf("%d\n", sum);

    // clock_t end = clock();

    // time_spend = (double)(end - begin) / CLOCKS_PER_SEC ;

    // printf("%f", time_spend);

    // int age;

    // printf("Whats your age?\n");

    // scanf("%d", &age);

    // while(age < 0 )
    // {
    //     printf("Incorrect age,your age must be greater that 0.\n");

    //     scanf("%d", &age);
    // }

    // printf("You are %d years old.", age);

    // int age;

    // printf("Whats your age?\n");

   

    // do
    // {
        

    //     scanf("%d", &age);
    //     if(age < 0)
    //     {
    //     printf("Incorrect age,your age must be greater that 0.\n");
    //     }
    // } while (age < 0);

    //     printf("You are %d years old.", age);

    // int x;

    // int sum = 0;
    // scanf("%d", &x);

    // while(x != 0)
    // {
    //     sum = sum + x;

    //     scanf("%d", &x);
    // }
    // printf("%d", sum);

    // int x;

    // int max = 0;

    // int count = 1;

    // scanf("%d", &x);

    // while (x != 0)
    // {
    //     if(x == max)
    //     {
    //         count++;
    //     }else if(x > max)
    // {
    //         count = 1;
    //         max = x;
    // }

    //     scanf("%d", &x);
    // }
    // if(count >= 5)
    // {
    //     printf("jackpot - %d",max);
    // }else
    // {
    // printf("%d - %d", count, max);
    // }

    // float x;
    // float sum = 0;
    // int counter = 0;
    // scanf("%f", &x);

    // while (x != 0)
    // { 
    //     counter++;

    //     sum = sum + x;

    //     scanf("%f", &x);
    // }

    // sum = sum / counter;

    // printf("%f", sum);

    // int m, n;
    // int d = 0;

    // scanf("%d %d", &m, &n);
    // if (m < n)
    // {
    //     d = m;
    // }
    // else
    // {
    //     d = n;
    // }
    
    // while((m%d != 0) || (n%d != 0))
    // {
    //     d--;
    // }

    // printf("%d", d);
    
    // char name[20];

    // char gender[20];
    // int age;


    // welcome(name);

    // ask_gender(gender);

    // age = ask_age(name);

    

    // bye(name,age,gender);
    // int x;
    // int y;

    // scanf("%d", &x);

    // y = abs(x);

    // printf("%d", y);

    // int a, b;

    // scanf("%d %d", &a , &b);

    // swop(a, b);

    // printf("%d %d", a, b);

    // int x;

    // int sum = 0;

    // scanf("%d", &x);

    // for (int i = 0;i < x;i++)
    // {
    //     int y;
    //     scanf("%d", &y);

    //     if(y % 3 == 0 && y%10 == 8)
    //     {
    //         sum += y;
    //     }
    // }
    // printf("result:%d", sum);

    // int x;

    // int sum = 0;

    // scanf("%d", &x);

    // for (int i = 0; i < x; i++)
    // {
    //     int y;
    //     scanf("%d", &y);

    //     if (y % 5 == 0)
    //     {
    //         sum += y;
    //     }
    // }
    // printf("result:%d", sum);

    // int N;

    // int sum = 0;

    // int counter = 0;

    // scanf("%d", &N);

    // for (int i = 0; i < N; i++)
    // {
    //     int y;

    //     scanf("%d", &y);

    //     sum += y;

    //     if(y > 0)
    //     {
    //         counter++;
    //     }

    // }
    // float middle = (float)sum / N;

    // printf("result:%f\n", middle);
    // if(counter >= 5)
    // {
    //     printf("YES");
    // }else
    // {
    //     printf("NO");
    // }

    // int x;

    // int counter = 0;

    // scanf("%d", &x);

    // while(x != 0)
    // {
    //     if(x%5 == 0 || x%9 == 0)
    //     {
    //         counter++;
    //     }
    //     scanf("%d", &x);
    // }
    // printf("%d", counter);

    // int x;

    // int counter = 0;

    // scanf("%d", &x);

    // while (x != 0)
    // {
    //     if (x % 4 == 0 || )
    //     {
    //         counter++;
    //     }
    //     scanf("%d", &x);
    // }
    // printf("%d", counter);







    // int x;

   

    // int counter = 0;

    // scanf("%d", &x);

    // while (x != 0)
    // {
    //     if (x % 4 == 0 && x > 99 && x < 1000)
    //     {
    //         counter += x;
    //     }
    //     scanf("%d", &x);
    // }
    // printf("%d", counter);






    // int x;

    // int counter = 0;

    // scanf("%d", &x);

    // while (x != 0)
    // {
    //     if (x % 3 == 0 && x < 10)
    //     {
    //         counter++;
    //     }
    // //     scanf("%d", &x);
    // // }
    // // printf("%d", counter);

    // int salaries[10];

    // for (int i = 0;i < 10;i++)
    // {
    //     salaries[i] = 0;

    //     printf("%d ", salaries[i]);
    // }
    // int count = 0;

    // // int arr[SIZE] = {3, 5, 7, 1, 9,5,6,3,7,3,5,212,435,7,6545,234,425};

    // int arr[SIZE] = {6545, 453, 425, 234, 212, 9, 7, 7, 7, 6, 5, 5, 5, 3, 3, 3, 1, 0, 0, 0};

    // for (int i = 0; i < SIZE - 1; i++)
    // {
    //     for (int j = i + 1; j < SIZE; j++)
    //     {
    //        if(arr[i] > arr[j])
    //        {
    //            count++;

    //            int z;

    //            z = arr[i];

    //            arr[i] = arr[j];

    //            arr[j] = z;
    //        }
    //     }
        
    // }
    










    // for (int i = 0; i < SIZE; i++)
    // {

    //     printf("%d ", arr[i]);
    // }

    // printf("\n amount of comparation %d", count);

    // int abc[20] = {12, 43, 56, 2, 3, 4, 33, 643, 32};

    // printArr(abc, 20);
    // printf("%f\n", minFloat(12.4353,21.123));

    // printf("%d\n", maxInt(12, 21));

    // printf("%d", isZero(232));

    // int z = getAge();

    // int a, b, c, d;

    // int counter = 0;

    // scanf("%d %d %d %d", &a, &b, &c, &d);

    // counter = a;

    // if(d > b)
    // {
    //    counter = (d - b) * c + a;
    // }

    // printf("%d", counter);

    // func1();

    
// int x = sum(7);

//     printf("%d", x);

//     printf("%d", mul(5));

    printf("%d\n", rulet(17));
    printf("%d\n", rulet(9));
    printf("%d\n", rulet(10000));
    printf("%d\n", rulet(1));
    printf("%d\n", rulet(25669678));
    printf("%d\n", rulet(7));



    return 0;
}