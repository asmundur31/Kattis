#include<iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n,m;
  cin>>n>>m;
  char bord[n][m];
  int count=0;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>bord[i][j];
      if(bord[i][j]!='W'){
        count++;
      }
    }
  }
  for(int i=0; i<n-2; i++){
    for(int j=0; j<m-2; j++){
      int teljari=0;
      if(bord[i][j]=='L' && bord[i][j+1]=='L' && bord[i][j+2]=='L'
      && bord[i+1][j]=='L' && bord[i+1][j+1]=='L' && bord[i+1][j+2]=='L'
      && bord[i+2][j]=='L' && bord[i+2][j+1]=='L' && bord[i+2][j+2]=='L'){
        continue;
      }
      if((bord[i][j]=='R' || bord[i][j]=='L') && (bord[i][j+1]=='R' || bord[i][j+1]=='L') && (bord[i][j+2]=='R' || bord[i][j+2]=='L')
      && (bord[i+1][j]=='R' || bord[i+1][j]=='L') && (bord[i+1][j+1]=='R' || bord[i+1][j+1]=='L') && (bord[i+1][j+2]=='R' || bord[i+1][j+2]=='L')
      && (bord[i+2][j]=='R' || bord[i+2][j]=='L') && (bord[i+2][j+1]=='R' || bord[i+2][j+1]=='L') && (bord[i+2][j+2]=='R' || bord[i+2][j+2]=='L')){
        for(int k=0; k<3; k++){
          for(int l=0; l<3; l++){
            if(bord[i+k][j+l]=='R'){
              teljari++;
              bord[i+k][j+l]='L';
            }
          }
        }
        i=0; j=-1;
        count-=teljari;
      }
      else if((bord[i][j]=='G' || bord[i][j]=='L') && (bord[i][j+1]=='G' || bord[i][j+1]=='L') && (bord[i][j+2]=='G' || bord[i][j+2]=='L')
      && (bord[i+1][j]=='G' || bord[i+1][j]=='L') && (bord[i+1][j+1]=='G' || bord[i+1][j+1]=='L') && (bord[i+1][j+2]=='G' || bord[i+1][j+2]=='L')
      && (bord[i+2][j]=='G' || bord[i+2][j]=='L') && (bord[i+2][j+1]=='G' || bord[i+2][j+1]=='L') && (bord[i+2][j+2]=='G' || bord[i+2][j+2]=='L')){
        for(int k=0; k<3; k++){
          for(int l=0; l<3; l++){
            if(bord[i+k][j+l]=='G'){
              teljari++;
              bord[i+k][j+l]='L';
            }
          }
        }
        i=0; j=-1;
        count-=teljari;
      }
      else if((bord[i][j]=='B' || bord[i][j]=='L') && (bord[i][j+1]=='B' || bord[i][j+1]=='L') && (bord[i][j+2]=='B' || bord[i][j+2]=='L')
      && (bord[i+1][j]=='B' || bord[i+1][j]=='L') && (bord[i+1][j+1]=='B' || bord[i+1][j+1]=='L') && (bord[i+1][j+2]=='B' || bord[i+1][j+2]=='L')
      && (bord[i+2][j]=='B' || bord[i+2][j]=='L') && (bord[i+2][j+1]=='B' || bord[i+2][j+1]=='L') && (bord[i+2][j+2]=='B' || bord[i+2][j+2]=='L')){
        for(int k=0; k<3; k++){
          for(int l=0; l<3; l++){
            if(bord[i+k][j+l]=='B'){
              teljari++;
              bord[i+k][j+l]='L';
            }
          }
        }
        i=0; j=-1;
        count-=teljari;
      }
      if(count == 0) break;
    }
  }
  if(count==0) cout<<"YES\n";
  else cout<<"NO\n";
}
