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

int main(){
vector<int> v;
int size;
cin>>size;
int a;
for(int i=0; i<size;i++){
  cin>>a;
  v.push_back(a);
}

sort(v.begin(), v.end());
for(int i=0; i<size; i++){
  cout<<v[i]<<" ";
} 
return 0;
}
