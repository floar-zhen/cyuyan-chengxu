#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int a;
	int b;
	int i = 0;
	int m;
	printf("输入两个数: ");
	scanf("%d%d", &a, &b);
	if (a<b)
	{
		m = b;
		b = a;
		a = m;
	}
	for (i = a; i>0; i++){
		if (i%a == 0 && i%b == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}