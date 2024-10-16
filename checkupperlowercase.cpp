#include<iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter your character : ";
    cin >> ch;
    if (ch >=65 && ch<= 90) {
        cout <<"character is upper case \n" ;
    }
    else {
        cout << "character is lower case ";
    }

    return 0;

}