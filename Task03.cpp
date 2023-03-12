//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int count_local_min(int* array, int size) {
//	int count = 0;
//	array[0] < array[1] ? count++ : count; // first symbol (does not meet the condition)
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] < array[i + 1] && array[i] < array[i - 1]) {
//			count++ ;
//		}
//	}
//	
//	array[19] < array[18] ? count++ : count;  // last symbol (does not meet the condition)
//	return count;
//}
//
//int count_local_max(int* array, int size) {
//	int count = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] > array[i + 1] && array[i] > array[i - 1]) {
//			count ++;
//		}
//	}
//	return count;
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
//
//	int* array = new int[size];
//	rand_init(array, size);
//	cout << show(array, size) << endl;
//
//	cout << "All local minima: " << count_local_min(array, size) << endl;
//
//	cout << "All local maxima: " << count_local_max(array, size) << endl;
//
//	delete[] array;
//
//	return 0;
//}