#include<bits/stdc++.h>
using namespace std;
int main()
{
    // v.push_back() -> append or add the element in vector
    // v.emplace_back() -> same as push back but faster then it
    // v.pop_back() -> remove the last element from vector
    // v.size() -> size of vector
    // v.clear() -> will clear all the elements of vector, all delete at once
    // v.begin() - points on first element
    // v.end() - points on next element of the last
    // v.rbegin() - points on last element
    // v.begin() - points on prev element of first
    // v.front() - first element of vector
    // v.back() - last element of vector
    // v.empty() - check whether th evector is empty or not
    // v.erase(position) or v.erase(posI, posII)[it will erase elements from posI to posII-1] - to delete elements from vector
    // swap(v1, v2) - will swap two vectors

    vector<int> v;
    cout<<v.size()<<endl;
    v.push_back(1);
    v.push_back(2);
    cout << v.size() << endl;
    v.push_back(3);
    v.push_back(4);
    v.pop_back();
    cout << v.size() << endl;

    vector<int> v1(5, 1);   //{1,1,1,1,1}
    vector<int> v2(4, 0);   //{0,0,0,0}
    vector<int> v3(v2.begin(), v2.end());   //{0,0,0,0} - copy of v2
    vector<int> v4(v2);   //{0,0,0,0} - copy of v2
    vector<int> v5(v1.begin(), v1.begin()+3);

    // cout << v1[1]<<endl;
    swap(v, v1);

    //2D vector
    vector<vector<int>> vv;
    vv.push_back(v);
    vv.push_back(v1);
    vv.push_back(v2);
    vv.push_back(v3);
    // cout << vv[1][1] << " " << vv[0][2] << endl;
    
    //printing 2d vector using for each loop
    for(auto vec: vv)
    {
        for(auto it: vec)
            cout << it << " ";
        cout << endl;
    }

    //printing 2d vector using for loop
    for (int i = 0; i < vv.size(); i++)
    {
        for (int j = 0; j < vv[i].size(); j++)
            cout << vv[i][j] << " ";
        cout << endl;
    }

    vector<vector<int>> vec(10, vector<int> (20, 0));
    //it will create 2d vector of size 10 and size of each vector in each index is 20 with default value 0
    vec.push_back(vector<int>(10, 1));  //we can push back one more vector

    vector<int> a[10];
    //will create array of 10 vectors , we can not push 11th vector as we can in above 

    //3D vector
    vector<vector<vector<int>>> vvv(10, vector<vector<int>>(20, vector<int>(30, 0)));
    //it will create 3d vector of size 10 x 20 x 30

    vector<vector<int>> z(5, vector<int>(5,2));
    cout<<z[4][4];

    vector<int> ab;
    ab.push_back(1); 
    ab.push_back(2); 
    ab.push_back(0); 
    ab.push_back(4); 
    ab.push_back(5); 
    ab.push_back(6);
    cout<<"this is"<<ab.size()<<" "; 
    for(auto in: ab)    cout<<in<<" ";
    cout<<endl;
    remove(ab.begin(), ab.end(), 0);
    cout<<ab.size()<<endl; 
    for(auto in: ab)    cout<<in<<" ";

    return 0;
}