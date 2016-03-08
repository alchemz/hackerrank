#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
int c, t; 
vector<int> vec; 
cin >> c; 
while (c--) { 
  cin >> t; 
  vec.push_back(t); 
}

cin  >> c;
vec.erase(vec.begin() + c-1);

cin >> c >> t;
vec.erase(vec.begin()+ c-1, vec.begin()+ t-1);

cout << vec.size() << endl;
auto end = vec.end();
for (auto i = vec.begin(); i != end; i++) {
    cout << *i <<" ";
}
return 0;
}
