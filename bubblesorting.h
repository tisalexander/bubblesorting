#ifndef BUBBLESORTING_H
#define BUBBLESORTING_H

#include <vector>
using namespace std;

template <typename T>
void bubblesorting(vector<T> &array)
{
	const int size = array.size();
	T value = 0;

	for (int i = 0; i < size - 1; i++) {
		bool swapped = false;

		for (int j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				value = array[j];
				array[j] = array[j + 1];
				array[j + 1] = value;
				swapped = true;
			}
		}

		if (!swapped) {
			break;
		}
	}
}

#endif // BUBBLESORTING_H
