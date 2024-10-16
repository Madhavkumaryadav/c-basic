#include<iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter your number for print the table : " ;
    cin >> n;
    int j=1;
    while(j<=10) {
        cout<< j <<" * "<<n<<" = " << j*n << "\n";
        j++;
    }

    return 0 ;
}