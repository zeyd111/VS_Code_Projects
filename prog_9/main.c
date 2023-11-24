#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "main.h"
#include "types.h" 

int main()
{
	char n1[10] = "dudy";
	char n2[10] = "durt";
	char res = 0;
	strcat(n1, n2);
	
	printf("%d\n%s",strcmp(n1,n2),n1);
	return 0;
}
