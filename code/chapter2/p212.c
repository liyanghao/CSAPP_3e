#include<stdio.h>

int main(void){
	int x = 0x87654321;

	printf("%x\n", x & 0xFF);
	printf("%x\n", x ^(~0xFF));
	printf("%x\n", x | 0xFF);
}