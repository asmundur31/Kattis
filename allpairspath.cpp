#include<iostream>
#include<vector>
#include<queue>
#include<climits>
#include<algorithm>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
vvi floydwarshall(vvii& g) {
  int n = g.size();
  // sækjum aldrei k-gildi nema einum til baka svo við
  // látum tvívítt duga og yfirskrifum bara jafnóðum
  vvi dp(n, vi(n, INT_MAX));
  for(int i = 0; i < n; ++i) {
    dp[i][i] = 0;
  }
  for(int i = 0; i < n; ++i) {
    for(ii x : g[i]) {
      if(dp[i][x.second] > x.first) dp[i][x.second] = x.first;
    }
  }
  for(int k = 0; k < n; ++k) {
    for(int i = 0; i < n; ++i) {
      for(int j = 0; j < n; ++j) {
        if(dp[i][j]>dp[i][k]+dp[k][j] && dp[i][k]<INT_MAX && dp[k][j]<INT_MAX) dp[i][j] = dp[i][k]+dp[k][j];
      }
    }
  }
  for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
		  for(int k=0; dp[i][j]!=-INT_MAX && k<n; k++)
				if(dp[k][k]<0 && dp[i][k]!=INT_MAX && dp[k][j]!=INT_MAX) dp[i][j] = -INT_MAX;
  return dp;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, q, a, b, w;
  int start,end;
  bool negative;
  cin >> n >> m >> q;
  while(n+m+q!=0){
    vvii g(n, vii());
    for(int i = 0; i < m; i++) {
      cin >> a >> b >> w;
      g[a].push_back(ii(w, b));
    }
    auto len = floydwarshall(g);
    for(int i=0; i<q; i++){
      cin >> start >> end;
      if(len[start][end]==-INT_MAX) cout << "-Infinity\n";
      else if(len[start][end]==INT_MAX) cout << "Impossible\n";
      else cout << len[start][end] << "\n";
    }
    cout<<"\n";
    cin >> n >> m >> q;
  }
}
