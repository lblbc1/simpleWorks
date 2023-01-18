/// ���Ŵ�ѧ�����רҵ | ǰ��Ϊ����ʦ
/// רע�������ѧ���ϵ�С�  http://lblbc.cn/blog
/// ������Java | ��׿ | ǰ�� | Flutter | iOS | С���� | ����
/// ���ںţ����������
#include<stdio.h>


void printArray(int* array, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%d ", array[i]);
	}
}

int partition(int* array, int low, int high)
{
	int pivot_value = array[low];
	while (low < high) {
		while (low < high && array[high] >= pivot_value) {
			--high;
		}
		array[low] = array[high];
		while (low < high && array[low] <= pivot_value) {
			++low;
		}
		array[high] = array[low];
	}
	array[low] = pivot_value;

	return low;
}
void sortMe(int* array, int low, int high)
{
	int pivot_index;
	if (low < high)
	{
		pivot_index = partition(array, low, high);
		sortMe(array, low, pivot_index - 1);
		sortMe(array, pivot_index + 1, high);
	}
}

void sort(int* array, int count)
{
	sortMe(array, 0, count - 1);
}

int main()
{
	int array[5] = { 2, 1, 5, 4, 3 };
	int count = sizeof(array) / sizeof(int);
	printf("����ǰ:");
	printArray(array, count);
	
	sort(array, count);

	printf("�����:");
	printArray(array, count);
	return 0;
}