#include <iostream>
using namespace std;

int main(){
    int r, c, p, q;
    cout << "Please enter the number of rows of the first matrix:\n";
    cin >> r;
    cout << "Please enter the number of columns of the first matrix:\n";
    cin >> c;
    float a[r][c];
    cout << "Please enter the elements of the first matrix:\n";
    for(int i=0; i<r; i++){
        for(int j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
    cout << "Please enter the number of rows of the second matrix:\n";
    cin >> p;
    if(r!=p){
        cout << "Invalid matrix addition:\n";
    }
    else{
        cout << "Please enter the number of columns of the second matrix:\n";
    cin >> q;
    if(c!=q){
        cout << "Invalid matrix addition:\n";
    }
    else{
        float b[p][q];
        cout << "Please enter the elements of the second matrix:\n";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin >> b[i][j];
            }
        }
        cout << "The resultant matrix is:\n";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cout << a[i][j]+b[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    }
    return 0;
}
