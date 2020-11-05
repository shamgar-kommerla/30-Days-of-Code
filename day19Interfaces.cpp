#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

/**************CODE REGION*****************/
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int sum=0;
        int i=1;
        while(i<=(n/2)){
            if( n%i == 0){
                sum=sum+i;
            }
            i++;
        }
        return sum+n;
    }
};


/******************************************/
int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
