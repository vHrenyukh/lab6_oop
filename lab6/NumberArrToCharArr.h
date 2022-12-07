#pragma once
#include <vector>
using namespace std;
template<typename T>
class NumberArrToCharArr
{
public:
	vector<char> convertToChar(vector<T> numberArr);
};

template<typename T>
inline vector<char> NumberArrToCharArr<T>::convertToChar(vector<T> numberArr)
{
	vector<char> result;
	for (T element : numberArr) {
		result.push_back(element);
	}
	return result;
}
