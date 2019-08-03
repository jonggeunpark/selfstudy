//swExpertAcademy
//1936

#include <iostream>
using namespace std;

int main()
{
	int A, B;

	cin >> A >> B;

	if (A % 3 == (B + 1) % 3)
		cout << "A";
	else if (B % 3 == (A + 1) % 3)
		cout << "B";

	return 0;
}