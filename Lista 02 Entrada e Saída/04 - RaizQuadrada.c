#include <stdio.h>

int main()
{
	int i;

	for(i=1;i<17;i++)
	{
		printf("sqrt(%2d) = [%.2f]\n",i,sqrt(i));
	}

	getchar();
	return 0;
}