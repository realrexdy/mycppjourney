#include <iostream>
using namespace std;

int main(){
    int r,c,i,j;
    
    cout << "Please enter the number of rows of first matrix:\n";
    cin>>r;
    cout << "Please enter the number of columns of first matrix:\n";
    cin>>c;
    
    int a[r][c];
    
    cout << "Please enter the elements of first matrix:\n";
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout << a[i][j];
            cout << "\t";
        }
        cout << "\n";
    }
    
    cout << "Please enter the number of rows of second matrix:\n";
    cin>>r;
    if(r!=c){
        cout<<"Invalid Matrix multiplication.";
    }
    else{
     cout << "Please enter the number of columns of second matrix:\n";
    cin>>c;
    
    int b[r][c];
    
    cout << "Please enter the elements of second matrix:\n";
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> b[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout << b[i][j];
            cout << "\t";
        }
        cout << "\n";
    }
    }
    return 0;
}
