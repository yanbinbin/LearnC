#include <stdio.h>

int main(int argc, char const *argv[])
{
	/**
	int getchar(void) 函数从屏幕读取下一个可用的字符，并把它返回为一个整数。这个函数在同一个时间内只会读取一个单一的字符。您可以在循环内使用这个方法，以便从屏幕上读取多个字符。
	int putchar(int c) 函数把字符输出到屏幕上，并返回相同的字符。这个函数在同一个时间内只会输出一个单一的字符。您可以在循环内使用这个方法，以便在屏幕上输出多个字符。
	*/
	// int c;
	// printf("Please input one char: \n");
	// c = getchar();
	// printf("You had entered \n");
	// putchar(c);
	// printf("\n");

	/*
	char *gets(char *s) 函数从 stdin 读取一行到 s 所指向的缓冲区，直到一个终止符或 EOF。
	int puts(const char *s) 函数把字符串 s 和一个尾随的换行符写入到 stdout。
	*/
	char str[2];
	printf( "Enter a value :");
	gets(str);
	printf( "You entered: ");
	puts(str);
	printf("\n");

	// char str[2];
 //   	int i;
 
 //   	printf( "Enter a value :");
 //   	scanf("%s %d", str, &i);
 
 //   	printf( "\nYou entered: %s %d ", str, i);
 //   	printf("\n");
	return 0;
}