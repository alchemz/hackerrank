#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void print(vector<int> ar){
   for (const int& elem : ar){
        cout << elem << " ";
 }
 cout<<endl;
}

void insertionSort(vector <int>  ar) {
int toSort = ar[ar.size() - 1];
for (int sort_i = ar.size() - 1; sort_i >= 0; sort_i--){
    if(ar[sort_i - 1] > toSort){
        ar[sort_i] = ar[sort_i - 1];
        print(ar);
    }
    else{
        ar[sort_i] = toSort;
        print(ar);
        break;
    }

}
}
int main(void) {
vector <int>  _ar;
int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
int _ar_tmp;
cin >> _ar_tmp;
_ar.push_back(_ar_tmp); 
}

insertionSort(_ar);

return 0;
}
