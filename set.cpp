#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main(){
    int arr[] = {12, 1, 1, 1, 12, 3, 4, 56, 36, 11, 345, 44, 44, 1, 12, 67, 68, 67};
    set<int> s1;
    for(auto x : arr){
        s1.insert(x);
    }
    
    //s1[0] NOT Allowed!!
    set<int> :: iterator itr;
    for(itr = s1.begin(); itr != s1.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    cout<<"size of set:     "<<s1.size();
    
    cout<<endl;
    s1.erase(12);
    for(itr = s1.begin(); itr != s1.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    cout<<"size of set:     "<<s1.size();
    
    s1.erase(s1.begin(), s1.find(56));
    cout<<endl;
    for(itr = s1.begin(); itr != s1.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    cout<<"size of set:     "<<s1.size();
    cout<<endl;

    unordered_set<int> Ust; //Same

    //MultiSet
    multiset<int> mst; //else same
    //sorted along with duplicate elements
    mst.insert(1);
    mst.insert(1);
    mst.insert(1);
    mst.insert(4);
    mst.insert(6);
    mst.insert(7);
    mst.insert(8);
    mst.insert(9);
    mst.insert(9);
    mst.insert(9);
    mst.insert(19);
    mst.insert(21);
    mst.insert(21);
    mst.insert(45);
    mst.insert(46);
    mst.insert(78);
    mst.insert(100);
    mst.insert(789);
    mst.insert(90);
    cout<<endl<<endl;
    cout<<"mst size: "<<mst.size()<<endl;
    cout<<endl<<endl;
    for(auto ele : mst)
        cout<<ele<<" ";
    cout<<endl;
    cout<<"Count of 100: "<<mst.count(100)<<endl;
    cout<<"Count of 1: "<<mst.count(1)<<endl;

    return 0;
}