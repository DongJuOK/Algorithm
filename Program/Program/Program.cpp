#include <iostream>

using namespace std;

void sieve(int n)
{
	bool * list = new bool[n + 1];

	for (int i = 0; i <= n; i++)
		list[i] = true;

	list[0] = list[1] = false;

	for (int i = 2; sqrt(i) <= n; i++)
	{
		if (list[i])
		{
			for (int j = i * i; j <= n; j += i)
			{
				list[j] = 0;
			}
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (list[i])
			cout << i << " ";
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

	sieve(100);
#pragma endregion


	return 0;
}
