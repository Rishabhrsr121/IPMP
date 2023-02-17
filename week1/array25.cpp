#include <bits/stdc++.h>
using namespace std;
void product(int a[], int n){
    int p[n], prod=1;
for(int i=0; i<n; i++){
        prod = prod * a[i]; }
 for(int i=0; i<n; i++){
        p[i] = prod / a[i]; }
  for(int i=0; i<n; i++){
        cout<<p[i]<<" ";}
}
int main() {
  int a[] = {8, 64 ,3, 2};
  int n = sizeof(a)/sizeof(a[0]);
  product(a,n);
  return 0;
}