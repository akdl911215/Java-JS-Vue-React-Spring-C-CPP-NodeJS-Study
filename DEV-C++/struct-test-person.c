#define _CRT_SECURE_NO_WARINGS  // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h> // strcpy �Լ��� ����� ��� ����

struct Person { // ����ü ���� 
	char name[20]; 		// ����ü ��� 1
	int age;	   		// ����ü ��� 2
	char address[100];	// ����ü ��� 3	
}; 

struct Person2 {
	char name[20];
	int age;
	char address[100];
} p2;

int main() {
	
	struct Person p1;	// ����ü ���� ����
	struct Person p3 = {
		.name = "�ڳ���", .age = 32, .address = "���￪ 1���ⱸ"
	};
	
	
	// ������ ����ü ����� �����Ͽ� �� �Ҵ�
	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "���￪ 11���ⱸ");
	
	strcpy(p2.name, "������");
	p2.age = 31;
	strcpy(p2.address, "���￪ 12���ⱸ");
	
	// ������ ����ü ����� �����Ͽ� �� ��� 
	printf("�̸�: %s\n", p1.name);	   // �̸� : ȫ�浿 
	printf("����: %d\n", p1.age);	   // ���� : 30
	printf("�ּ�: %s\n", p1.address);  //�ּ� : ���￪ 11�� �ⱸ 
	
	printf("\n�̸�: %s\n", p2.name);	   // �̸� : ������ 
	printf("����: %d\n", p2.age);	   // ���� : 31
	printf("�ּ�: %s\n", p2.address);  //�ּ� : ���￪ 12�� �ⱸ 

	printf("\n�̸�: %s\n", p3.name);	   // �̸� : �ڳ��� 
	printf("����: %d\n", p3.age);	   // ���� : 32
	printf("�ּ�: %s\n", p3.address);  //�ּ� : ���￪ 1�� �ⱸ 
	
} 
