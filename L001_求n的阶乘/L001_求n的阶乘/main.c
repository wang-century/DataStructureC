#include <stdio.h>

/**
 * @brief ����n�Ľ׳�
 * @param value Ҫ�����n��ֵ
 * @return n�Ľ׳˽��
*/
long int calculateFactorial(int n) {
	if (n == 1) {
		return 1;
	}
	return n * calculateFactorial(n - 1);
}


void main() {
	// ����5�Ľ׳�
	int n = 5;
	long int calculateResult = calculateFactorial(5);
	printf("%d�Ľ׳�Ϊ%d", n, calculateResult);

}