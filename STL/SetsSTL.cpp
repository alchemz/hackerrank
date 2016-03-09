#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int y, x, size; 
    set<int> a;
   cin >> size;

for(int i = 0; i < size; i++){
    cin >> y >> x;

    if(y==1) {
        a.insert(x);
    }

    auto it = a.find(x);

    if(it == a.end()){
        if(y==3)
            cout << "No" << endl;
    } else {
        if(y==2){
            a.erase(it);
        } else if(y==3){
            cout << "Yes" << endl;
        }
    }
}
return 0;
}
