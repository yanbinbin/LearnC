#include <stdio.h>
#include <string.h>

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

// 函数申明
void printStructContent(struct Books *);

int main()
{
	struct Books book1; /* 声明book1，类型为Books*/
	struct Books book2; /* 声明book2，类型为Books*/

	// 给book1赋值
	strcpy(book1.title, "book1");
	strcpy(book1.author, "binbin.yan");
	strcpy(book1.subject, "test");
	book1.book_id = 1;

	// 给book2赋值
	strcpy(book2.title, "book2");
	strcpy(book2.author, "yunlin.chen");
	strcpy(book2.subject, "test");
	book2.book_id = 2;

	/* 输出 book1 信息 */
   printf( "book1 title : %s\n", book1.title);
   printf( "book1 author : %s\n", book1.author);
   printf( "book1 subject : %s\n", book1.subject);
   printf( "book1 book_id : %d\n", book1.book_id);

   printf("----------------------------------\n");

   /* 输出 book2 信息 */
   printStructContent(&book2);

   return 0;

}

void printStructContent(struct Books *book)
{
   printf("book title : %s\n", book->title);
   printf("book author : %s\n", book->author);
   printf("book subject : %s\n", book->subject);
   printf("book book_id : %d\n", book->book_id);
}