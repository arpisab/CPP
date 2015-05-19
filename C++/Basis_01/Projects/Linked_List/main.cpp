#include <iostream>
#include <vector>
using namespace std;


void printVector(vector<int> b)
{
	for (int i = 0; i < b.size(); i++)
		cout << b[i] << " | ";
}



int main()
{
	vector<int> v(3);

	v[0] = 10;
	v[1] = 20;
	v[2] = 30;

	v.push_back(13);

	cout << "v.front(): " << v.front() << endl;
	cout << "v.back(): " << v.back() << endl;
	cout << "v.at(0): " << v.at(0) << endl;
	cout << "v.at(1): " << v.at(1) << endl;
	cout << "v.at(2): " << v.at(2) << endl;
	cout << "v.at(3): " << v.at(3) << endl;

	printVector(v);

	return 0;
}