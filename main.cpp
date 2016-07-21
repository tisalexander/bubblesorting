#include "bubblesorting.h"
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

int main(int /*argc*/, char **/*argv*/)
{
	int valuesCount = 0;

	cout << "Enter number of values...\n";
	cin >> valuesCount;

	cout << "Number of values: " << valuesCount << endl;

	srand(time(0));

	vector<double> array;

	for (int i = 0; i < valuesCount; i++) {
		array.push_back(rand() % 10000 / 100.0);
		cout << array[array.size() - 1] << endl;
	}

	cout << endl << "Sorting..." << endl;

	bubblesorting(array);

	const int size = array.size();
	for (int i = 0; i < size; i++) {
		cout << array[i] << endl;
	}

	return 0;
}
