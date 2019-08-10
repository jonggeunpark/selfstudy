//swExpertAcademy
//1206

#include <iostream>
using namespace std;

int main()
{
	int testcase, count, tmp, max;
	int arr[1000];

	for (int i = 1; i <= 10; i++) {
		count = 0;

		cin >> testcase;

		fill_n(arr, testcase, 0);

		for (int j = 0; j < testcase; j++) {
			cin >> tmp;
			arr[j] = tmp;
		}

		for (int k = 2;k < testcase - 2;k++) {

			max = 0;

			for (int p = k - 2; p < k;p++)
				if (arr[p] > max)
					max = arr[p];

			for (int p = k + 1; p < k + 3;p++) 
				if (arr[p] > max)
					max = arr[p];

			if (arr[k] > max)
				count += arr[k] - max;
		}

		cout << "#" << i << " " << count << endl;
	}
	return 0;

}

/*
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

void setN(int t)
{
	int tmp;

	for (int j = 0;j < t;j++) {
		cin >> tmp;
		v.push_back(tmp);
	}
}

int getN(vector<int,>v)
{

}

int main()
{
	int testcase,count;

	for (int i = 1; i <= 10; i++) {
		v.clear();
		cin >> testcase;

		setN(testcase);
		getN(v);
		for (int k = 2;k < testcase - 2;k++) {
			if(v[k-2])
		}
	}
	return 0;

}
*/