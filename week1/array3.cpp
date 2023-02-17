#include <iostream>
using namespace std;

int missingno(int a[], int n)
{
int N = n + 1;
int total = (N) * (N + 1) / 2;
for (int i = 0; i < n; i++)
total -= a[i];
return total;
}
int main()
{
int arr[]={ 1, 2, 4, 5 };
int N = sizeof(arr)/sizeof(arr[0]);
int miss = missingno(arr, N);
cout << miss;
return 0;
}
