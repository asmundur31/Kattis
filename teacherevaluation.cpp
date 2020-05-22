#include<iostream>
#include<vector>
using namespace std;

int main() {
  int N,P;
  cin>>N>>P;
  int x = 0;
  int sum = 0;
  for(int i=0; i<N; i++) {
    cin>>x;
    sum+=x;
  }
  sum = N*P-sum;
  long count = 0;
  if(P==100) {
    if(sum==0) {
      cout << 0 << endl;
    } else {
      cout << "impossible" << endl;
    }
    return 0;
  }
  while(P*count+sum>100*count) {
    count++;
  }
  cout<<count<<endl;
}