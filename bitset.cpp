#include<bits/stdc++.h>
using namespace std;

int main()
{
    bitset<5> bt;   //we can store only 1 and 0 in bitset
    //bitset<x> means we are declaring x spaces to store 1 bit data(0 or 1), any other digit can not be stored, indexing will be 0 to x as array
    cin>>bt;
    cout<<bt[0]<<bt[1]<<bt[2]<<bt[3]<<bt[8];    //we can access bits from index like array
    bt.all();       //true if all bits are set to 1, else false
    bt.any();       //true if any bit is set to one, else false
    bt.count();     //print no of set bits(no of 1's)
    bt.flip(2);     //will toggle the bit at the given index
    bt.none();      //true if if every bit is unset. else false
    bt.set(1);      //will set the bit at index 1 
    bt.set();       //will set all bits as 1
    bt.set(3, 0);   //will set 0 at index 3
    bt.reset();     //will reset all the bits to 0 
    bt.reset(4);    //will reset bit to 0 at index 4
    bt.size();      //print the size of bitset
    bt.test(1);     //true if bit is set or not in perticuler index(here 1), else false 
    return 0;
}