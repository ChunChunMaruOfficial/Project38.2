//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void count_local_min(int* array, int* max_array, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] < array[i + 1] && array[i] < array[i - 1]) {
//			max_array[i] = array[i];
//		}
//		else {
//			max_array[i] = -1;
//		}
//	}
//}
//
//int finding_max(int* max_array, int size) {
//	int max = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (max_array[max] < max_array[i] && max_array[i] >= 0) {
//			max = i;
//		}
//	}
//	return max_array[max];
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
//	count_local_min(array, max_array, size);
//	cout << "Largest among local minima: " << finding_max(max_array, size) << endl;
//	delete[] array;
//	
//	return 0;
//}