#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "main.h"
#include "types.h" 

int main()
{
	char he[20] ="hello there";
	char sh[20] = "smith";
	printf("length of -%s- is %d\n", he, strlen(he));
	printf("%s mrs.%s\n", he, sh);
	int rt = strcmp(he, sh);
	if(rt = 0)
	{
		printf("same");
	}
	else
	{
		printf("diffirent");
	}
	return 0;
}

