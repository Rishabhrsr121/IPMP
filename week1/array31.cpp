#include <bits/stdc++.h>
using namespace std;

void sort_arr(int A[], int n)
{
int i, count0 = 0, count1 = 0, count2 = 0;

  for (i = 0; i < n; i++)  {

  if (A[i] == 0)
            count0 = count0 + 1;

 else if (A[i] == 1)
  count1 = count1 + 1;
else       
count2 = count2 + 1;}
    i = 0;
  while (count0 > 0) {
        A[i++] = 0;
        count0--; }
    while (count1 > 0) {
        A[i++] = 1;
        count1--;}

    while (count2 > 0) {
        A[i++] = 2;
        count2--;
             }   }

int main(){
int arr[] = {0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0};
    int n = sizeof(arr) / sizeof(int);

    sort_arr(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;}
