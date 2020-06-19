#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len);

int main()
{
	short sx = -12345;
	unsigned uy = sx;

	printf("uy = %u:\t", uy);
	show_bytes((byte_pointer) &uy, sizeof(unsigned));
	return 0;
}

void show_bytes(byte_pointer start, size_t len){
	int i;
	for (i=0;i<len;i++){
		printf(" %.2x", start[i]);
	}
	printf("\n");
}

void show_int(int x){
	show_bytes((byte_pointer) &x, sizeof(int));
}


void show_float(float x){
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
	show_bytes((byte_pointer) &x, sizeof(void *));
}