#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main() {
//    ************* 1003 ***********
    // int x,y,z;
    // cin>>x;
    // cin>>y;
    // z = x+y;
    // cout<<"X = "<<z;

//    ************* 1002 ***********
        double x,y,n=3.14159;
        cin>>x;
        y = x*x;
        y = y*n;
        cout<<"A="<<setprecision(4)<<fixed<<y<<endl;
    
 
    return 0;
}