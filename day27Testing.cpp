/**
 * Don't know what the problem is, it didn't compile properly on my linux system.
 * But it was accepted by HackerRank
 * */
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>
#include <set>

using namespace std;

int minimum_index(vector<int> seq) {
    if (seq.empty()) {
        throw invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int min_idx = 0;
    for (int i = 1; i < seq.size(); ++i) {
        if (seq[i] < seq[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}

class TestDataEmptyArray {
public:
	static vector<int> get_array() {       
		vector<int> arr;
		return arr;
	    }

};

class TestDataUniqueValues {
public:
    	static vector<int> get_array() {
        	// complete this function
		vector<int> arr1;
		for(int i=0;i<5;i++){
			arr1.push_back(i);
		}
		return arr1;
	    }

	    static int get_expected_result() {
	        // complete this function
		return 0;            		
	    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
	
   static vector<int> get_array() {
        // complete this function
	vector<int> arr2;
	for(int i=0;i<4;i++){
		arr2.push_back(i+1);
	}
	arr2.push_back(1);
   	 return arr2;
    }

    static int get_expected_result() {
        //return minimum_index(get_array());
	return 0;
    }
};


void TestWithEmptyArray() {
    try {
        auto seq = TestDataEmptyArray::get_array();
        auto result = minimum_index(seq);
    } catch (invalid_argument& e) {
        return;
    }
    assert(false);
}

void TestWithUniqueValues() {
    auto seq = TestDataUniqueValues::get_array();
    assert(seq.size() >= 2);

    assert(set<int>(seq.begin(), seq.end()).size() == seq.size());

    auto expected_result = TestDataUniqueValues::get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

void TestWithExactlyTwoDifferentMinimums() {
    auto seq = TestDataExactlyTwoDifferentMinimums::get_array();
    assert(seq.size() >= 2);

    auto tmp = seq;
    sort(tmp.begin(), tmp.end());
    assert(tmp[0] == tmp[1] and (tmp.size() == 2 or tmp[1] < tmp[2]));

    auto expected_result = TestDataExactlyTwoDifferentMinimums::get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

int main() {
    TestWithEmptyArray();
    TestWithUniqueValues();
    TestWithExactlyTwoDifferentMinimums();
    cout << "OK" << endl;
    return 0;
}

