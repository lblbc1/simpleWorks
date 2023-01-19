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

void sortMe(int* array, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int index = array[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (i < j && array[j] >= index)
        {
            j--;
        }
        if (i < j)
        {
            array[i] = array[j];
            i++;
        }
        while (i < j && array[i] < index)
        {
            i++;
        }
        if (i < j)
        {
            array[j] = array[i];
            j--;
        }
    }
    array[i] = index;
    sortMe(array, low, i - 1);
    sortMe(array, i + 1, high);
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