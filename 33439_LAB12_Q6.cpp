#include <iostream>
using namespace std;
struct phone{
    int area_code;
    int exchange;
    int number;
};
void printPhone(phone &p){
    cout<<"("<<p.area_code<<") "<<p.exchange<<"-"<<p.number;
}
int main(){
    phone p1={212 , 767 , 8900};
    phone p2;
    cout<<"Enter area code : ";
    cin>>p2.area_code;
    cout<<"Enter exchange : ";
    cin>>p2.exchange;
    cout<<"Enter number : ";
    cin>>p2.number;
    cout<<"My number is ";
    printPhone(p1);
    cout<<"\nYour number is ";
    printPhone(p2);
    return 0;
}
