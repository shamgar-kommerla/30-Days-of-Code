#include <iostream>
#include <cstdio>
#include<iomanip>
#include <sstream>

using namespace std;

int main() {
  int a;
    long long int b;
    char ch;
    double fl;
    double dob;

    cin >> a;
    cin >> b;
    cin >> ch ;
    cin>> fl ;
    cin >> dob ;

     // Print value to a string
    stringstream ss[2];
    ss[0] << std::fixed << std::setprecision(10) << fl;
     ss[1] << std::fixed << std::setprecision(10) << dob;
    std::string str[2];
    str[0] = ss[0].str();
    str[1] = ss[1].str();

    // Ensure that there is a decimal point somewhere (there should be)

    for(int i=0;i<=1;i++){

        if(str[i].find('.') != std::string::npos)
        {
            // Remove trailing zeroes
            str[i] = str[i].substr(0, str[i].find_last_not_of('0')+1);
            // If the decimal point is now the last character, remove that as well
            if(str[i].find('.') == str[i].size()-1)
            {
                str[i] = str[i].substr(0, str[i].size()-1);
            }
        }
    }


    cout << a << endl;
    cout <<b << endl;
    cout <<ch << endl;
    cout << str[0] << endl;
    cout << str[1] << endl;

    return 0;
}
