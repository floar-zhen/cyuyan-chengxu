#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void huan(char *str, int start, int end) //���ַ�����start��end��һ������
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
	huan(src, 0, pos - 1); //����ǰ��
	huan(src, pos, len - 1); //������
	huan(src, 0, len - 1); //��������
}
int main(){
	char str[] = "ABCDEF";
	int time ;
	scanf("%d", &time);
	leftRound(str, time);
	printf("%s\n", str);
	return 0;
}