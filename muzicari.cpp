#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int T,N;
  cin>>T>>N;
  int hle[N];
  for(int i=0; i<N; i++){
    cin>>hle[i];
  }
  long summa[N+1][T+1];
  for(int i=0; i<=N; i++){
      for(int j=0; j<=T; j++){
        if(i==0 || j==0) summa[i][j]=0;
        else if(hle[i-1]<=j) summa[i][j]=max(hle[i-1]+summa[i-1][j-hle[i-1]],summa[i-1][j]);
        else summa[i][j]=summa[i-1][j];
      }
  }

  int k=N,l=T;
  vector< pair<int,long> > max;
  while(k>0 && l>0){
    if(summa[k][l]==summa[k-1][l]) k--;
    else{
      max.push_back(make_pair(k-1,hle[k-1]));
      l-=hle[k-1];
    }
  }
  sort(max.begin(), max.end());
  int u=0;
  int summa1=0;
  int summa2=0;
  for(int i=0; i<N; i++){
    if(max[u].second==hle[i]){
      cout<<summa1<<" ";
      u++;
      summa1+=hle[i];
    }
    else{
      cout<<summa2<<" ";
      summa2+=hle[i];
    }
  }
  cout<<"\n";
}
