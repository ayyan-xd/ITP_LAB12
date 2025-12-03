#include <iostream>
using namespace std;
bool isSubsequence(string a , string b , int i , int j){
    if(i==a.length()) return true;
    if(j==b.length()) return false;
if(a[i]==b[j])
    return isSubsequence(a , b , i+1 , j+1);
return isSubsequence(a , b , i , j+1);
}
int main(){
    string a , b;
    cout<<"Enter first string : ";
    cin>>a;
    cout<<"Enter second string : ";
    cin>>b;
if(isSubsequence(a , b , 0 , 0))
        cout<<"true";
    else
        cout<<"false";
    return 0;
}
