#include <iostream>
using std::cin;
using std::cout;


int main(){
    
    int a[10][10]={0}, rowA, colA;
    int b[10][10]={0}, rowB, colB;
    int c[10][10]={0};

    cout << "Enter the number of rows of the first matrix: ";
    cin >> rowA;
    cout << "\n Enter the number of columns of the second matrix: ";
    cin >> colA;

    cout << "Enter the matrix elements: \n";

    for(int i=0; i<rowA; i++){
        for(int j=0; j<colA; j++){
            cin >> a[i][j];
        }
    }

    cout << "\nFirst matrix is: \n";

    for(int i=0; i<rowA; i++){
        for(int j=0; j<colA; j++){
            cout << a[i][j] << "\t";
        }
        cout<<"\n";
    }

    cout << "Enter the number of rows of the second matrix: ";
    cin >> rowB;

    if(colA!=rowB){
        cout << "Invaid Matrix Multiplication\n";
    }
    else{
            cout << "\n Enter the number of columns of the second matrix: ";
    cin >> colB;

    cout << "Enter the matrix elements: \n";

    for(int i=0; i<rowB; i++){
        for(int j=0; j<colB; j++){
            cin >> b[i][j];
        }
    }

    cout << "\nSecond matrix is: \n";

    for(int i=0; i<rowB; i++){
        for(int j=0; j<colB; j++){
            cout << b[i][j] << "\t";
        }
        cout<<"\n";
    }

    for(int i=0; i<rowA; i++){
        for(int j=0; j<colB; j++){
            c[i][j]=0;
            for(int k=0; k<colA; k++){
                c[i][j]+= a[i][k]*b[k][j];
            }
        }
    }

    cout << "\n\nResultant matrix is: \n";

    for(int i=0; i<rowA; i++){
        for(int j=0; j<colB; j++){
            cout << c[i][j] << "\t";
        }
        cout<<"\n";
    }

        cout<<"\n";

    }

    return 0;
}
