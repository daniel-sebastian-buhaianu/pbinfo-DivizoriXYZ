#include <stdio.h>

int main()
{
	unsigned n, x, y, z;
	unsigned short d, dif;
	char found = 0;

	scanf("%u", &n);

	if (n < 12) printf("nu exista");
	else {
		d = 2;
		while (d*d < n) {
			if (n % d == 0) {
				x = d;
				y = x*2;
				z = x*3;

				dif = n - (x + y + z);

				while (dif >= 0 && z <= n/2) {
					if (dif == 0) {
						found = 1;

						printf("%u %u %u\n", x, y, z);

						x = y;
						y = x*2;
						z = x*3;
					} else {
						z = x*(3 + dif/x);
					}
					
					dif = n - (x + y +z);
				}
			}

			d++;
		}

		if (d*d == n || !found) printf("nu exista");
	}

	return 0;
}
// scor 20
