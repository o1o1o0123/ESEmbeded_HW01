
#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int (*Ans[])(int a, int b)={plus,minus,multiply,divided};
int main()
{
	int a, b, t;
	char c;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &c, &b);
	switch(c)
	{
		case'+':
			t=0;
			break;
		case'-':
			t=1;
			break;
		case'*':
			t=2;
			break;
		case'/':
			t=3;
			break;
		default:
			break;
	}
	//IF ELSE IF
		printf("%d %c %d = %d\n", a, c, b,Ans[t](a,b) );
}
