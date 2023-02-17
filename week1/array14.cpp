#include <bits/stdc++.h>
using namespace std;
int MissingPositive(int A[], int n)
{
for (int i = 0; i < n; i++) {
while (A[i] >= 1 && A[i] <= n
&& A[i] != A[A[i] - 1]) {
swap(A[i], A[A[i] - 1]);
}
}
for (int i = 0; i < n; i++) {
	if (A[i] != i + 1) {
	return i + 1;
}
}
return n + 1;
}
int main()
{

int A[] = {2,3,6,9,-4,-3 };
int n = sizeof(A) / sizeof(A[0]);
int result = MissingPositive(A, n);
	cout << result;
	return 0;
}

