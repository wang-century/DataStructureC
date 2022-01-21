#include <stdio.h>

// 宏定义
#define PI 3.1415926	// 圆周率
#define ARRAY_SIZE 100	// 数组长度
#define G 9.8	
#define S(a,b) a * b	// 带参定义，计算矩形面积
#define S(r) PI * r * r	// 计算圆的面积
#define LETTER 1		// 判断是否为小写


int main() {
	int myArray[ARRAY_SIZE];	// 定义数组

	// 定义一段内容，根据定义的LETTER判断是全转成大写还是小写
	char str[20] = "C Programmer";
	char c;
	int i = 0;
	// 遍历字符数组 \0结尾字符
	while ((c = str[i]) != '\0') {
		i++;
#if LETTER
		// 如果读取的字符是小写
		if (c >= 'a' && c <= 'z') {
			c = c - 32;	// 转大写
		}
#else
		// 如果去读的字符是大写
		if (c > 'A' && c <= 'Z') {
			c = c + 32;	// 转小写
		}
#endif
		printf("%c", c);	// 打印
	}
	printf("\n");
	float l, s, r, v;

	printf("输入半径:");
	scanf_s("%f", &r);	// 输入内容
	l = 2.0 * PI * r;	// 圆的周长
	printf("圆的半径为:%.3f\t圆的周长为:%.3f\t", r, l);
	s = S(r);	// 圆的面积
	printf("圆的面积为:%.3f\n", s);

	return 0;
}