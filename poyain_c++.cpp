#include <iostream>
using namespace std;
int main(){
    cout << "Enter n number :>";
   
   int n;

   cin >> n;
   int myArray[n];
   int *p = myArray;
      for (int i = 0; i < n; i++){
        cin >> *p;
        p++;
      }
      int max = myArray[0];
      p = myArray;
      int sum = 0; 
      for(int i = 0; i < n; i++){
       sum += *p; 
       p++;
          if(p++ > max)  max = p++;
      }
            cout << max << endl;
           cout << sum;
         return 0;
}