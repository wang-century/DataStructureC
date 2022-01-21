#include <stdio.h>

/**
 * @brief ����n�Ľ׳�
 * @param n Ҫ�����n��ֵ
 * @return n�Ľ׳˽��
*/
long int calculateFactorial(int n) {
	if (n == 1) {
		return 1;
	}
	return n * calculateFactorial(n - 1);
}


/**
 * @brief ʹ�üĴ�������׳�
 * @param n Ҫ�����n��ֵ
 * @return n�Ľ׳˽��
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
	// ����5�Ľ׳�
	int n = 5;
	long int calculateResult = calculateFactorial(n);
	printf("%d�Ľ׳�Ϊ%d\n", n, calculateResult);
	// ����4�Ľ׳�
	n = 4;
	calculateResult = calculateFactorialByRegister(n);
	printf("%d�Ľ׳�Ϊ%d", n, calculateResult);
}