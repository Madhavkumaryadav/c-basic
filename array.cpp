#include<iostream>
using namespace std;

int main(){
    
    int size=5;
    int array[size];
    for (int i=0;i<size;i++){
        cin>>array[i];
    }
    for (int j=0; j<size; j++){
        cout<<array[j]<<"\n";

    }
    
    return 0;
}