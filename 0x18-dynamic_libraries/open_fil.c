#include<stdio.h>
#include<stdlib.h>

#define SIZE 1024

void main()
{
	FILE *fp;
	char *buf = malloc(SIZE);
	size_t nread;
	
	fp = fopen("libwinner.so", "r");
	if(fp)
	{
		while(fgets(buf, SIZE, fp) != NULL)
		{
			printf("%s", buf);
		}
		
	}
	fclose(fp);
}
