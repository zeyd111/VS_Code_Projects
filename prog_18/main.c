
#include "main.h"

int main()
{
	volume();
	printf("volume is %d", res);

	return 0;
}

void volume(void)
{
	res = L * W * H;
}
