#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> s1;
	s1.resize(10);

	/*for (auto e : s1)
	{
		e = i++;
	}*/
	/*cout << " x";*/
	for (int i = 0; i < s1.capacity(); i++)
	{
		s1[i] = i;
	}

	for (auto e : s1)
	{
		cout << e << " ";
	}
	cout << endl;
	return 0;
}