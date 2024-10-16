#include<iostream>
using namespace std;

int indexvalue(int arr[],int sz,int target){
    for (int i=0; i<sz; i++){
        if(arr[i]==target){
            return i;
        }
    }return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int sz=6;
    int target = 5;
    cout<<indexvalue(arr,sz,target)<<"\n";
}