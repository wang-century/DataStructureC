#include <stdio.h>

/**
 * @brief 计算n的阶乘
 * @param value 要计算的n的值
 * @return n的阶乘结果
*/
long int calculateFactorial(int n) {
	if (n == 1) {
		return 1;
	}
	return n * calculateFactorial(n - 1);
}


void main() {
	// 计算5的阶乘
	int n = 5;
	long int calculateResult = calculateFactorial(5);
	printf("%d的阶乘为%d", n, calculateResult);

}