#include <iostream>
#include <string>

using namespace std;

int main() {

    string str ;
    cin >> str ;
    int num;

    try {
       num = stoi(str);
        throw 1;
    }catch (exception e) {
        cout << "Bad String" << endl;
    }
    catch(...){
        cout << num << endl;
    }

    return 0;
}
