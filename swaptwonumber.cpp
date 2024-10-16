#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cout<<"a : " ;
    cin>>a;
    cout<<"b : ";
    cin >> b;
    
    a=a^b;
    b=b^a;
    a=a^b;
    cout <<"a = " <<a<<"\n";
    cout<<"b = " <<b;

}