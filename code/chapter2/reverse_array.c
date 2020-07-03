#include<stdio.h>

void inplace_swap(int *x, int *y);
void reverse_array(int a[], int cnt);

int main(void){
	// int i;
	// int a[] = {1,2,3,4};
	// int size = sizeof(a)/sizeof(a[0]);
	// for(i=0;i<size;i++){
	// 	printf("%d ", a[i]);
	// }
	// printf("\n");

	// reverse_array(a, size);

	// for(i=0;i<size;i++){
	// 	printf("%d ", a[i]);
	// }
	// printf("\n");

	int i;
	int a[] = {1,2,3,4,5};
	int size = sizeof(a)/sizeof(a[0]);
	for(i=0;i<size;i++){
		printf("%d ", a[i]);
	}
	printf("\n");

	reverse_array(a, size);

	for(i=0;i<size;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	// int i;
	// int a[] = {1,2,3,4};
	// for(i=0;i<4;i++){
	// 	printf("%d ", a[i]);
	// }
	// printf("\n");

	// reverse_array(a, 4);

	// for(i=0;i<4;i++){
	// 	printf("%d ", a[i]);
	// }
	// printf("\n");

	// int i;
	// int a[] = {1,2,3,4,5};
	// for(i=0;i<5;i++){
	// 	printf("%d ", a[i]);
	// }
	// printf("\n");

	// reverse_array(a, 5);

	// for(i=0;i<5;i++){
	// 	printf("%d ", a[i]);
	// }
	// printf("\n");
	return 0;
}

void inplace_swap(int *x, int *y){
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

void reverse_array(int a[], int cnt){
	int first, last;

	for(first=0,last=cnt-1;first<=last;first++,last--){
		if (first != last) {
			inplace_swap(&a[first], &a[last]);
		}

	}
}