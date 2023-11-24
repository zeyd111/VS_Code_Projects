
#include "main.h"

int main()
{
	char he[20] ="hello there";
	char sh[20] = "smith";
	printf("length of -%s- is %d\n", he, strlen(he));
	printf("%s mrs.%s\n", he, sh);
	int rt = strcmp(he, sh);

	switch(rt)
	{
		case -1:
			printf("different");
			break;
		case 1:
			printf("different");
			break;
		case 0:
			printf("same");
			break;
	}

	return 0;
}
