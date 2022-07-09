#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int> p1={1,2};
    pair<pair<int,int>,int> p2={{3,5},9};
    pair<pair<int,string>,int> p3={{3,"this"},2};

    cout<<p1.first<<p2.first.second<<p3.second<<endl;

    //we can do something like..
    vector<pair<int, int>> v;
    set<pair<int, int>> s;
    map<pair<int, int>, int> m;
    // unordered_map<pair<int, int>, int>; is not possible
     
     m[{3,4}]=100;
     m.emplace(make_pair(2,2), 20);
     m.emplace(make_pair(6,3), 50);
     m.emplace(make_pair(1,3), 90);
     m.emplace(make_pair(2,8), 60);

    for(auto it: m) cout<<it.first.first<<":"<<it.second<<" ";

    
    return 0;
}