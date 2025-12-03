#include <iostream>
using namespace std;
int rowA , colA , rowB , colB;
int A[10][10] , B[10][10] , C[10][10]={0};
void multiply(int i , int j , int k){
    if(i==rowA)
        return;
     if(j==colB){
        multiply(i+1 , 0 , 0);
        return;
    }
    if(k==colA){
        multiply(i , j+1 , 0);
        return;
    }
    C[i][j]+=A[i][k]*B[k][j];
    multiply(i , j , k+1);
}
int main(){
    cout<<"Enter rows and columns of A: ";
    cin>>rowA>>colA;
    cout<<"Enter rows and columns of B: ";
    cin>>rowB>>colB;
    if(colA!=rowB){
        cout<<"Not possible";
        return 0;
    }
    cout<<"Enter Matrix A:\n";
    for(int i=0 ; i<rowA ; i++){
        for(int j=0 ; j<colA ; j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter Matrix B:\n";
    for(int i=0 ; i<rowB ; i++){
        for(int j=0 ; j<colB ; j++){
            cin>>B[i][j];
        }
    }
     multiply(0 , 0 , 0);
    cout<<"\nResult Matrix C:\n";
    for(int i=0 ; i<rowA ; i++){
        for(int j=0 ; j<colB ; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}