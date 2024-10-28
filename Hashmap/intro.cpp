#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    //creation
    unordered_map<string,int> map;

    //insertion
    //1
    pair<string,int> p = make_pair("name", 3);
    map.insert(p);

    //2
    pair<string, int> p2("subrat", 2);
    map.insert(p2);

    //3
    map["shukla"] = 1;
    map["shukla"] = 2;

    //searching
    cout<<map["name"]<<endl;    //line 13
    cout<<map.at("subrat")<<endl;  //line 17

    cout<< map["unknown"]<<endl;  //entry bnegi 
    cout<< map.at("unknown")<<endl;  //0

    //size
    cout<< map.size()<<endl;

    // to check presence
    cout<<map.count("bro")<<endl;
    cout<<map.count("subrat")<<endl;    //line 17

    //erase the entry
    map.erase("subrat");
    cout<<map.size()<<endl; 


    //iterator 
    //method 1
    for (auto i : map){
        cout<< i.first <<" "<< i.second <<endl;
    }
    cout<<endl;

    //method 2
    unordered_map<string, int>:: iterator it = map.begin();

    while(it != map.end()){
        cout<< it->first <<" "<< it->second <<endl;
        it++;
    }

    // agar unordered map ki jgh only map hota to sequence wise print hoga

    
    return 0;
}