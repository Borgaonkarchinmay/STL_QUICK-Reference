#include <iostream>
//#include <unordered_map>
//#include <map>
using namespace std;

/*
    Pair not a containers
    
    pair elements in : SET
                       MAP
                       VECTOR 
*/

int main(){
    pair<int, pair<string, string> > john = {21114, {"George", "Jane"}};
    //Stores: student rollNo -> parent's names
    pair<int, pair<string, string> > yash;
    yash.first = 32142; 
    yash.second.first = "Kuldeep"; 
    yash.second.second = "Asmita";

    //display
    cout<<"john-> rollno: "<<john.first<<" parents: "<<john.second.first<<" "<<john.second.second<<endl;
    cout<<"yash-> rollno: "<<yash.first<<" parents: "<<yash.second.first<<" "<<yash.second.second<<endl;
    return 0;
}