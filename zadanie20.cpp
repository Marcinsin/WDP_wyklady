#include <iostream>
using namespace std;
int main()
{
	int n;
	int m;
	int k;
	cout << "Podaj n: " << endl;
	cin >> n;
	cout << "Podaj m: " << endl;
	cin >> m;
	cout << "Podaj k: " << endl;
	cin >> k;
	/*cout << n << m << k; */
	if (n / m && n / k) {
		cout << "2";
	}
	else if (n / m || n / k) {
		cout << "1";
	}
	else if (!(n / m || n / k)) {
		cout << "0";
	}

}

