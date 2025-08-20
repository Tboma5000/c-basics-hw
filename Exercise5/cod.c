#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, d, e, f, g, h, y;
	printf("Enter a: \n");
	scanf("%f", &a);

	printf("Enter b: \n");
        scanf("%f", &b);

	printf("Enter c: \n");
        scanf("%f", &c);

	printf("Enter d: \n");
        scanf("%f", &d);

	printf("Enter e: \n");
        scanf("%f", &e);

	printf("Enter f: \n");
        scanf("%f", &f);

	printf("Enter g: \n");
        scanf("%f", &g);

	printf("Enter h: \n");
        scanf("%f", &h);

	printf("%f \n", pow(4, 0.5));
	
	y = (log(pow((a * a + b * b), 0.5)) + pow((c * d), 0.5)) / e * pow(f, 0.5) - log(g+h);
	printf("Y = %f \n", y);
	return 0;
}
