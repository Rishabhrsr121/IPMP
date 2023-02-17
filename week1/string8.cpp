#include <bits/stdc++.h>
#include<iostream>
using namespace std; 
void printfunction(string B) 
{ 
  int A = B.length(); 
  for (int i = 0; i < A; i++) { 
    int count = 1; 
    while (i < A - 1 && B[i] == B[i + 1]) { 
      count++; 
      i++;  } 
 cout << B[i] << count; 
  } } 
int main() 
{ 
  string B = "rriisshhaabbhh"; 
  printfunction(B); 
  return 0; 
} 