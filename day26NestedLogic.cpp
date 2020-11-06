#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int day[2],m[2],y[2];
    for(int i=0;i<2;i++){
        cin >> day[i]
            >> m[i]
            >> y[i] ;
    }
    int fine = 0;
    if(y[0]==y[1]){

        if(m[0]==m[1]){
            if(day[0]<=day[1]){
                fine=0;
            }else{
                fine = 15*(day[0]-day[1]);
            }
        }else if(m[0]<m[1]){fine=0;}
        else{
            fine=500 * (m[0]-m[1]);
        }
    }else if(y[0]>y[1]){
        fine = 10000;
    }

        cout << fine << endl;

    return 0;
}
