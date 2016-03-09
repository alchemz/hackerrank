#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    long long int sum;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    for(int j=0; j<n; j++){
        sum=sum+arr[j];
    }
    
    cin>>sum;
    cout<<sum;
    return 0;
}
