#include <stdarg.h>
#include <stdio.h>

// 定义一个函数，最后一个参数为省略号，省略号前面的那个参数总是 int，表示了参数的个数。
double average(int num, ...)
{
	// 在函数定义中创建一个 va_list 类型变量，该类型是在 stdarg.h 头文件中定义的。
	va_list valist;
	double sum = 0.0;
	int index;
	// 使用 int 参数和 va_start 宏来初始化 va_list 变量为一个参数列表。宏 va_start 是在 stdarg.h 头文件中定义的。
	va_start(valist, num);
	// 使用 va_arg 宏和 va_list 变量来访问参数列表中的每个项。
	for (int i = 0; i < num; ++i)
	{
		sum += va_arg(valist, int);
	}
	// 使用宏 va_end 来清理赋予 va_list 变量的内存。
	va_end(valist);
	return sum / num;
}
int main(int argc, char const *argv[])
{
	printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
   	printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));
	return 0;
}