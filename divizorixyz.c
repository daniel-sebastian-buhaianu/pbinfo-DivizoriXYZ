#include <stdio.h>

int main()
{
	unsigned n, x, y, z;

	scanf("%u", &n);

	if (n >= 12 && n % 2 == 0 && n/2 % 3 == 0) {
		z = n/2;
		x = z/3;
		y = x*2;
		
		printf("%u %u %u", x, y, z);
	} else {
		printf("nu exista");
	}

	return 0;
}

// scor 100
