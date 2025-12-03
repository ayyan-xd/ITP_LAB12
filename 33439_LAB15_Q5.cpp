#include <iostream>
using namespace std;
int searchRec(int A[] , int size , int n , int indx){
    if(indx==size) return -1;
    if(A[indx]==n) return indx;
    return searchRec(A , size , n , indx+1);
}
int main(){
    int A[10] = {5, 4, 3, 2, 1, 6, 10, 9, 7, 8};
    int size=10;
    int n;
    cout<<"Enter element to be searched : ";
    cin>>n;
    int res=searchRec(A , size , n , 0);
    if(res==-1) cout<<"Not Found.";
    else cout<<"Found at "<<res<<" index.";
    return 0;
}
