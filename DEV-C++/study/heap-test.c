#define MAX_ELEMENT 200 // �� �ȿ� ����� ����� ����

typedef struct
{
	int key;
} element;

typedef struct 
{
	int heap[MAX_ELEMENT];
	int heap_size;
} HeapType;

HeapType heap1;

// ���� ����� ������ heap_size�� �� h�� item�� �����Ѵ�.
// �ִ� ��(max heap) ���� �Լ�
void insert_max_heap(HeapType *h, element item) 
{
	int i;
	i = ++(h->heap_size); // �� ũ�⸦ �ϳ� ����
	
	// Ʈ���� �Ž��� �ö󰡸鼭 �θ� ���� ���ϴ� ����
	// i�� ��Ʈ ���(index: 1)�� �ƴϰ�, ������ item�� ���� i�� �θ� ���(index: i/2)���� ũ��
	while ((i != 1) && (item.key > h->heap[i/2].key))
	{
		// i ��° ���� �θ� ��带 ��ȯ�Ѵ�.
		h->heap[i] = h->heap[i/2];
		// �� ���� ���� �ö󰣴�.
		i /= 2; 
	}
	h->heap[i] = item; // ���ο� ��带 ���� 
 } 
