#include <stdio.h>

int main() {
	
	int num1 = 10;
	
	// ������ �޸� �ּҸ� ���� ���� ���� �տ� &(�ּ� ������)�� ���̸� �� 
	printf("%p\n", &num1);	// num1�� �޸� �ּҸ� ���
							// ��ǻ�͸���, ������ �� ���� �޶���
							
	printf("%x\n", &num1);
	printf("%X\n", &num1);
							
	return 0; 
}
