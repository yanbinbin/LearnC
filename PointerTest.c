#include <stdio.h>
#include <string.h>
void testStrApi()
{
	char strA[50] = "This is a string for test.";
	char strB[] = {'t', 'e', 's', 't', '\0'};
	char strC[30];
	int len;
	// 复制strB到strC中
	strcpy(strC, strA);
	printf("strcpy(strC, strA) : %s\n", strC);

	// 连接两个字符串
	strcat(strA, strB);
	printf("strcpy(strA, strB) : %s\n", strA);

	// 返回字符串长度
	len = strlen(strA);
	printf("strlen(strA) : %d\n", len);

	// 比较两个字符串大小
	int result = strcmp(strA, strB);
	printf("strcmp(strA, strB) : %d\n", result);

	// 返回字符串中第一次出现的字符出现的位置的地址
	char * pos = strchr(strA, 'h');
	printf("strchr(strA, \'h\') : %c\n", pos);

}
int main()
{
	testStrApi();
	// int a = 1;
	// printf("a的地址为：%x\n", &a);
	// printf("a的值为：%x\n", *(&a));
}