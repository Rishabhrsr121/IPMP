#include <bits/stdc++.h>
using namespace std;
 void Triplet(int array[], int n)
{
int *least = new int[n];
int min = 0;
least[0] = -1;
for (int i = 1; i < n; i++)
{
if(array[i] <= array[min])
{
 min = i;
 least[i] = -1;
    
}
       else
       {
          least[i] = min;
       }
   }
   
   int *greater = new int[n];
   int max = n-1;
   greater[n-1] = -1;
   for (int k = n-2; k >= 0; k--)
   {
       if (array[k] >= array[max])
       {
          max = k;
          greater[k] = -1;
       }
       else
       {
          greater[k] = max;
       }
   }

   for (int j = 0; j < n; j++)
   {
       if (least[j] != -1 && greater[j] != -1)
       {
          cout<<"Triplet found is: ";        
          cout<<"["<<array[least[j]]<<", "<<array[j]<<", "<<array[greater[j]]<<"]";
          return;
       }
   }
   cout<<"No such triplet found";
   
   delete [] least;
   delete [] greater;
   return;
}
 

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Triplet(a,n);
    return 0;
}