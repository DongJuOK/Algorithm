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

void sieve(int n)
{
	int * container = new int[n + 1];

	for (int i = 0; i <= n; i++)
	{
		container[i] = i;
	}

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (container[i] == 0)
		{
			continue;
		}

		for (int j = i * 2; j <= n; j += i)
		{
			container[j] = 0;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (container[i] != 0)
		{
			cout << container[i] << endl;
		}
	}
}

int main()
{
#pragma region 에라토스테네스의 체

	sieve(100);

#pragma endregion


	return 0;
}
