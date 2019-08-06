//swExpertAcademy
//1976

#include <iostream>
using namespace std;

int main() {

	int t, h1, m1, h2, m2 , h3,m3;

	cin >> t;

	for (int i = 1; i <= t;i++) {

		cin >> h1 >> m1 >> h2 >> m2;

		h3 = h1 + h2;
		m3 = m1 + m2;

		if (m3 > 60) {
			h3++;
			m3 -= 60;
		}
		
		h3 = h3 % 12;

		if (h3 == 0)
			h3 = 12;

		cout << "#" << i << " " <<  h3 << " " << m3 << endl;
	}
}