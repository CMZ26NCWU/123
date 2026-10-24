#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a = 0;
	printf("请输入一个三位数：\n");
	scanf("%d", &a);
	int c = a / 100;
	int d = a % 100 / 10;
	int e = a % 10;
	int f = e * 100 + d * 10 + c;
	printf("这个三位数的逆序数是:%d", f);
}