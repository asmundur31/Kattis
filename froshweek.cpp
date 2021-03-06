#include <iostream>
#include <vector>
#include <limits>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<int> vi;
typedef long long ll;

ll merge(vi& v, vi& l, vi& r) {
  ll i = 0, j = 0, cnt = 0;
  while(i < l.size() || j < r.size()) {
    if(i == l.size()) v[i + j] = r[j], ++j;
    else if(j == r.size()) v[i + j] = l[i], ++i;
    else if(l[i] <= r[j]) v[i + j] = l[i], ++i;
    else v[i + j] = r[j], cnt += l.size() - i, ++j;
  }
  return cnt;
}
ll invnum(vi &v) {
  if(v.size() < 2) return 0;
  int m = v.size() / 2;
  vi l(m), r(v.size() - m);
  copy(v.begin(), v.begin() + m, l.begin());
  copy(v.begin() + m, v.end(), r.begin());
  return invnum(l) + invnum(r) + merge(v, l, r);
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  vi k;
  int t;
  for(int i=0; i<n; i++){
    cin>>t;
    k.push_back(t);
  }
  cout<<invnum(k)<<"\n";
}
