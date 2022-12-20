#include<stdio.h>
#include<string.h>
main()
{
	char s1[20];
	int len=0,i;
	printf("enter string:");
	gets(s1);
	len=strlen(s1);
	for(i=len-1;i>=0;i--)
	{
		printf("%c",s1[i]);
	}
}
