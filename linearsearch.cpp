#include<iostream>
using namespace std;
int linearsearch(int arr[], int sz, int target){
    for (int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] ={4,3,5,43,53,23};
    int sz=6;
    int target=40;

    cout<<linearsearch(arr,sz,target)<<endl;
    return 0;
}