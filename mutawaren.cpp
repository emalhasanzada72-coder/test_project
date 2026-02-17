#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of matrix:";
    cin >> n;
    int matrix[n][n];
    cout << "Enter elements of matrix :\n";
    for(int i = 0; i< n; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    bool symmetric = true;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(matrix[i][j] != matrix[j][i]){
                symmetric = false;
                break;
            }
        }
        if(!symmetric) break;

    }
    if(symmetric)
    cout << "Matrix is symmetric. \n";
    else 
    cout << "Matrix is not symmetric .\n";

    return 0;
}