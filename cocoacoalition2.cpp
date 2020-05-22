#include<iostream>
#include <algorithm>
using namespace std;
int main(){
  long long n, m;
  long long a,b;
  cin >> n >> m >> a;
  b=n*m-a;
  int svar=3;
  if(a%n == 0 || a%m == 0){
    svar=1;
  }
  else{
    for(long long x=1; x<m; x++){
      if(a%x == 0){
        if(a/x < n) svar = 2;
      }
      if(b%x == 0){
        if(b/x < n) svar = 2;
      }
    }
  }
  cout << svar << endl;
}
