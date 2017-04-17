#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char name[100]; // 静态内存分配，固定大小
	char *description;

	strcpy(name, "Zara Ali");

	// 动态内存分配
	description = malloc(30 * sizeof(char));
	if (description == NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
	} 
	else 
	{
		strcpy(description, "1234567890zxcvbnmasdfghjklqwe");
	}
	printf("Name = %s\n", name );
   	printf("Description: %s\n", description );

   	/* 假设您想要存储更大的描述信息 */
   	description = realloc(description, 100 *sizeof(char));
   	if( description == NULL )
   	{
      	fprintf(stderr, "Error - unable to allocate required memory\n");
   	}
   	else
   	{
      	strcat( description, "She is in class 10th");
   	}
   
   	printf("Name = %s\n", name );
   	printf("Description: %s\n", description );
   	/* 使用 free() 函数释放内存 */
   	free(description);
	return 0;
}