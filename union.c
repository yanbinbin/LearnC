#include <stdio.h>
#include <string.h>

// union允许在相同内存中使用不同的数据类型，可以定义多个带有成员的共同体
// 但是只有一个有值
union Test
{
	int a;
	float b;
	char c[20];
};
int main()
{
	union Test test;
	printf("union Test's size is %lu\n", sizeof(test)); // union的大小位union中元素的最大值

	// 对共同体的所有声明的元素赋值
	test.a = 1;
	test.b = 2.0;
	strcpy(test.c, "this is union.");
	// 打印的时候除了最后一值是正常的，其它的值都不是赋值时候的值，
	// 因为根据共同体的性质，只能有一个元素在这块内存中赋值，
	// 后面的赋值会覆盖前面的赋值。
	printf("a is %c\n", test.a);
	printf("b is %f\n", test.b);
	printf("c is %s\n", test.c);

	// 尝试一个个赋值然后一个个打印
	test.a = 'a';
	printf("a is %c\n", test.a);
	test.b = 2.0;
	printf("b is %f\n", test.b);
	strcpy(test.c, "this is union.");
	printf("c is %s\n", test.c);
}