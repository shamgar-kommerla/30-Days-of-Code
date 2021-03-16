#include <bits/stdc++.h>
#include<vector>

using namespace std;
/**
void swap(int x, int y){
    int temp;
    temp =x;
    x=y;
    y= temp;
}
**/
int main() {
    int n;
    cin >> n;
    vector<int> a;
    int x,noOfSwaps=0;

    for(int a_i = 0; a_i < n; a_i++){
    	cin >> x;
    	a.push_back(x);
    }


    for(int i=0;i<(n-1);i++){
        for(int j=i+1;j<n;j++){
            //cout << "loop 1: " << i ;
            if(a[i]>a[j]){
                swap(a[i],a[j]);
                noOfSwaps++;
               // cout << noOfSwaps << endl;
            }
        }
    }


    cout << "Array is sorted in " << noOfSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;

    return 0;
}
