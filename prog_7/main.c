#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "main.h"
#include "types.h" 

int main()
{
	dff();
	printf("%d + %d : %d = %d", tf, tj, tg, ig);
	return 0;
}

void dff(void)
{
	ig = tf + tj / tg;
	
}