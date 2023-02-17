#include <iostream>
using namespace std;
int main()
{
    int q=20;
    int n=256;
 char str[q]="hiihello";
    int i;
    int freq[n] = {0};

    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    cout<<" non repeating terms are: ";
    for(i = 0; i < n; i++)
    {
        if(freq[i] == 1)
        {
           cout<<char(i)<<"  " ;
        }
    }
    return 0;
}