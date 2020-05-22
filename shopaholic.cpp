#include<iostream>
#include<algorithm>
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  long int n;
  std::cin>>n;
  long int f[n];
  for(int i=0; i<n; i++){
    std::cin>>f[i];
  }
  std::sort(f,f+n);
  long int summa=0;
  for(int i=n-3; i>-1; i-=3){
    summa+=f[i];
  }
  std::cout<<summa<<"\n";
}
