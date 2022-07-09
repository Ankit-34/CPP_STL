#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;     //maximum priority queue - log(n)
    pq.push(3);
    pq.push(1);
    pq.push(6);
    pq.push(4);
    pq.push(2);
    pq.push(1);
    while(!pq.empty()) {cout<<pq.top()<<" ";pq.pop();}
    cout<<endl;
    //it will kepp highest value on top - means data will be stored in decreasing orde

    // pq.top();
    // pq.pop();

    priority_queue<pair<int,int>> p;
    p.push(make_pair(2,3));
    p.push(make_pair(1,2));
    p.push(make_pair(5,1));
    p.push(make_pair(3,4));
    p.push(make_pair(2,1));

    priority_queue<int> pqq;        //example for minimum priority queue
    pqq.push(-1);                      //insert element as (-1)*element
    pqq.push(-4);
    pqq.push(-3);
    pqq.push(-2);
    pqq.push(-6);

    cout<<(-1)*pqq.top()<<endl;           //access the top() by (-1)*top() , first way for minimum priority queue

    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(9);
    mpq.push(5);
    mpq.push(7);
    mpq.push(4);
    mpq.push(10);

    cout<<mpq.top()<<endl;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pri_q;
    //we can also use pair rather than int,float,double,char,string etc..


    deque<int> dq;
    dq.push_back(20);
    dq.push_front(40);
    dq.push_back(10);
    dq.push_front(30);
    dq.pop_back();
    dq.pop_front();
    //begin end rbegin rend empty size at clear - all are there in deque as vector

    list<int> ls;
    //it has all functions like deque 
    //speciality : it can remove any element in O(1)
    ls.push_front(10);
    ls.push_front(30);
    ls.push_front(20);
    ls.remove(20);  //removes in O(1);
    return 0;
}