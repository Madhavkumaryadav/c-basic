#include<iostream>
using namespace std;

int main() {
    unsigned n;
    cout <<"Enter your number : " ;
    cin >> n;
    unsigned int factorial=1;
    for (unsigned int i=1; i<=n; i++){
        factorial=factorial * i;
        // factorial++;

    }
    cout<<"your factorial is : " << factorial;
    cout<<"\n";

    return 0;

}

