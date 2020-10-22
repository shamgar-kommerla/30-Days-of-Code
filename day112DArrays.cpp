#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }


    //printing array
    cout << "\n The array is : " << endl;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
                cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    int hg[16],k=0;
    for(int i=0;i<4;i++){

        for(int j=0;j<4;j++){
            hg[k] = ( (arr[i][j]+arr[i][j+1]+arr[i][j+2]) + (arr[i+1][j+1]) + (arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]) );
            k++;
        }
    }

    int maxNum = hg[0];

    for(int i=0;i<16;i++){
        if(hg[i] > maxNum){
            maxNum = hg[i];
        }
    }

    cout << maxNum << endl;







    return 0;
}
