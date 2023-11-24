#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "main.h"
#include "types.h"

int main()
{
	add8();
	printf("function 1: %d + %d = %d\n", ell, gell, well);
	sub2();
	printf("function 2: %d - %d = %d\n", ull, gull, wull);
	add3();
	printf("function 3: %d + %d = %d\n", wull, well, jell);
	mult4();
	printf("function 4: %d x %d = %d\n", jell, bull, real);
	return 0;
}


int add8 (void)
{
	well = ell + gell;
	return well;
}

int sub2(void)
{
	wull = ull - gull;
	return wull;
}

int add3 (void)
{
	jell = sub2() + add8();
	return jell;
}

void mult4 (void)
{
	real = add3() * bull;
}


