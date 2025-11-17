#include <iostream>

using namespace std;

void sieve(int n)
{
	bool * list = new bool[n + 1];

	for (int i = 0; i <= n; i++)
		list[i] = true;

	list[0] = list[1] = false;

	for (int i = 2; i * i < n; i++)
	{
		list[i] = i + 1;

		for (int j = i * i; j <= n; j += i)
		{
			list[j - 1] = 0;
		}
	}

	delete[] list;
}

int main()
{
#pragma region 에라토스테네스의 체
	int n = 17;

	for (int i = 2; i <= n; i++)
	{
		bool flag = true;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = false;

				break;
			}
		}
		
		if (flag)
		{
			cout << i << " ";
		}
	}

	//  int list[50];
	//  
	//  int size = sizeof(list) / sizeof(list[0]);
	//  
	//  for (int i = 0; i < size; i++)
	//  {
	//  	list[i] = i + 1;
	//  
	//  	for (int j = 2; j < list[i]; j++)
	//  	{
	//  		if (list[i] % j == 0)
	//  		{
	//  			list[i] = 0;
	//  			break;
	//  		}
	//  	}
	//  }
	//  
	//  list[0] = 0;
	//  
	//  for (const auto & element : list)
	//  {
	//  	cout << element << " ";
	//  }

#pragma endregion


	return 0;
}
