#include <bits/stdc++.h>
using namespace std;
bool Triplet(int arr[], int n, int aim)
{
for (int i = 0; i < n - 2; i++)
    {
for (int j = i + 1; j < n - 1; j++){
for (int k = j + 1; k < n; k++){
if (arr[i] + arr[j] + arr[k] == aim){
cout << "Triplet is " << arr[i] <<   ", " << arr[j] << ", " << arr[k];
return true;}
} }
}
return false;
}
int main()
{
int arr[] = { 1, 2, 3, 4, 5, 6 };
int aim = 9;
int n = sizeof(arr) / sizeof(arr[0]);
Triplet(arr, n, aim);
	return 0;
}
