#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define mp  make_pair
#define pb push_back

void solve()
{
    int x;
    int N,k,sum=0;
    cin>>N>>k;
    assert(N<=1000 && N>=1);
    assert(k<=N && k>=1);
    for(int i=1;i<=N;i++){
        cin>>x;
        assert(abs(x)<=100);
        if( x <=0 )     sum++;
    }
    if( sum < k ){
        printf("Class gets cancelled\n");
    }
    else{
        printf("Class does not gets cancelled\n");
    }
}

int main()
{
    int T;
    cin>>T;
    assert(T<=10 && T>=1);
    for(int i=1;i<=T;i++){
        solve();
    }
  
