#include<bits/stdc++.h>
using namespace std;

int main()
{
    //set stores only unique values in it and in sorted order too - log(n)
    set<int> s;     // ordered_set
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(5);
    s.insert(10);
    s.insert(30);
    cout<<s.size()<<"-size";
    // s.emplace(30);

    for(auto it: s) cout<<it<<" ";

    set<int> s1(s.begin(), s.end());
    // to copy s in s1
    // set<int> s1(s); - another way of copying set

    if(s.find(40)!=s.end())  cout<<"ya"<<endl;
    else cout<<"No"<<endl;
    // It will return iterator pointing to value 20, if not present in set - will return it ponting to s.end()
    auto a = s.find(30);
    cout<<"a:"<<*a<<endl;
    s1.erase(s1.begin());   //will erase only first element from left side - smallest element
    // s.erase(s.begin(), s.end()); 
    // s.erase(20); - will delete 20 if present
    //another ways to erase elements from set
    for(auto it: s1) cout<<it<<" "<<endl;

    //erase() and find() works in log(n)


    unordered_set<int> us;      //unordered set - elements are not stored in sorted manner
    //All the operations are same as set;
    // -    Average time complexity for unordered_set is O(1), but in worst case it is O(size of u_set);
    us.insert(2);
    us.insert(1);
    us.insert(6);
    us.insert(2);
    us.insert(3);
    us.insert(2);

    multiset<int> ms;  //multi set - same element can be stored multiple times unlike set, and in sorted manner
    //All the operations are same as set;
    // log(n) time complexity
    // ms.erase(2);    will erase all occurences of 2 
    // auto a1 = ms.find(2);    will return the iterator pointing at the first occurence of 2 
    // ms.erase(2);    will erase all occurences of 2 
    // ms.erase(ms.find(2));    will erase first occ of 2 

    ms.count(2); // will give how many times 2 occures
    return 0;
}