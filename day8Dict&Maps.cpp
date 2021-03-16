#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include<iterator>

using namespace std;


int main() {

   int n;
   cin >> n;

   map<string,int>phoneBook;

   for(int i=0;i<n;i++){
    cin.ignore(100, '\n');
    char s[20];
    int phn,j;


    cin >> s >> phn ;

    phoneBook.insert({s, phn });

   }

   char query[20];
   map<string,int>::iterator itr;

   while(cin >> query){
     if(phoneBook.find(query) != phoneBook.end()){
        cout << query << "=" << phoneBook.find(query)->second  << endl;
     }else{
     cout << "Not found" << endl;
     }

   }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
