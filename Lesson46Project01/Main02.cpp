#include <iostream>

using namespace std;

int main() {
	int n = 5;
	int m = 10;

	int** classes = new int* [n];

	for (int i = 0; i < n; i++) 
	{
		*(classes + i) = new int[m];
	}

	// some code

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			classes[i][j] = 0;

			*(*(classes + i) + j) = 0;
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		delete[] * (classes + i);
	}

	delete[] classes;

	return 0;
}