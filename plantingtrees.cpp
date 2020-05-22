#include<iostream>
#include<algorithm>
int main(){
  int N;
  std::cin>>N;
  int tree[N];
  for(int i=0; i<N; i++){
    std::cin>>tree[i];
  }
  std::sort(tree,tree+N);
  int k=1;
  int dagar[N];
  for(int i=N-1; i>=0; i--){
    dagar[i]=k+tree[i];
    k++;
  }
  int max=dagar[0];
  for(int i=0; i<N; i++){
    if(dagar[i]>max) max=dagar[i];
  }
  std::cout<<max+1<<"\n";
}
