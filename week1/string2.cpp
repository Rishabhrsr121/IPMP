#include<bits/stdc++.h>
using namespace std;
void Permutation(string str, string ans)
    {
if (str.length() == 0) 
 {
 cout<<ans<<endl;
return;
}
    bool alpha[26];
  for (int i = 0; i < str.length(); i++) {
  char ch = str.at(i);
  string ros;
ros = str.substr(0, i) + str.substr(i + 1);

if (alpha[ch - 'a'] == false)
Permutation(ros, ans + ch);
alpha[ch - 'a'] = true;
}
}
int main()
{
string s = "abbc";
    string ans = "";

    if(s.length()==0)
    {
        cout<<"No Permutation";
    }
    else
        Permutation(s, ans);
    return 0;
}

