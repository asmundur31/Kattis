#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int s,c;
  long long k;
  cin>>s>>c>>k;
  vector<long long> sokkar (s);
  for(int i=0; i<s; i++) cin>>sokkar[i];
  sort(sokkar.begin(), sokkar.end());
  int i = 0;
  int count = 0;
  int fyrst = sokkar[0];
  int fyrstIndex = 0;
  while(i<s){
    while(sokkar[i]-fyrst<=k && i-fyrstIndex<c){
      i++;
    }
    fyrst = sokkar[i];
    fyrstIndex = i;
    count++;
  }
  cout << count << "\n";
}
