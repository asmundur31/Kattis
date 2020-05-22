#include<iostream>
#include<algorithm>
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int T;
  std::cin>>T;
  for(int i=0; i<T; i++){
    int n;
    std::cin>>n;
    long long int v1[n],v2[n];
    for(int j=0; j<n; j++) std::cin>>v1[j];
    for(int j=0; j<n; j++) std::cin>>v2[j];
    std::sort(v1,v1+n);
    std::sort(v2,v2+n);
    long long int summa=0;
    int k=n-1;
    for(int j=0; j<n; j++){
      summa+=v1[j]*v2[k];
      k--;
    }
    printf("Case #%d: %lld\n",i+1,summa);
  }
}
