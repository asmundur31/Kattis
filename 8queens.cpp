#include<iostream>
using namespace std;
int main(){
  bool loglegt=true;
  bool heimsott[8][8];
  char bord[8][8];
  int count=0;
  for(int i=0; i<8; i++){
    for(int j=0; j<8; j++){
      cin>>bord[i][j];
      if(bord[i][j]=='*') count++;
      heimsott[i][j]=false;
    }
  }
  for(int i=0; i<8; i++){
    for(int j=0; j<8; j++){
      if(bord[i][j]=='*' && !heimsott[i][j]){
        //lína
        for(int k=0; k<8; k++){
          heimsott[i][k]=true;
        }
        //dálkur
        for(int k=0; k<8; k++){
          heimsott[k][j]=true;
        }
        //skálína upp til hægri
        int n=1;
        while(i-n>=0 && j+n<8){
          heimsott[i-n][j+n]=true;
          n++;
        }
        //skálína upp til vinstri
        n=1;
        while(i-n>=0 && j-n>=0){
          heimsott[i-n][j-n]=true;
          n++;
        }
        //skálína niður til hægri
        n=1;
        while(i+n<8 && j+n<8){
          heimsott[i+n][j+n]=true;
          n++;
        }
        //skálína niður til vinstri
        n=1;
        while(i+n<8 && j-n>=0){
          heimsott[i+n][j-n]=true;
          n++;
        }
        /*for(int p=0; p<8; p++){
          for(int l=0; l<8; l++){
            cout<<heimsott[p][l]<<" ";
          }
          cout<<"\n";
        }
        cout<<"\n";*/
      }
      else if(bord[i][j]=='*' && heimsott[i][j]){
        loglegt=false;
        break;
      }
    }
    if(!loglegt) break;
  }
  if(loglegt && count==8) cout<<"valid\n";
  else cout<<"invalid\n";
}
