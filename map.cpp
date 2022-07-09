#include<bits/stdc++.h>
using namespace std;

int main()
{
    //map is key value pair
    //map only stores unique keys in lexicographical order of keys
    //It operates in log(n) time complexity,  n-size of container   
    map<string, int> mp;
    mp["a1"]=10;
    mp["a2"]=20;
    mp["a4"]=80;
    mp["a3"]=50;
    mp["a3"]=20;    //will update value of a3=20 from 50;
    mp.emplace("a6", 50);

    for(auto it:mp)    cout<<it.first<<":"<<it.second<<" ";
    //Here auto itself will act as (pair)* - suitable datatype pointer, and it will be the name of this pointer, so we can easily access key by it.first and value by it.second
    //it will act as pair

    for(auto it=mp.begin(); it!=mp.end(); it++) cout<<it->first<<":"<<it->second<<" ";
    //Here auto will act as only suitable datatype (pair) because mp.begin() return iterator type of pointer, so it will work as pointer here , so to access first and second we have to write it->first and it->second
    //it will act as iterator

    mp.erase("a4");     //erase(key) will erase key if present
    mp.erase(mp.begin());
    // for(auto it:mp)    cout<<it.first<<":"<<it.second<<" ";
    // mp.clear();
    // mp.erase(mp.begin(), mp.end());
    auto it = mp.find("a3"); //it will point where a3 lies
    cout<<it->first<<":"<<it->second;

    bool check = mp.empty();
    int c = mp.count("a3"); //it always returns 1 because it stores only unique keys 

    unordered_map<string, int> ump;     
    // keys are not sorted in lexicographically - it will be stored in any order but it will contain only unique keys
    //time complexity is O(1) in almost all cases, O(n) in worst case
    ump.emplace("b1", 10);
    ump.emplace("b1", 10);
    ump.emplace("b3", 20);
    ump.emplace("b2", 70);
    for(auto it:ump)    cout<<it.first<<":"<<it.second<<" ";

    multimap<string, int> mm;       //can store more than one instance of key in sorted manner
    mm.emplace("c1", 40);
    mm.emplace("c1", 20);
    mm.emplace("c3", 70);       
    mm.emplace("c2", 40);
    for(auto it:mm)    cout<<it.first<<":"<<it.second<<" ";

    return 0;
}