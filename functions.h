#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
int maxInt(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int minInt(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

float maxFloat(float x, float y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

float minFloat(float x, float y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }

}

bool isZero(int x)
{
if (x == 0)
{
        return true;
}else
{
        return false;
}
}

int getAge()
    {
        int x = 0;

        int maxAge = 140;

        while(x < 0 || x > maxAge)
        {
        printf("whats your age(from 0 to %d)?\n",maxAge);

        scanf("%d", &x);
        }
        

        return x;
    }

void func1()
{
    printf("hello");
    func1();
}

int sum(int num)
{
    if(num == 1)
    {
        return 1;
    }

    int result = num + sum(num - 1);

    return result;
}

int mul(int x)
{
    if(x == 0 || x == 1)
    {
        return 1;
    }
    
    return x * mul(x-2);
}

int rulet(int pieces)
{
    int x = pieces / 2; // 17 / 2 = 8
    if(pieces == 1)
    {
        return 0;
    }
    if (pieces % 2 == 1)
    {
        return 1 + rulet(x + 1);
    }
    return 1 + rulet(x);
}