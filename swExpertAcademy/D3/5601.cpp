//swExpertAcademy
//5601

#include <iostream>
using namespace std;

int main()
{
	int t, n;
	cin >> t;

	for (int i = 1;i <= t;i++) {
		cin >> n;

		cout << "#" << i << " ";

		for (int j = 0;j < n;j++) {
			cout << "1/" << n;
		}

		cout << endl;
	}


	return 0;
}