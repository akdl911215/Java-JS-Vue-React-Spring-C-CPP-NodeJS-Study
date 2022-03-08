#include <iostream>

using namespace std;

int arr[] = {30, 45, 20, 15, 40, 25, 35, 10};
int n = 8, temp = 0, result = 0;

// �Է� : arr[0..n-1] : �����Ϸ��� �迭
//        n : �迭 A�� ������ ����
// ��� : Right : ���� �� �ǹ��� ��ġ�� �ε���
void Partition(int i, int j) {
	if ( i >= j) {
		return;
	}
	int pivot = arr[(i + j)/2];
	int Left = i; 
	int Right = j;
	while (Left <= Right) {
		// �ǹ� A[0]���� ū ���� ã��
		while (arr[Left] < pivot) Left++;
		
		// �ǹ����� ���� ���� ã��
		while (arr[Right] > pivot) Right--;
		
		if (Left <= Right) {
			temp = arr[Left];
			arr[Left] = arr[Right];
			arr[Right] = temp;
			
			Left++; Right--;
		} 
//		else {
//			temp = arr[0];
//			arr[0] = arr[Right];
//			arr[Right] = temp;
//		}	
		
		Partition(i, Right);
		Partition(Left, j);
	}
}

int main(void) {
	
	Partition(0, n - 1);	
	
	cout << "���ĵ� �迭 = "; 
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}
