#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "main.h"
#include "types.h" 

int main()
{
	char tre[10] = "trust";
	char bre[10] = "trust";
	if( strcmp (tre,bre) == 0)
	{
		printf("same");
	}
	else
	{
		printf("different");
	}

		return 0;
}
