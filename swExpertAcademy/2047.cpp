//swExpertAcademy
//2047

#include <iostream>
using namespace std;

int main()
{
	char headline[80];
	
	cin >> headline;
	for (int i = 0; i < sizeof(headline);i++)
	{
		if (headline[i] >= 97 && headline[i] <= 122)
		{
			headline[i] = toupper(headline[i]);
		}
	}
	cout << headline;
	return 0;
}
