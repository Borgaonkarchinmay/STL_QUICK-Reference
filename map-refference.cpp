#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;


/*

MAP: 
    sorted & unique  keys

Unordered MAP: 
    unique  keys

Multi MAP: 
    sorted   keys



*/













void printMap1(map<string, string>& m){
    for(auto  &val : m){
        //Here val is pair<string, string> entity
        cout<<val.first<<" "<<val.second<<endl;
    }
}

void printMap2(map<string, string>& m){
    map<string, string> :: iterator itr;
    for(itr = m.begin(); itr != m.end(); itr++){
        //itr is pointer -> to each pair in m
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}

int main(){
    //Syntax
    map<string, string> loc_map;
    if(loc_map.empty())
        cout<<"Map is empty"<<endl;

    //Ways of inserting key-val par in map
    loc_map.insert(pair<string, string>("LIC", "DADA"));
    loc_map.insert(pair<string, string>("Ranna Hospital", "Ajji"));

    //Like array.
    //index = key, value @ key = value
    loc_map["Newale Wasti"] = "Chinmay";

    //Direct insert
    loc_map.emplace("Shahunagar", "Ninad");

    if(!loc_map.empty())
        cout<<"Map is'nt empty"<<endl;

    printMap1(loc_map);
    cout<<endl<<endl;
    printMap2(loc_map);
    cout<<endl<<endl;

    //Erasing
    //loc_map.erase(loc_map.begin());
    //loc_map.erase("LIC");
    

    loc_map.erase(loc_map.begin(), loc_map.find("Ranna Hospital"));
    printMap1(loc_map);
    cout<<endl<<endl;

    loc_map.clear();
    if(loc_map.empty())
        cout<<"Map is empty"<<endl;


    unordered_map<int, int> ummp; //Same
    //Time complexity : best case : O(1)
    //Time complexity : worst case : O(n)
    //Unordered maps cannot store pairs!!!!!!!!!
    //Only single keys can be stored

    
    return 0;
}