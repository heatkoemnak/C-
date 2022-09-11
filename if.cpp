#include <iostream>
using namespace std;
int main(){

    float x0,y0,x1,y1,x2,y2,p2;
    cout <<"Enter coordinate for the three point P0, P1, P2 : ";
    
    
    cin>> x0>>y0>>x1>>y1>>x2>>y2 ;
    p2 = (x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);
    if (p2>0){
        cout << "P2 is on the left side of the line. ";
    }else if(p2==0){
        cout << "P2 is on the same line. ";
    }else if(p2<0){
        cout << "P2 is on the right side of the line. ";
    }else{

    }
  
    return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     float x0,y0,x1,y1,x2,y2,p2;
//     cout<<"Enter P0:";
//     cin>> x0>>y0>>x1>>y1>>x2>>y2 ;
//     p2 = (x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);
//     if(p2>0){
//         cout<<"p2 is on the left line.";
//     }else if(p2==0){
//         cout<<("p2 is on the same line.");
//     }else if(p2<0){
//         cout<<"p2 is on the right line.";
//     }else{

//     }
    
//     // cout << "Enter P1: "<<endl;
//     // cin >> ;
//     // cout << "Enter P2: "<<endl;
//     // cin >> x2,y2;
    
//     return 0;

// }