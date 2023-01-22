#include<stdio.h>
#include<stdlib.h>
#define MAX(dtype, fname)\
	dtype fname(dtype x, dtype y)  \
{  \
	return x>y?x:y;  \
}

MAX(int, max_int)
/*Expanded as:
 * int max_int(int x, int y)
 * {
 *      return x>y? x:y;
 * }
 */

MAX(float, max_float)
/*Expanded as:
 * float max_float(float x, float y)
 * {
 *      return x>y? x:y;
 * }
 */

MAX(char, max_char)
/*Expanded as:
 * char max_char(char x, char y)
 * {
 *      return x>y? x:y;
 * }
 */

int main(void)
{
	int a=10, b=30, resulti;
	float c=45.0f, d=34.0f, resultf;
	char e='a', f='A', resultch;

	resulti=max_int(a, b);
	resultf=max_float(c, d);
	resultch=max_char(e, f);

	printf("\nMaximum integer: %d\nMaximum floating point number: %f\nMaximum character: %c\n", resulti, resultf, resultch);
	return 0;
}
