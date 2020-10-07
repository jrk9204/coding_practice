#include<iostream>
#include<string>
#include<vector>

using namespace std;

//insertion sort

vector <int> insertion_sort(vector<int> &arr)
{
	int key = 0;
	int hole = 0;

	for (int i = 1; i < arr.size(); i++)
	{
		key = arr[i];
		hole = i;

		while (hole > 0 && arr[hole - 1] > key)
		{
			arr[hole] = arr[hole - 1];


			hole -= 1;

		}

		arr[hole] = key;
	}

	return arr;

}


int main()
{
	vector<int> arr;
	int lines = 0;
	int numbers = 0;

	cin >> lines;

	for (int i = 0; i < lines; i++)
	{
		cin >> numbers;
		arr.push_back(numbers);

	}

	insertion_sort(arr);



	for (int j = 0; j < arr.size(); j++)
	{
		cout << arr[j] << endl;
	}


	return 0;
}

