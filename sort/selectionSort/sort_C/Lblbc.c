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

void sort(int* array, int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        int minIndex = i;
        int min = array[i];
        for (int j = i + 1; j < count; j++)
        {
            if (min > array[j])
            {
                min = array[j];
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            array[minIndex] = array[i];
            array[i] = min;
        }
    }
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