#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "main.h"
#include "types.h"

int main()
{
	mult();
	printf("%d x %d = %d\n", ru, tu, jk);
	mult2();
	printf("%d x %d = %d\n", hu, du, hk);
	add3();
	printf("%d + %d = %d\n", eu, ou, kk);
	sub4();
	printf("%d - %d = %d\n", cu, gu, lk);
	res();
	printf("%d + %d + %d + %d = %d\n", jk, hk, kk, lk, oi);
	return 0;
}

int mult(void)
{
	jk = ru * tu;

	return jk;
}

int mult2(void)
{
	hk = hu * du;

	return hk;
}
int add3(void)
{
	kk = eu + ou;

	return kk;
}

int sub4(void)
{
	lk = cu - gu;

	return lk;
}

void res(void)
{
	oi = jk + hk + kk + lk;
}