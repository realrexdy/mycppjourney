#include <iostream>
using std::cin;
using std::cout;


int main(){
    
    int a[10][10]={0}, rowA, colA;
    int a_T[10][10]={0};

    cout << "Enter the number of rows of the matrix: ";
    cin >> rowA;
    cout << "\n Enter the number of columns of the matrix: ";
    cin >> colA;

    cout << "Enter the row elements: \n";

    for(int i=0; i<rowA; i++){
        for(int j=0; j<colA; j++){
            cin >> a[i][j];
        }
    }

    cout << "A matrix is: \n";

    for(int i=0; i<rowA; i++){
        for(int j=0; j<colA; j++){
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    for(int i=0; i<rowA; i++){
        for(int j=0; j<colA; j++){
            a_T[j][i] = a[i][j];
        }
    }

    cout << "Transpose of A matrix is: \n";

    for(int i=0; i<colA; i++){
        for(int j=0; j<rowA; j++){
            cout << a_T[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
