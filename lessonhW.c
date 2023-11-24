#include <stdio.h>
#include <math.h>

int main(){

    double discriminant, root1, root2, a, b, c;

    printf("write a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0){
    root1 = -b - sqrt(discriminant) / (2 * a);

    root2 = -b + sqrt(discriminant) / (2 * a);

    printf("root 1 is %d and root 2 is %d", root1, root2);
    } else if (discriminant == 0)
    {
    root1 = -b / (2 * a);
    printf("root 1 is %d", root1);
    } else
    {
    printf("complex");
    }


    return 0;
}