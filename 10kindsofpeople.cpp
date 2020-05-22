#include<iostream>
#include<string>
using namespace std;
int p[1000000];
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
  cin>>n>>m;
  string s;
  int bord[n][m];
  for(int i=0; i<n*m; i++){
    p[i]=i;
  }
  for(int i=0; i<n; i++){
    cin>>s;
    for(int j=0; j<m; j++){
      bord[i][j]=s[j]-'0';
    }
  }
  for(int i=0; i<n-1; i++){
    for(int j=0; j<m-1; j++){
      if(bord[i][j]==1 && bord[i][j+1]==1) join(m*i+j+1,m*i+j);
      if(bord[i][j]==1 && bord[i+1][j]==1) join(m*(i+1)+j,m*i+j);
      if(bord[i][j]==0 && bord[i][j+1]==0) join(m*i+j+1,m*i+j);
      if(bord[i][j]==0 && bord[i+1][j]==0) join(m*(i+1)+j,m*i+j);
    }
  }
  for(int i=0; i<n-1; i++){
    if(bord[i][m-1]==1 && bord[i+1][m-1]==1) join(m*(i+1)+m-1,m*i+m-1);
    if(bord[i][m-1]==0 && bord[i+1][m-1]==0) join(m*(i+1)+m-1,m*i+m-1);
  }
  for(int j=0; j<m-1; j++){
    if(bord[n-1][j]==1 && bord[n-1][j+1]==1) join(m*(n-1)+j+1,m*(n-1)+j);
    if(bord[n-1][j]==0 && bord[n-1][j+1]==0) join(m*(n-1)+j+1,m*(n-1)+j);
  }
  int T;
  cin>>T;
  int a,b,c,d;
  for(int i=0; i<T; i++){
    cin>>a>>b>>c>>d;
    if(find(m*(a-1)+b-1)!=find(m*(c-1)+d-1)) cout<<"neither\n";
    else if(bord[a-1][b-1]==1 && bord[c-1][d-1]==1) cout<<"decimal\n";
    else if(bord[a-1][b-1]==0 && bord[c-1][d-1]==0) cout<<"binary\n";
  }
}
