#include <iostream>

using namespace std;
int main(){
    int sum = 0; 
    int matrix[4][2];
    cout << "please enter 8 adad for matrix 2 * 4 : ";
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 2; j++){
            cout << "matrix["<< i<< "]["<< j << "]: " << endl;
            cin >> matrix[i][j];
        }
    }
    cout << "\n your matrix " << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            cout << matrix[i][j] << "   ";
            sum += matrix[i][j];
        }
        cout << endl;
    }
    cout << "sum of your matrix is " << sum << endl;
    return 0;
}