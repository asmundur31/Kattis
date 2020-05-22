#include<iostream>
#include<vector>
using namespace std;

vector<int> x;

vector< vector< vector<int> > > upphafsstilla(int n, int d) {
  vector< vector< vector<int> > > l(n, vector< vector<int> >(n, vector<int>(d)));
  for(int i=0; i<n; i++) {
    for(int j=i; j<n; j++) {
      if(i==j) {
        l[i][j][0] = x[i];
      } 
      else {
        l[i][j][0]=l[i][j-1][0]+x[j];
      }
    }
  }
  for(int i=0; i<n; i++) {
    for(int j=i; j<n; j++) {
      if(l[i][j][0]%10<5) l[i][j][0] -= l[i][j][0]%10;
      else l[i][j][0] += (10-l[i][j][0]%10);
    }
  }
  return l;
}

int lagmarka(vector< vector< vector<int> > > l) {
  int n = l.size();
  int d = l[0][0].size();
  for(int k=1; k<d; k++) {
    for(int i=n-1; i>=0; i--) {
      for(int j=i; j<n; j++) {
        int min = l[i][j][k-1];
        for(int r=i; r<j; r++) {
          if(l[i][r][k-1]+l[r+1][j][k-1]<min) min = l[i][r][k-1]+l[r+1][j][k-1];
        }
        l[i][j][k] = min;
      }
    }
  }
  return l[0][n-1][d-1];
}

int main() {
  int n,d;
  cin>>n>>d;
  for(int i=0; i<n; i++) {
    int c;
    cin>>c;
    x.push_back(c);
  }
  vector< vector< vector<int> > > l = upphafsstilla(n,d);
  cout << lagmarka(l) << endl;
}