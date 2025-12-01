#include <iostream>
#include <queue>
#include <vector>

#define INFINITY 10000000

using namespace std;

class Dijkstra
{
private:
	vector<int> distance;
	vector<int> visited;
	vector<vector<int>> adjacencyList;

public:
	void insert(int i, int j, int weight)
	{
		adjacencyList[i].push_back(j);
		adjacencyList[j].push_back(i);

		visited[i] = true;
		visited[j] = true;

		distance[j] = weight;
	}

	void resize(int node)
	{
		int newSize;

		if (node >= newSize)
		{
			newSize = node + 1;

			for (int i = 0; i < newSize; i++)
			{
				adjacencyList[i].resize(newSize);
			}

			distance.resize(newSize, INFINITY);
		}
	}
};

int main()
{


	return 0;
}
