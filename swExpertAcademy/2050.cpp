//swExpertAcademy
//2050

#include <iostream>
using namespace std;

int main()
{
	char alp[200];
	cin >> alp;

	for (int i = 0; i < sizeof(alp);i++)
	{
		if(alp[i] >= 65 && alp[i] <= 90)
		cout << alp[i] - 64 << " ";
	}
	return 0;
}