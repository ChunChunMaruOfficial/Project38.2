//#include <iostream>  
//
//using namespace std;
//
//bool finding_local_min(int* array, int size) {
//    for (int i = 0; i < size; i++)
//    {
//        if (array[i] < array[i + 1] && array[i] < array[i - 1]) {
//            return true;
//        }
//    }
//    return false;
//}
//
//bool finding_local_max(int* array, int size) {
//    for (int i = 0; i < size; i++)
//    {
//        if (array[i] > array[i + 1] && array[i] > array[i - 1]) {
//            return true;
//        }
//    }
//    return false;
//}
//
//void rand_init(int*, int);
//
//string show(int*, int);
//
//int main() {
//    srand(time(NULL));
//
//    int size = 20;
//
//    int* array = new int[size];
//    rand_init(array, size);
//    cout << show(array, size) << endl;
//
//    string min;
//    finding_local_min(array, size) ? min = "the vector has a local minimum" : min = "there is no local minimum in the vector";
//    cout << min << endl;
//
//    string max;
//    finding_local_max(array, size) ? max = "the vector has a local maximum" : max = "there is no local maximum in the vector";
//    cout << max << endl;
//    
//    delete[] array;
//
//    return 0;
//}