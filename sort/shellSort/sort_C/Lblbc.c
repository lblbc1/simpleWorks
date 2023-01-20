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
    for (int gap = count / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < count; i++)
        {
            int j = i;
            int tmp = array[j];
            if (array[j] < array[j - gap])
            {
                while (j - gap >= 0 && tmp < array[j - gap])
                {
                    array[j] = array[j - gap];
                    j -= gap;
                }
                array[j] = tmp;
            }
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