#include <stdio.h>
#include <math.h>

int main() {
        float a = 3,
	      b = 4.5,
	      c = 16,
	      d =  2.7,
	      e = 5,
	      f = 25.2,
	      g = 2.4,
	      h = 6,
	      y;

        y = (log(pow((a * a + b * b), 0.5)) + pow((c * d), 0.5)) / e * pow(f, 0.5) - log(g+h);
        printf("Y = %f \n", y);
        return 0;
}

