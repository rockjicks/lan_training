#include<stdio.h>
#include<string.h>
int main()
{
char* p = "1111";
	int n = 0;
	for(int i=0;i<strlen(p); i++)
	{
		n = n+((p[i]-'0')<<(strlen(p)-i-1));
	}
	printf("%d\n", n);
return 0;
}
