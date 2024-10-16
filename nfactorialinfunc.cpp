#include <iostream>
using namespace std;

int Nfactorial(int n) {
    int fact=1;
    for (int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;

}

int main() {
    cout<<Nfactorial(6)<<"\n";
    cout<<Nfactorial(10)<<"\n";
    cout<<Nfactorial(11)<<"\n";
}