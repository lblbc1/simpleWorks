/// ���Ŵ�ѧ�����רҵ | ǰ��Ϊ����ʦ
/// רע�������ѧ���ϵ�С�  http://lblbc.cn/blog
/// ������Java | ��׿ | ǰ�� | Flutter | iOS | С���� | ����
/// ���ںţ����������
#include<stdio.h>

void sort(int* array, int count)
{
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - 1 - i; j++)
		{
			if (array[j + 1] < array[j])
			{
				int tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int array[5] = { 2, 1, 5, 4, 3 };
	int count = sizeof(array) / sizeof(int);
	sort(array, count);
	for (int i = 0; i < count; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}