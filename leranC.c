#include <stdio.h>
#include <limits.h>
#include <float.h>

// 预处理定义常量
#define A 'a'

extern int b;

static int static_a = 5; // 全局变量

// 函数申明
void func(void);
int main(void){
	// // 分别输出各个类型的字节大小
	// printf("char 的存储大小为：%lu\n", sizeof(char));
	// printf("unsigned char 的存储大小为：%lu\n", sizeof(unsigned char));
	// printf("int 的存储大小为：%lu\n", sizeof(int));
	// printf("short 的存储大小为：%lu\n", sizeof(short));
	// printf("long 的存储大小为：%lu\n", sizeof(long));
	// printf("float 的存储大小为：%lu\n", sizeof(float));
	// printf("double 的存储大小为：%lu\n", sizeof(double));
	// printf("long double 的存储大小为：%lu\n", sizeof(long double));
	// printf("float 的最大值为：%E\n", FLT_MAX);
	// printf("float 的最大值为：%E\n", FLT_MIN);

	/*---------------变量---------------*/
	/* 
	// 如果是非静态变量，初始值未定义，为随机值
	int a;
	printf("a = %d, A = %c\n", a, A);
	// 定义常量, 常量一般用大写
	const int B = 1;
	printf("const B = %d\n", B);
	// 对常量的更改会报错
	// B = 2;
	// B++;
	*/

	/*----------------存储类--------------*/
	// 1.auto 存储类
	//   auto是局部变量的默认存储类，只能修饰局部变量
	int a; // 默认为auto
	auto int b;

	// 2.register 存储类
	//   用于定义在存储器中而不是RAM内存中的局部变量，这意味着变量的最大尺寸等于寄存器的大小(通常是一个词)，且不能对它进行一元的‘&’运算符(因为它没有内存位置)
	//   存储器只用于需要快速访问的变量，比如计数器。定义‘register’并不意味着变量将被存储在寄存器中，取决于硬件和实现的限制
	register int c;

	// 3.static 存储类
	//   static存储器类指示编译器在程序的生命周期内保持局部变量的存在，而不需要每次它进入和离开作用域时进行创建和销毁。因此，使用static修饰局部变量可以在函数调用之间保持局部变量的值。
	//   static也可以用于全局变量，它的作用域为当前文件
	while(static_a--)
	{
		func();
	}

	return 1;
}

// 函数定义
void func(void)
{
	static int i = 5; // 局部静态变量
	i++;

	printf("方法内的局部静态变量i = %d, 全局变量static_a = %d\n", i, static_a);

}