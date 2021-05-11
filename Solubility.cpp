#include<iostream>
using namespace std;

int main(){
	int t ; // THE NO OF TEST CASES
	cin >> t ;

	while(t--)
	{
		int x , a , b; // X -> increase in solubility / degree rise in temp
		int sugar; // a -> initial solubity
		cin >> x >> a >> b; // b -> final solubility

		x = 100 - x; // temp difference
		a = a + b*x;
		sugar = 10*a;

		cout << sugar << endl;
	}

	return 0;
}
