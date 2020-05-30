#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

long long gcd(long long a, long long b) {
  if(b==0) return a;
  else return gcd(b,a%b);
}

long long lcm(long long a, long long b) {
  long long g = gcd(a,b);
  long long svar = a/g;
  return abs(svar*b);
}

int main() {
  int n;
  cin>>n;
  for(int i=0; i<n; i++) {
    int w;
    cin>>w;
    vector<int> wheels(w);
    for(int j=0; j<w; j++) {
      cin>>wheels[j];
    }
    long long svar = 1;
    for(int j=0; j<w; j++) {
      svar = lcm(svar,wheels[j]);
    }
    if(svar>pow(10,9)) cout << "More than a billion." << endl;
    else cout << svar << endl;
  }
}