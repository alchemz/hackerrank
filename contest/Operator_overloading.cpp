/**
main function takes a set of inputs to create two matrices and prints the result of their addition
Write the class Matrix vector<vector<int>>
A member function to overload the operator+
Add two objetcs of Matrix type and return the resultant Matrix
**/

#include <cmath>
#include <scstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Matrix{
    public:
    vector<vector<int>> a;
    
    Matrix operator +(const Matrix &y){
       Martrix res;
       for(int m=0; m<y.a.size(); ++m){
           vector<int> z;
           for(int n=0; n<y.a[0].size(); ++n){
               int num=(this->a[m][n] +y.a[m][n]);
               a.push_back(num);
           }
           res.a.push_back(z);
       }
       return res;
    }
};

int main(){
    int cases, k;
    cin>>cases;
    for(k=0; k<cases; k++){
        Matrix x;
        Matrix y;
        Matrix result;
        int n,m,i,j;
        int n, m, i,j;
        cin>>n>>m;
        for(i=0; i<n; i++){
          vector<int> b;
          int num;
          for(j=0; j<m; j++){
             cin>>num;
             b.push_back
          }
        }
    }
}
