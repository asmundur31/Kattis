#include<iostream>
#include<string>
using namespace std;
int p[10000];
int find(int x){
  if(p[x]==x){
    return x;
  }
  else{
    p[x]=find(p[x]);
    return p[x];
  }
}
void join(int x, int y){
  p[find(x)]=find(y);
}
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int n,m;
  string t;
  int numer=1;
  while(cin>>n>>m>>ws){
    int bord[n][m];
    for(int i=0; i<n*m; i++){
      p[i]=i;
    }
    for(int i=0; i<n; i++){
      getline(cin,t);
      for(int j=0; j<m; j++){
        if(t[j]=='#'){
          bord[i][j]=0;
        }
        else{
          bord[i][j]=1;
        }
      }
    }
    for(int i=0; i<n-1; i++){
      for(int j=0; j<m-1; j++){
        if(bord[i][j]==1 && bord[i][j+1]==1) join(m*i+j,m*i+j+1);
        if(bord[i][j]==1 && bord[i+1][j]==1) join(m*i+j,m*(i+1)+j);
      }
    }
    for(int i=0; i<n-1; i++){
      if(bord[i][m-1]==1 && bord[i+1][m-1]==1) join(m*i+m-1,m*(i+1)+m-1);
    }
    for(int j=0; j<m-1; j++){
      if(bord[n-1][j]==1 && bord[n-1][j+1]==1) join(m*(n-1)+j,m*(n-1)+j+1);
    }
    int count=0;
    int i=0;
    while(i<n*m){
      while(p[i]==p[i+1]){
        i++;
      }
      if(p[i-1]==p[i]) count++;
      i++;
    }
    int vantar=0;
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        if(p[m*i+j]==m*i+j && bord[i][j]==1) vantar++;
      }
    }
    vantar-=count;
    cout<<"Case "<<numer<<": "<<count+vantar<<"\n";
    numer++;
  }
}
