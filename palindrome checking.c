#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i, len, flag = 0;
	printf("\n please enter the string\n");
	gets(str);
	len  = strlen(str);
	for(i=0;i<len;i++)
	{
		if (str[i]!=str[len-i-1])
		{
			flag = 1;
			break;
		}
	}
	if(flag==0)
		printf("%s is a palindrome \n",str);
	else
		printf("%s is not a palindrome\n",str);
	return 0;
}
