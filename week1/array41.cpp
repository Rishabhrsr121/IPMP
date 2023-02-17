#include <iostream>
using namespace std;
#define R 5
#define C 4
int min2(int a, int b)
{ return (a < b)? a: b; }
int min3(int a, int b, int c)
{ return min2(min2(a, b), c);}
int max(int a, int b)
{ return (a > b)? a: b; }
void DiagonalMatrix(int matrix[][C]){
   for (int line=1; line<=(R + C -1); line++){
      int start_col = max(0, line-R);
      int count = min3(line, (C-start_col), R);
      for (int j=0; j<count; j++)
      cout<<matrix[min2(R, line)-j-1][start_col+j]<<"\t";
      cout<<endl;
   }
}
int main(){
   int M[R][C] = {{1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
      {13, 14, 15, 16},
      {17, 18, 19, 20},};
   cout<<"The matrix is :\n ";
   for (int i=0; i< R; i++){
      for (int j=0; j<C; j++)
      cout<<M[i][j]<<"\t";
      cout<<endl;
   }
   cout<<"diagonal matrix is :\n";
   DiagonalMatrix(M);
   return 0;
}