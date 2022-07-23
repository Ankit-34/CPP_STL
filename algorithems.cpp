#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=10;
    int a[n]={1,2,5,4,1,6,7,8,2,3};

    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);


    //Sort  -   sort(startIterator, endIterator);
    sort(a, a+n);
    sort(v.begin(), v.end());
    sort(a+1, a+4);         //sort in any range
    sort(v.begin()+1, v.begin()+5);

    //Reverse   -   reverse(startIterator, endIterator)
    reverse(a, a+n);
    reverse(v.begin(), v.end());
    reverse(a+1, a+6);      //to reverse in any range
    reverse(v.begin()+2, v.begin()+7);

    //Max element   -   *max_element(startIterator, endIterator)
    //Min element   -   *min_element(startIterator, endIterator)
    int i = *max_element(a, a+n);
    int j = *max_element(v.begin(), v.end());
    int k = *max_element(v.begin()+3, v.begin()+8);     //to find max in any range
    //max_element returns iterator pointing to max element, to get value we have to write *-operator
    //If we subtracts v.begin() or arr from max_element, we will get index of max or min element
    int index = max_element(a, a+n) - a;  //a always refers to first position - first iterator of array 
    int index1 = max_element(v.begin(), v.end()) - v.begin();

    //Sum - accumulate(startIterator, endIterator, initialSum)
    int sum = accumulate(a, a+n, 10);       //x is the initial sum that will be added to the sum in between given range
    int sum1 = accumulate(v.begin(), v.end(), 0); 
    
    //Count -   count(startIterator, endIterator, x)
    int c = count(a, a+n, 3);   //to find frequency of element(here 3)
    int c1 = count(v.begin()+1, v.begin()+3, 10);

    //Find  -   find(startIterator, endIterator, x)
    auto f = find(a+1, a+8, 2);  //it will return iterator pointing to first occurence of x(here 2)
    auto f1 = find(v.begin(), v.end(), 10);
    int in = f-a;   //to get index of first occurence
    int in1 = f1-v.begin();
    //iterator will point to end if x is not present in container

    //Binary search -   binary_search(startIterator, endIterator, key), works in on sorted array only
    bool check = binary_search(a, a+n, 1);
    bool check1 = binary_search(v.begin(), v.end(), 20);
    //return true if key is presen tin given range, else false

    //Lower bound   -   lower_bound(startIterator, endIterator, x), works in on sorted array only(here a is not sorted)
    //it returns an iterator pointing on the first element that is not less than x
    int a1[10] = {1,3,3,4,6,7,8,8,9,11};
    auto lb_iterator = lower_bound(a1, a1+n, 5);    
    int lb_value = *lower_bound(a1, a1+n, 5);
    int lb_index = lower_bound(a1, a1+n, 5) - a1;
    // cout<<lb_iterator<<" "<<lb_value<<" "<<lb_index<<endl;

    //Upper bound   -   upper_bound(startIterator, endIterator, x)
    //it returns an iterator pointing on the first element that is just greater than x
    auto ub_iterator = upper_bound(v.begin(), v.end(), 50);
    int ub_value = *upper_bound(v.begin(), v.end(), 50);
    int ub_index = upper_bound(v.begin(), v.end(), 50) - v.begin();
    // cout<<ub_iterator<<" "<<ub_value<<" "<<ub_index<<endl;
    //no of times any element (x) appears can be find from upper_bound - lower_bound

    //Next permutation
    /* 
        O(n)
        suppose our string is "abc"
        permutations are : abc acb bac bca cab cba in lexicographically(which appears in the same sequence of dictionary)
        next_permutation(startIterator, endIterator) will return true if next permutation of given string is exists and it will change our string to that next permutation, else it returns false an our string will stay the same 
        It will first sort our string then it will find our string from all permutation and will return the next permutation
        If our entered string is not sorted and we want all per of that string than first we have to sort our string
    */
    string s="abc";
    cout<<s<<" ";
    while(next_permutation(s.begin(), s.end())){
        cout<<s<<" ";
    }
    cout<<s<<" ";   //our string will be set to the first lexicographical permutation of given string which is abc
    cout<<endl;
    int a3[3] = {2,4,1};
    sort(a3,a3+3);
    for(auto in: a3)    cout<<in<<" ";
    cout<<endl;
    while(next_permutation(a3, a3+3))
    {
        for(auto in: a3)    cout<<in<<" ";
        cout<<endl;
    }
    // for(auto in: a3)    cout<<in<<" ";   -   now our a3={1,2,4};
    //to get all permutation first sort the array

    //Previous permutation
    bool check3 = prev_permutation(s.begin(), s.end());
    cout<<s<<endl;   //will give cba because before this our string is abc

    return 0;
}