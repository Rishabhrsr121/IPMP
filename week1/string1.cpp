#include <iostream>
using namespace std;
void reverse(const string& a);
int main() {
 string str;
cout << " enter a string " << endl;
getline(cin, str);
reverse(str);
return 0;    
}
void reverse(const string& str) {
size_t numofchar = str.size();
if(numofchar == 1) {
cout << str << endl;
 }
 else {
cout << str[numofchar - 1];
reverse(str.substr(0, numofchar - 1));
  }
}