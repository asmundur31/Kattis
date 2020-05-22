#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int N;
  cin>>N;
  deque<int> h;
  int a;
  for(int i=0; i<N; i++){
    cin>>a;
    h.push_back(a);
  }
  sort(h.begin(), h.begin()+N);
  int count=0;
  int min=0;
  while(h.size()>0 && h.back()>min){
    if(h.back()-min<h.size()){
      min++;
    }
    else h.pop_back();
    count++;
    while(h[0]==min){
      h.pop_front();
    }
  }
  cout<<count<<"\n";
  return 0;
}
