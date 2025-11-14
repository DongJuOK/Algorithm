#include <iostream>

using namespace std;

int main()
{
#pragma region 완전 탐색
	// 가능한 모든 경우의 수를 탐색하면서
	// 결과를 찾아내는 알고리즘입니다.

	//  int password[] = { 7, 1, 2 };
	//  
	//  for (int i = 0; i < 10; i++)
	//  {
	//  	for (int j = 0; j < 10; j++)
	//  	{
	//  		for (int k = 0; k < 10; k++)
	//  		{
	//  			if (password[0] == i && password[1] == j && password[2] == k)
	//  			{
	//  				cout << "release : " << i << " " << j << " " << k << endl;
	//  
	//  				return 0;
	//  			}
	//  		}
	//  	}
	//  }

#pragma endregion

	//  int list[] = { 8, 5, 6, 2, 4 };
	//  
	//  int size = sizeof(list) / sizeof(list[0]);
	//  
	//  int key = 0;
	//  
	//  int j = 0;
	//  
	//  for (int i = 1; i < size; i++)
	//  {
	//  	key = list[i];
	//  
	//  	for (j = i - 1; j >= 0 && list[j] > key; j--)
	//  	{
	//  		list[j + 1] = list[j];
	//  	}
	//  
	//  	list[j + 1] = key;
	//  }
	//  
	//  for (const auto & element : list)
	//  {
	//  	cout << element << " ";
	//  }

#pragma region 유클리드 호제법
	// 2개의 자연수 또는 정시의 최대 공약수를 구하는 방식으로
	// 두 수가 서로 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘입니다.

	int x = 2304;
	int y = 1440;

	int result = 0;

	for (int i = 1; i <= x && i <= y; i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			result = i;
		}
	}

	cout << "Greatest Common Divisor : " << result << endl;

#pragma endregion


	return 0;
}
