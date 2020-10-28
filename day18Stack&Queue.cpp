#include <iostream>
#include <list>

using namespace std;

class Solution {
private:
    list<char> stac;
    list<char> que;
public:
    void pushCharacter(char val){
        stac.push_front(val);
    }
    void enqueueCharacter(char val){
        que.push_back(val);
    }


    char popCharacter(){
        char val = stac.front();
        stac.pop_front();
        return val;
    }
    char dequeueCharacter(){
        char val = que.front();
        que.pop_front();
        return val;
    }

};


int main() {
    // read the string s.
    string s;
    getline(cin, s);

  	// create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
