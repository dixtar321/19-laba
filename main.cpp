#include "Header.h"
#include <iostream>

/*
���� n ���������, ������ ������� ����� ���������� �����. 
�������� ���������, ������� ���������� ��� ��������� ������������ �� n ���������.
*/

using namespace std;

int main() {
	int objects[] = { 1, 2, 3, 4, 5};
	int size = sizeof(objects) / sizeof(int);
	int* result = new int[size];
	int* visited = new int[size];
	for (int i = 0; i < size; i++) {
		result[i] = 0;
		visited[i] = 0;
	}
	cout << foo(objects, result, visited, size, 0);
	return 0;
}