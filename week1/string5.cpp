#include <iostream> 
#include <string.h> 
using namespace std;

   int main(){ 
        string str; 
      int count;  
       cout<<"Enter the string : \n"; 
        getline(cin,str);
            cout<<"duplicate character: \n"; 
       int l=str.length();
        for(int i = 0; i <l; i++) { 
         count = 1; 
             for(int j = i+1; j < l; j++) {
      if(str[i] == str[j] && str[i] != ' ') { 
         count++; 
       str[j] = '0';   } 
        }
           if(count > 1 && str[i] != '0') 
           cout<<str[i];  }
           return 0; 
               }