#include<bits/stdc++.h>
using namespace std;
    // Max size of arr or vextor inside main is 10^7 -> for datatype int, char, double
    // Max size of arr or vector inside main is 10^8 -> for datatype bool
int main()
{
    // Max size of arr inside main is 10^6 -> for datatype int, char, double
    // Max size of arr inside main is 10^7 -> for datatype bool
    // int a[10] = {1};     //first element is 10 all other will be zero
    // int a1[20];      //all will have garbage value because we are inside main method, globly it will be zero
    array<int , 10> arr;    //array of size 10
    arr.fill(10);   //will initialize entire array with 10
    arr.at(1) = 20;     //We can give value at perticuler index
    // by default there will be garbage values
    for(int i=0; i<10; i++)
        cout<<arr.at(i)<<" ";   //will gives value at given index
    cout << endl;

    for (auto it = arr.begin(); it != arr.end(); it++)      //iterator
        cout << *it << " ";
    // for (auto it = arr.rend(); it != arr.rbegin(); it++)
    //     cout << *it << " ";
    // for(auto it: arr)    //for each loop
    //     cout << it << " ";
    cout << endl;
    // arr.begin() - points on first element
    // arr.end() - points on next element of the last
    // arr.rbegin() - points on last element
    // arr.begin() - points on prev element of first
    cout << arr.size() << endl; // size of array
    cout<<arr.front()<<endl;    //first element - arr.at(0)
    cout<<arr.back()<<endl; //last element - arr.at(arr.size()-1)

    return 0;
}