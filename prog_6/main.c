#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "main.h"
#include "types.h"

int main()
{
	char name[10] = "teff";
	char dust[10];
	printf("length of the %s is %d\n", name,strlen(name));
	gr = strlen(name) * 2;
	printf("length of the string x 2 = %d\n", gr);

	strncpy(dust, &name[2], 2);
	printf("%s", dust);
	return 0;
}

