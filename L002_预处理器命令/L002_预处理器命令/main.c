#include <stdio.h>

// �궨��
#define PI 3.1415926	// Բ����
#define ARRAY_SIZE 100	// ���鳤��
#define G 9.8	
#define S(a,b) a * b	// ���ζ��壬����������
#define S(r) PI * r * r	// ����Բ�����
#define LETTER 1		// �ж��Ƿ�ΪСд


int main() {
	int myArray[ARRAY_SIZE];	// ��������

	// ����һ�����ݣ����ݶ����LETTER�ж���ȫת�ɴ�д����Сд
	char str[20] = "C Programmer";
	char c;
	int i = 0;
	// �����ַ����� \0��β�ַ�
	while ((c = str[i]) != '\0') {
		i++;
#if LETTER
		// �����ȡ���ַ���Сд
		if (c >= 'a' && c <= 'z') {
			c = c - 32;	// ת��д
		}
#else
		// ���ȥ�����ַ��Ǵ�д
		if (c > 'A' && c <= 'Z') {
			c = c + 32;	// תСд
		}
#endif
		printf("%c", c);	// ��ӡ
	}
	printf("\n");
	float l, s, r, v;

	printf("����뾶:");
	scanf_s("%f", &r);	// ��������
	l = 2.0 * PI * r;	// Բ���ܳ�
	printf("Բ�İ뾶Ϊ:%.3f\tԲ���ܳ�Ϊ:%.3f\t", r, l);
	s = S(r);	// Բ�����
	printf("Բ�����Ϊ:%.3f\n", s);

	return 0;
}