#include <stdio.h>

BinarySearch(A[], Left, Right, x) // ��ȯ ���·� ǥ���� ���� Ž��
// A[Left..Right] : Ž�� ��� �迭. ������������ ���ĵǾ� �ִٰ� ����
// Left, Right : A���� x�� ã�� ����
// x : Ž��Ű

// ��� : �迭 A���� x�� ��ġ(Ž���� �����ؼ� x�� ���� ��� -1)
	{
		if (Left > Right) return -1; // Ž��Ű�� �������� �ʴ� ���
		Mid = ceil(Left + Right / 2);  //ceil �Ҽ��� ������ �Լ�
		if (x == A[Mid]) return Mid;
		else if (x < A[Mid]) BinarySearch(A, Left, Mid - 1, x); // ���� �κ� �迭 Ž��
			else BinarySearch(A, Mid + 1, Right, x); // ������ �κ� �迭 Ž�� 
 	}	 
