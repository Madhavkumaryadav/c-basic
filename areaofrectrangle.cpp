#include<iostream>
using namespace std;

class shape {
    public:
    void setwidth (int w){
        width=w;
        
    }
    void setheight (int h){
        height=h;
       

    
    }
    protected:
    int width;
    int height;
    
};

class Retrangle: public shape{
    public:
    int getarea(){
        return (height*width);
    }
    
};

int main(void){
    Retrangle rect;
    int a;
    cout<<"Enter the height of rectrangle : ";
    cin>>a;
    cout<<endl;
    int b;
    cout<<"Enter the width of rectrangle  : ";
    cin>>b;

    rect.setheight(a);
    rect.setwidth(b);
    cout<<"Area of rectrangle :    " << rect.getarea()<<endl;

}