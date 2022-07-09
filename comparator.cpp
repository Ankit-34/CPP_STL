#include<bits/stdc++.h>
using namespace std;

bool comp(int el1, int el2)
{
    if(el1>=el2) true;
    else false; 
}
//in comparator we take only first two elements from conatiner and put them in conditions according to the answer that we want
//here we want array in descending order so we checked that is element1>=element2 then return true and if they are not then simply swap them, for undestanding purpose we can say that now each time to arrange two element it will go into comparator to check the condition given by us and will sort whole array as our requirement\

bool comp2(pair<int,int> one, pair<int,int> two)
{
    if(one.first<two.first) return true;
    if(one.first==two.first){
        if(one.second>two.second)   return true;
    }
    return false;
}


int main()
{
    int a[6] = {3,1,6,2,8,5};
    sort(a, a+6);
    //we know that it will sort array in ascending order, but what if we want to sort it in descending order
    //so for that we have to write something call Comparator and have to pass this comparator as the thired argument in sort function
    //Now we have one in-built comparator greatre<int> which we can use in the case of descending order
    sort(a, a+6, comp); 
    for(auto in: a)    cout<<in<<" ";

    vector<pair<int,int>> v;
    v.push_back(make_pair(2,6));
    v.push_back(make_pair(5,7));
    v.push_back(make_pair(1,1));
    v.push_back(make_pair(6,6));
    v.push_back(make_pair(4,6));
    v.push_back(make_pair(5,1));

    sort(v.begin(), v.end());
    for(auto in: v)    cout<<"{"<<in.first<<","<<in.second<<"}"<<" ";

    //what is I want to sort vector in different manner,
    //if element1.first<element2.second then it is ok else swap them
    //if element1.first==element2.first, then sort them according to the descending order of element.second's value
    //example : [{6,3},{3,1},{3,7}], I want ans as : [{3,7},{3,1},{6,3}] , whether the normal sort will give the answer : [{3,1},{3,7},{6,3}], so we have to write comparator here

    sort(v.begin(), v.end(), comp2);
    for(auto in: v)    cout<<"{"<<in.first<<","<<in.second<<"}"<<" ";

    return 0;
}