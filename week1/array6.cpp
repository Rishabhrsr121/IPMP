#include <bits/stdc++.h>
using namespace std;

int Palindrome(int num)
{
int n, k, rev = 0;
n = num;
while (num != 0) {
k = num % 10;
rev = (rev * 10) + k;
num = num / 10;
}
if (n == rev) {
return 1;
}
else {
return 0;
}
}
int main()
{
	int num = 1127;
	while (!Palindrome(num)) {
num = num + 1;
}
cout << num;
return 0;
}


