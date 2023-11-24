#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "main.h"
#include "types.h" 

int main()
{
	char def[34] = "vfdrhehrhhtrtrt";
	char prf[10] = {0};
	char tef;
	for (int i = 0; i < strlen(def); i += 2)
	{
		strncpy(prf, &def[i], 2);
		printf("%s|", prf);
	}
	return 0;
}
