#include <vector>
#include<iostream>
#include"NumberArrToCharArr.h"

using namespace std;
template<typename T>
T getAverageValue(vector<T> arr) {
	T sum = 0;
	for (T element : arr) {
		sum += element;
	}
	return sum / arr.size();
}

void printVectorOfChars(vector<char> arr){
	for (char element : arr)
	{
		cout << element;
	}
	cout << endl;
}
int main()
{
	vector<int> intArr = vector<int>{ 3, 5, 6, 14 };
	vector<double> doubleArr = vector<double>{ 3.5, 5.1, 6.2, 14.2 };
	vector<long> longArr = vector<long>{ 1, 2, 3, 4 };
	cout << "Average INT value: " << getAverageValue(intArr) << endl;
	cout << "Average DOUBLE value: " << getAverageValue(doubleArr) << endl;
	cout << "Average LONG value: " << getAverageValue(longArr) << endl << endl;

	NumberArrToCharArr<int> intArrToCharArr;
	NumberArrToCharArr<double> doubleArrToCharArr;
	NumberArrToCharArr<long> longArrToCharArr;

	printVectorOfChars(intArrToCharArr.convertToChar(intArr));
	printVectorOfChars(doubleArrToCharArr.convertToChar(doubleArr));
	printVectorOfChars(longArrToCharArr.convertToChar(longArr));
}