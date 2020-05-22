#include<iostream>
#include<math.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin>>N;
  int f[N];
  long long int hsumma=0;
  for(int i=0; i<N; i++){
    cin>>f[i];
    hsumma+=f[i];
  }
  hsumma=pow(2,N-1)*hsumma;
  for(int i=0; i<N; i++){
    if(f[i]<200) hsumma-=f[i];
  }
  for(int i=0; i<N; i++){
    for(int j=i+1; j<N; j++){
      if(f[i]+f[j]<200) hsumma-=(f[i]+f[j]);
    }
  }
  for(int i=0; i<N; i++){
    for(int j=i+1; j<N; j++){
      for(int k=j+1; k<N; k++){
        if(f[i]+f[j]+f[k]<200) hsumma-=(f[i]+f[j]+f[k]);
      }
    }
  }
  cout<<hsumma<<"\n";
}
