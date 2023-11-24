
#include "main.h"

int main()
{
	char n1[10] = "fsd";
	char n2[20] = "fsd";
	
    int rec = strcmp(n1, n2);
	
	switch(rec)
	{
		case -1:
			printf("%s and %s are different", n1, n2);
			break;
		case 1:
			printf("%s and %s are different", n1, n2);
			break;
		case 0:
			printf("%s and %s are the same", n1, n1);
			break;
			
		}


	return 0;
}
