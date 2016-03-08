/**
delcaration:
vector<int>v;

size:
int size=v.size();

pushing
v.push_back(x);

popping
v.pop_back();

sorting a vector:
sort(v.begin(), v.end());
**/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //cin and cout
    vector<int>v;
    int size;
    cin>>size;
    int x;
    for(int i=0; i<size; i++){
        //must read the input from STDIN first
        cin>>x;
        //the push the integer to a vector
        v.push_back(x);
    }
    //print the sorted order
    //sort first
    sort(v.begin(),v.end());
    for(int j=0; j<size; j++){
        cout<<v[j]<<" ";
    }
    return 0;
}
