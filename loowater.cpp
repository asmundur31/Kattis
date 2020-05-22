#include<iostream>
#include<algorithm>
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int n,m;
  std::cin>>n>>m;
  while(n!=0 || m!=0){
    int haus[n], riddari[m];
    for(int i=0; i<n; i++){
      std::cin>>haus[i];
    }
    for(int i=0; i<m; i++){
      std::cin>>riddari[i];
    }
    std::sort(haus,haus+n);
    std::sort(riddari,riddari+m);
    int h=0;
    int r=0;
    int summa=0;
    while(h<n && r<m){
      if(haus[h]<=riddari[r]){
        h++;
        summa+=riddari[r];
      }
      r++;
    }
    if(h<n) std::cout<<"Loowater is doomed!\n";
    else std::cout<<summa<<"\n";
    std::cin>>n>>m;
  }
}
