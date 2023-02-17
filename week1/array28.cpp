#include <iostream>
using namespace std;
int main() {

  const int size = 10;
     int values[size] = {5, 3, 4, 17, 9, 2, 6, 14, 8, 10};
        int temp;
           for(int i = 0; i < size; i++)
                {
               if(values[i] % 2 == 0){
                         continue;}
                for(int j = i + 1; j < size; j++)
              {
              if(values[j] % 2 == 0) {
               temp = values[i];
           values[i] = values[j];
            values[j] = temp;
                 }
                }
           }
 for(int i = 0; i < size; i++)
  {
    cout << values[i] << " ";
  }
  return 0;
}