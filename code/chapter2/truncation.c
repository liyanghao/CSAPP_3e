#include<stdio.h>

int main(void){
	int x = 53191;
	short sx = (short) x;
	int y = sx;

	printf("sx = %d\n", sx);
	printf("y = %d\n", y);
}