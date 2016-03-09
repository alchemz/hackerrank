#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n, order, mark;
   string name;
   cin >> n;
   map<string, int> m;
   for (int i=0; i<n; i++) {
       cin >> order >> name;
       if (order==1) {
           cin >> mark;
           map<string, int>::iterator itr=m.find(name);
           if (itr==m.end())
               m.insert(make_pair(name, mark));
           else
               //itr->second += mark;
               m[name] += mark;
       } else if (order==2){
           m[name] = 0;
       } else if (order==3) {
           cout << m[name] << endl;
       } 
   }
   return 0;
}
