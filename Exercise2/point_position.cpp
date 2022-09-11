#include<iostream>
using namespace std;
int main(){
    float x0,y0,x1,y1,x2,y2,p2;
    cout<<"Enter P0, P1 and P2:";
    cin>> x0>>y0>>x1>>y1>>x2>>y2 ;
    p2 = (x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);
    if(p2>0){
        cout<<"p2 is on the left side line.";
    }else if(p2==0){
        cout<<("p2 is on the same line.");
    }else if(p2<0){
        cout<<"p2 is on the right side line.";
    }else{

    }
    
    return 0;

}
