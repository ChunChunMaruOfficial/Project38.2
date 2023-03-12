#include <iostream>  
#include <string>  

using namespace std;


void rand_init(int* array, int size) {
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 21;
	}
}

string show(int* array, int size) {
	string msg = "";
	for (int i = 0; i < size; i++)
	{
		msg += to_string(array[i]) + " ";
	}
	return msg;
}