#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Dynamic size
    vector<int> vect;
    int t = 10;
    while(t--){
        vect.emplace_back(t);
    }
    cout<<vect.size()<<endl;
    for(auto x : vect){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<endl;

    vector<int> v1(5,2); //(size, item)
    for(auto x : v1){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

    vector<int> arr[4];
    arr[0].emplace_back(23);
    arr[0].emplace_back(19);
    t = 5;
    while(t--){
        arr[1].emplace_back(t);
    }
    t = 3;
    while(t--){
        arr[2].emplace_back(t);
    }
    arr[3].emplace_back(78);
    for(auto x : arr){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;


    //2D vector
    vector< vector<int> > v3 (4, vector<int> (6, 0));
    for(auto x : v3){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    //{9, 8, [7, 6, 5, 4, 3, 2), 1, 0}
    vector<int> v4(vect.begin() + 2, vect.begin() + 7);
    for(auto x : v4){
        cout<<x<<" ";
    }
    cout<<endl;
    
    
    return 0;
}