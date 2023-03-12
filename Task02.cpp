//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string finding_local_min(int* array, int size) {
//	string str = "";
//	array[0] < array[1] ? str += to_string(array[0]) + " " : str; // first symbol (does not meet the condition)
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] < array[i + 1] && array[i] < array[i - 1]) {
//			str += to_string(array[i]) + " ";
//		}
//	}
//	
//	array[19] < array[18] ? str += to_string(array[19]) : str;  // last symbol (does not meet the condition)
//	return str;
//}
//
//string finding_local_max(int* array, int size) {
//	string str = "";
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] > array[i + 1] && array[i] > array[i - 1]) {
//			str += to_string(array[i]) + " ";
//		}
//	}
//	return str;
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
//	cout << "All local minima: " << finding_local_min(array, size) << endl;
//
//	cout << "All local maxima: " << finding_local_max(array, size) << endl;
//
//	delete[] array;
//
//	return 0;
//}