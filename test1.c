#include "stdio.h"
int main()
{
	FILE *fp;
	fp=fopen("123","r+");
	while(!feof(fp))
	  putchar(getc(fp));
	fclose(fp);
	
}
