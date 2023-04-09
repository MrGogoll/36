#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	
	vector<int> mass(5);
	for (int i = 0; i < 5; i++)
	{
	cin >> mass[i];
	}
	sort(mass.begin(), mass.end());
	for (int i = 0; i < 5; i++)
	{
		cout <<  mass[i]<<"  ";
	}
}