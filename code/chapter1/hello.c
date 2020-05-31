#include <stdio.h>
// 预处理后生成hello.i文件
// gcc -E hello.c -o hello.i

// 编译后生成hello.s文件
// gcc -S hello.i

// 汇编后生成hello.o文件
// gcc -c hello.c -o hello.o
// 或者
// gcc -c hello.i -o hello.o

// 链接后生成hello
// gcc -o hello hello.c
// 或者
// gcc -o hello hello.o


int main()
{
	printf("hello, world\n");
	return 0;
}