BinarySearch_Iterration(A[], n, x) // �ݺ� ���·� ǥ���� ���� Ž��
// �Է� : A[0..n-1] : Ž�� ��� �迭, ������������ ���ĵǾ� �ִٰ� ����
//		  n : Ž�� ��� ������ ����(�迭�� ũ��)
//		  x : Ž��Ű

// ��� : �迭 A���� x�� ��ġ(Ž���� �����ؼ� x�� ���� ��� -1)
{
	Left = 0;
	Right = n -1;
	
	while (Left <= Right) {
		Mid = ceil((Left + Right) / 2);
		if (x == A[Mid]) return Mid;
		else if (x < A[Mid]) Right = Mid - 1; // ���� �κ� �迭 Ž��
			else Left = Mid + 1; // ������ �κ� �迭 Ž�� 
	}
	
	return -1; // Ž��Ű�� �������� �ʴ� ��� 
 } 
