#include <stdio.h>

int main()
{
	double mel = 1;
	double den = 1;
	double sum = 0;
	for (den=1; den<100; den++)
	{
		int flag = 1;
		if ((int)den % 2 == 0)
		{
			flag = -1;
		}
		sum+=flag*(mel/den);
	}
	printf("%f\n", sum);
	return 0;
}
