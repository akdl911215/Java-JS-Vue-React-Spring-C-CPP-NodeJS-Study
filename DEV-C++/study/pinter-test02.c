#include <stdio.h>

int main() {
	int *numPtr; // ������ ���� ����
	int num1 = 10; // int�� ������ �����ϰ� 10����
	
	numPtr = &num1; // num1�� �޸� �ּҸ� ������ ������ ����
	
	printf("%p\n", numPtr); 
	printf("%p\n", &num1);
}
