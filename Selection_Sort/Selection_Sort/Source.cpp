#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int main()
{
	vector<int>seletion_sort = { 10,5,3,4,7,8,9,2,6,1 };
	int current = 0;
	int index = 0;
	for (int i = 0; i < 10; i++)
	{
		current = 10000;

		for (int j = i; j < 10; j++)
		{
			if (seletion_sort[j] < current)
			{
				current = seletion_sort[j];
				index = j;
			}
		}

		int temp = seletion_sort[i];

		seletion_sort[i] = seletion_sort[index];
		seletion_sort[index] = temp;


	}

	for (int i = 0; i < 10; i++)
	{

		cout << seletion_sort[i] << " ";
	}


	return 0;
}