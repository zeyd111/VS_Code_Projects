
#include "main.h"

int main()
{
	char str[] ="sjrjjy778jytyjdt87yj5";
	char dig[20] = {0};
	int j = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if(str[i] >= 0x30 && str[i] <= 0x39)
		{
			strcpy(&dig[j],&str[i]);
			j++;
		}
	
	}
	printf(dig);
	return 0;
}
