#include <stdio.h>

int main() {
	int *numPtr; // ������ ���� ����
	int num1 = 10; // ������ ������ �����ϰ� 10 ����
	
	numPtr = &num1; // num1�� �޸� �ּҸ� ������ ������ ����
	printf("num1 = %d\n", num1); // 10
	
	*numPtr = 20; // ������ �����ڷ� �޸� �ּҿ� �����Ͽ� 20�� ���� 
	printf("*numPtr = %d\n", *numPtr); // 20
	printf("num1 = %d\n", num1); // 20
	
	return 0;
} 
