#include "Header.h"
#include <iostream>
#include <string>
int count = 0;
int foo(int* arr, int* result, int* visited, int size, int counter){
	for (int i = 0; i < size; i++) {
		if ((visited[i] != 1)&&(counter <= size)) {
			visited[i] = 1;
			result[counter] = arr[i];
			counter++;
			if (counter == size) {
				for (int q = 0; q < size; q++)
					std::cout << result[q] << " ";
				std::cout << std::endl;
				count++;
				counter--;
				visited[result[counter] - 1] = 0;
				result[counter] = 0;
			}
			else {
				foo(arr, result, visited, size, counter);
				counter--;
				visited[result[counter]-1] = 0;
				result[counter] = 0;
			}
		}
	}
	return count;
}
