#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    char S[10][10001];

    //no. of inputs
    cin >> T ;
    int i = 0;

    //T string inputs
    cin.ignore(100, '\n');
    for (i;i<T;i++){
       // cout << "String input " << i << endl;
        cin.getline(S[i],10001);
       // cout << "Taken " << i << endl;
    }


    for(i=0;i<T;i++){
        int j = 0;
        while(S[i][j]!='\0' & (j<=10000)){
            cout << S[i][j] ;
            j = j+2;
        }
        cout << " " ;

        j=1;

        while(S[i][j]!='\0' && (j<=10000)){
            cout << S[i][j] ;
            j = j+2;
        }

      cout << endl;
    }

    return 0;
}
