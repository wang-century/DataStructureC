#include <stdio.h>

/**
 * @brief 计算n的阶乘
 * @param n 要计算的n的值
 * @return n的阶乘结果
*/
long int calculateFactorial(int n) {
	if (n == 1) {
		return 1;
	}
	return n * calculateFactorial(n - 1);
}


/**
 * @brief 使用寄存器计算阶乘
 * @param n 要计算的n的值
 * @return n的阶乘结果
*/
int calculateFactorialByRegister(int n) {
	register int i;
	register int f = 1;

	for (i = 1; i <= n; i++) {
		f = f * i;
	}
	return f;
}


void main() {
	// 计算5的阶乘
	int n = 5;
	long int calculateResult = calculateFactorial(n);
	printf("%d的阶乘为%d\n", n, calculateResult);
	// 计算4的阶乘
	n = 4;
	calculateResult = calculateFactorialByRegister(n);
	printf("%d的阶乘为%d", n, calculateResult);
}