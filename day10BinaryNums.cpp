#include <bits/stdc++.h>

using namespace std;

int decimalToBinary(int n,int arr[]){
    int i=0,x =0;
    while(n!=0){
        x = n % 2;
        arr[i] = x;
        i++;
        n = n/2;
        if(n==1){
            arr[i]= 1;
            return i;
        }
    }
    return i;
}



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int arr[20] ;
    int count = decimalToBinary(n , arr);

   for(int i=0;i<=count;i++){
        cout << arr[i] << "\t";
    }
    cout << endl ;


    //printing maximum no. of consecutive 1's
    int maxOne =0,x=0;
    //cout << "Count = " << count << endl;
    for(int i=0;i<=count;i++){
        if(arr[i]==1){
            if(maxOne <= x){
                x=x+1;
                maxOne = x;
               // cout << "maxOne increased " << i << endl;
            }else{
                x = x+1;
            }
        }
        else{
            x = 0;
        }
    }
    cout << maxOne << endl;

    return 0;
}
