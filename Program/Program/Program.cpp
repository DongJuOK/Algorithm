#include <iostream>

using namespace std;

//  void find(int list[], int search, int left, int right)
//  {
//  	if (left > right)
//  	{
//  		cout <<  "Not Found" << endl;
//  		return;
//  	}
//  
//  	int pivot = (left + right) / 2;
//  
//  	if (list[pivot] == search)
//  	{
//  		cout << list[pivot] << endl;
//  	}
//  	else if (list[pivot] < search)
//  	{
//  		find(list, search, pivot + 1, right);
//  	}
//  	else
//  	{
//  		find(list, search, left, pivot - 1);
//  	}
//  }

//  void find(int list[], int size, int search)
//  {
//  	int pivot;
//  
//  	int left = 0;
//  	int right = size - 1;
//  
//  }

void combine(int list[], int start, int middle, int end)
{
	int count = 0;
	int left = start;
	int right = middle + 1;

	int * container = new int[end - start + 1];

	// 두 부분의 배열을 병합합니다.
	while (left <= middle && right <= end)
	{
		if (list[left] <= list[right])
		{
			container[count++] = list[left++];
		}
		else
		{
			container[count++] = list[right++];
		}
	}

	list = container;

	delete[] container;
}

void merge_sort(int list[], int start, int end)
{
	if (start < end)
	{
		int middle = (start + end) / 2;

		merge_sort(list, start, middle);
		merge_sort(list, middle + 1, end);
	}
}

void combine(int list[], int start, int middle, int end)
{
	if ((start + end) <= (middle + 1) * 2)
	{
		int * container = new int[(middle + 1) * 2];

		if (start == end)
		{
			container[start] = list[start];
		}
		else
		{
			if (list[start] > list[middle + 1])
			{
				container[start] = list[middle + 1];
				middle++;
			}
			else
			{
				start++;
			}
		}

		combine(list, start, middle, end);
	}
}

int main()
{
#pragma region 이분 탐색
	// 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를
	// 좁혀나가는 방식으로 동작하는 알고리즘입니다.
	
	// 정렬이 되어 있을때만 씀

	// int list[] = { 5, 6, 11, 13, 27, 55, 66, 92 };

	// find(list, 44, 0, 7);

#pragma endregion

#pragma region 합병 정렬
	// 하나의 리스트를 두 개의 균일한 크기로 분할하고 분할된
	// 부분 리스트를 정렬한 다음, 두 개의 정렬된 부분 리스트를
	// 합하여 전체가 정렬된 리스트가 되게 하는 방법입니다.

	// 1. 리스트의 길이가 0 또는 1이 되면 이미 정렬된 것으로 봅니다.

	// 2. 그렇지 않은 경우

	// 2-1. 정렬되지 않은 리스트를 절반으로 잘라 비슷한 크기의
	//      두 부분 리스트로 나눕니다.

	// 2-2. 각 부분 리스트를 재귀적으로 합병 정렬을 이용하여 정렬합니다.

	// 2-3. 두 부분 리스트를 다시 하나의 정렬된 리스트로 병합합니다.

	int list[] = { 3, 5, 2, 7, 4, 1, 8, 6 };

	int size = sizeof(list) / sizeof(list[0]);

	merge_sort(list, 0, size - 1);

#pragma endregion


	return 0;
}
