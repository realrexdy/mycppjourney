#include <iostream>
using namespace std;

int main(){
    int m;
    int n;
    cout << "# of rows of the matrix"<<"\n";
    cin >> m;
    cout << "# of columns of the matrix"<<"\n";
    cin >> n;
    double a[m][n];
    int i=0;
    int j=0;
    cout << "Enter the elements of the matrix."<<"\n";
    for(i=0;i<m;i++){
     for(j=0;j<n;j++){
        cin >> a[i][j];
    }  
    }
   
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        cout << a[i][j] << "\t";
    }  
    cout << "\n";
    }
    return(0);
}
