#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  int n, q, m;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; ++i)
    cin >> v[i];
  cin >> q;
  for(int i = 0; i < q; ++i) {
    cin >> m;
    if(binary_search(v.begin(), v.end(), m)) {
      cout << "Yes " << find(v.begin(), v.end(), m) - v.begin() + 1;
    } else {
      cout << "No " << lower_bound(v.begin(), v.end(), m) - v.begin() + 1;
    }
    cout << "\n";
  }
  return 0;
}

