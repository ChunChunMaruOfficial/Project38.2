//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void count_local_max(int* array, int* max_array, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] > array[i + 1] && array[i] > array[i - 1]) {
//			max_array[i] = array[i];
//		}
//		else {
//			max_array[i] = -1;
//		}
//	}
//}
//
//int finding_min(int* max_array, int size) {
//	int min = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (max_array[min] > max_array[i] && max_array[i] >= 0) {
//			min = i;
//		}
//	}
//	return max_array[min];
//}
//
//void rand_init(int*, int);
//
//string show(int*, int);
//
//int main() {
//	srand(time(NULL));
//
//	int size = 20;
//	int* max_array = new int[size];
//	int* array = new int[size];
//	rand_init(array, size);
//	cout << show(array, size) << endl;
//	count_local_max(array, max_array, size);
//	cout << "The smallest among local maxima: " << finding_min(max_array, size) << endl;
//	delete[] array;
//
//	return 0;
//}