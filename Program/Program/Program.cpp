#include <iostream>

using namespace std;

void find(int list[], int search, int left, int right)
{
	if (left > right)
	{
		cout <<  "Not Found" << endl;
		return;
	}

	int pivot = (left + right) / 2;

	if (list[pivot] == search)
	{
		cout << list[pivot] << endl;
	}
	else if (list[pivot] < search)
	{
		find(list, search, pivot + 1, right);
	}
	else
	{
		find(list, search, left, pivot - 1);
	}
}

void find(int list[], int size, int search)
{
	int pivot;

}

int main()
{
#pragma region 이분 탐색
	// 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를
	// 좁혀나가는 방식으로 동작하는 알고리즘입니다.
	
	// 정렬이 되어 있을때만 씀

	int list[] = { 5, 6, 11, 13, 27, 55, 66, 92 };

	find(list, 44, 0, 7);

#pragma endregion


	return 0;
}
