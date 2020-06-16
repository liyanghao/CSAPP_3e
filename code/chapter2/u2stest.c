#include<stdio.h>

int main(void){
	unsigned u = 4294967295u;
	int tu = (int)u;

	printf("u=%u, tu=%d\n", u, tu);

	return 0;
}