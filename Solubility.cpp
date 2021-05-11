#include<iostream>
using namespace std;

int main(){
	int t ;
	cin >> t ;

	while(t--)
	{
		int x , a , b;
		int sugar;
		cin >> x >> a >> b;

		x = 100 - x; // temp difference
		a = a + b*x;
		sugar = 10*a;

		cout << sugar << endl;
	}

	return 0;
}
