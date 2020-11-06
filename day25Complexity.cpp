#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    int a[t];
    for(int i=0;i<t;i++){
        cin >> a[i];
    }
    int flag[t];
    for(int i=0;i<t;i++){
        // Corner cases
        flag[i]=1;
        if (a[i] <= 1) {
          flag[i]=0;
        }
        else if (a[i] <= 3){
            flag[i]=1;
        }
        // This is checked so that we can skip
        // middle five numbers in below loop
        else if (a[i]%2 == 0 || a[i]%3 == 0) {
                flag[i]=0;
        }
        else if(a[i]>=5){
            for (int j=5; j*j<=a[i]; j=j+6){

                if (a[i]%j == 0 || a[i]%(j+2) == 0){
                    flag[i] =0;
                }
            }
        }
    }
    for(int i=0;i<t;i++){
       if(flag[i]==1){
            cout << "Prime" << endl;
       }else{
           cout << "Not prime" << endl;
       }
    }

    return 0;
}
