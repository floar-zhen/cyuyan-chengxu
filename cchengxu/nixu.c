#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void huan(char *str, int start, int end) //将字符串从start到end这一段逆序
{
	int i, j;
	char tmp;

	for (i = start, j = end; i < j; i++, j--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

void leftRound(char * src, int time)
{
	int len = strlen(src);
	int pos = time % len;
	huan(src, 0, pos - 1); //逆序前段
	huan(src, pos, len - 1); //逆序后段
	huan(src, 0, len - 1); //整体逆序
}
int main(){
	char str[] = "ABCDEF";
	int time ;
	scanf("%d", &time);
	leftRound(str, time);
	printf("%s\n", str);
	return 0;
}