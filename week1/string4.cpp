#include <iostream>
#include <string.h>

using namespace std;

int main() {
 
   char str[100], temp;
   int i, j, k, len;
 
   cout << "Enter a string \n";
   cin.getline(str,100);
 
   len = strlen(str);
 
   for(i = 0, j =0; i < len; i++) {
  
     if(str[i]==' ' || i == len-1){
   
        if(i < len-1) {
           k = i - 1;
        } else {
           k = i;
        }
  
        while (k > j) {
         temp   = str[j];
         str[j] = str[k];
         str[k] = temp;
         j++;
         k--;
      }
  
      j = i + 1;
    }
  }
 
  cout << str;
 
  return 0;
}