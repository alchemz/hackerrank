#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T, A, B;
int perfSq;
int cnt;
int n;
cin >> T; 

for(int i = 0; i<T; i++){
    cnt = 0;
    n = 1;
    perfSq = 0;
    cin >> A;
    cin >> B;

    while (perfSq <= B){


        if (perfSq >= A && perfSq <= B)
            cnt++;

        perfSq = n*n;
        n++;


    }
    cout << cnt << endl;
}
return 0;
}
