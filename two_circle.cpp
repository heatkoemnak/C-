#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float r1, r2, x1,x2,y1,y2,d,x,y;
    cout<<"x1,y1 and r1:";
    cin>>x1>>y1>>r1;
    cout<<"x2,y2 and r2:";
    cin>>x2>>y2>>r2;
    x=pow(x2-x1,2);
    y=pow(y2-y1,2);
    d=sqrt(x+y);
    if(d<=r1-r2){
        cout<<"Circle2 is inside circle1.";
    }else if(d<=r1+r2){
        cout<<"Circle2 overlaps circle1.";
    }else{
        cout<<"Circle2 does not overlaps circle1.";
    }
    return 0;
}