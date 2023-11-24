#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "main.h"
#include "types.h" 

int main()
{
	char ret[30] = "zeyd poshel v chkolu";
	char dye[10] = {0};
	
	printf("%s", strstr(ret, "zeyd"));
	return 0;
}
