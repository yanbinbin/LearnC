#include <stdio.h>

int main()
{
	FILE *fp;

	fp = fopen("./test.txt", "r+");
	// fputc('a', fp);
	// fputs("\nputs(FILE, string)\n", fp);
	// fprintf(fp, "%s\n", "test");

	char buff[255];
	fgets(buff, 255, fp);
	printf("1 : %s\n", buff );
	fclose(fp);

}