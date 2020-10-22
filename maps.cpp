/*MAPS PRACTICE*/
/*****************************************************************
Some basic functions associated with Map:
    begin() – Returns an iterator to the first element in the map
    end() – Returns an iterator to the theoretical element that follows last element in the map
    size() – Returns the number of elements in the map
    max_size() – Returns the maximum number of elements that the map can hold
    empty() – Returns whether the map is empty
    pair insert(keyvalue, mapvalue) – Adds a new element to the map
    erase(iterator position) – Removes the element at the position pointed by the iterator
    erase(const g)– Removes the key value ‘g’ from the map
    clear() – Removes all the elements from the map
*************************************************************************/

#include<iostream>
#include<map>
#include<iterator>
#include<string>



using namespace std;

void lineBreak(){
 cout <<"------------------------------------------------------------------------" <<endl;;
}

int main(){

    //empty map container
    map<long int ,string> studentList ;
    string name_ = "Mithun Kumar";

    //insert elements in random
    studentList.insert({510518041,"Dipendu Mahata"});
    studentList.insert({510518042,"Ankitha Marandi"});
    studentList.insert({510518043,"Indrajit Sadhukhan"});
    studentList.insert({510518044,"Shamgar Staines"});
    studentList.insert(pair<long int,string>(510518083,"Sai Teja")); //this can also be used for clarity
    studentList.insert({510518072,"Manish Kumar"});
    studentList.insert({510518035,name_});

    lineBreak();
    //printing studentList
    map<long int,string>::iterator itr; //iterator of the map
    cout << "The List of Students is as follows: " << endl;
    for(itr = studentList.begin();itr != studentList.end();itr ++){
        cout << itr->first <<  "\t" << itr->second << endl;
    }

    //size of the container
    cout << "\nStrength of the class is : " << studentList.size() << endl;
    lineBreak();


    //erasing(removing)  a person from list
    studentList.erase(510518035);

    cout << "List of students after removal" << endl;
    for(itr = studentList.begin();itr != studentList.end();itr ++){
        cout << itr->first <<  "\t" << itr->second << endl;
    }
    cout << "\nStrength of the class is : " << studentList.size() << endl;






    lineBreak();
    return 0;
}
