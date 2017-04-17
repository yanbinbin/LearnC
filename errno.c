#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
大多数的 C 或 UNIX 函数调用返回 1 或 NULL，同时会设置一个错误代码 errno，该错误代码是全局变量，表示在函数调用期间发生了错误
*/
extern int errno;

int main(int argc, char const *argv[])
{
	FILE *file;
	int errnum;
	file = fopen("./t.txt", "rb");
	if (file == NULL)
	{
		errnum = errno;
		fprintf(stderr, "错误号：%d\n", errno);
		// perror() 函数显示您传给它的字符串，后跟一个冒号、一个空格和当前 errno 值的文本表示形式
		perror("通过perror()输出错误");
		// strerror() 函数，返回一个指针，指针指向当前 errno 值的文本表示形式。
		fprintf(stderr, "打开文件错误%s\n", strerror(errnum));
	} else 
	{
		fclose(file);
	}
	// 程序成功执行完一个操作正常退出的时候会带有值 EXIT_SUCCESS
	// 如果程序中存在一种错误情况，当您退出程序时，会带有状态值 EXIT_FAILURE，被定义为 -1
	exit(EXIT_SUCCESS);
}