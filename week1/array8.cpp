#include <bits/stdc++.h>
using namespace std;
bool chkPair(int arr[], int size, int x)
{
	for (int i = 0; i < (size - 1); i++) {
		for (int j = (i + 1); j < size; j++) {
			if (arr[i] + arr[j] == x) {
				return 1;
			}
		}
	}

	return 0;
}
int main()
{
	int arr[] = { 2, -1, -2, -3,5 };
	int x = -4;
	int size = sizeof(arr) / sizeof(arr[0]);

	if (chkPair(arr, size, x)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << x << endl;
	}
return 0;
}

