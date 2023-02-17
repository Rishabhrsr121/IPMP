#include <bits/stdc++.h>
using namespace std;
void repeat(int arr[],int arr_size)
{
  	int i, j;
	cout << "Repeating elements are ";
	for (i = 0; i < arr_size; i++) {
		for (j = i + 1; j < arr_size; j++) {
			if (arr[i] == arr[j]) {
				cout << arr[i] << " ";
				break;
			}
		}
	}
}

int main()


{
    	int arr[] = { 1,1,2,3,4,5,2 };

	int arr_size = sizeof(arr) / sizeof(arr[0]);
	repeat(arr,arr_size);
	
	return 0;
}