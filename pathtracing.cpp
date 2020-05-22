#include<iostream>
int main(){
  int bord[1001][1001];
  bord[500][500]=5;
  std::string s=" ";
  //std::cin>>s;
  int mini=500,maxi=500,minj=500,maxj=500;
  int i=500,j=500;
  while(!s.empty()){
    std::getline(std::cin,s);
    if(s=="down") {
      i++;
      if(maxi<i) maxi=i;
    } else if(s=="right") {
      j++;
      if(maxj<j) maxj=j;
    } else if(s=="up"){
      i--;
      if(mini>i) mini=i;
    } else if(s=="left"){
      j--;
      if(minj>j) minj=j;
    }
    if(bord[i][j]!=5) bord[i][j]=1;
  }
  bord[i][j]=6;
  std::string ut[maxi-mini+3][maxj-minj+3];
  for(int j=0; j<maxj-minj+3; j++){
    ut[0][j]="#";
    ut[maxi-mini+2][j]="#";
  }
  for(int i=1; i<maxi-mini+3; i++){
    ut[i][0]="#";
    ut[i][maxj-minj+2]="#";
  }
  for(int i=mini; i<maxi+1; i++){
    for(int j=minj; j<maxj+1; j++){
      if(bord[i][j]==6)ut[i-mini+1][j-minj+1]="E";
      else if(bord[i][j]==5)ut[i-mini+1][j-minj+1]="S";
      else if(bord[i][j]==1)ut[i-mini+1][j-minj+1]="*";
      else if(bord[i][j]==0)ut[i-mini+1][j-minj+1]=" ";
    }
  }
  for(int i=0; i<maxi-mini+3; i++){
    for(int j=0; j<maxj-minj+3; j++){
      std::cout<<ut[i][j];
    }
    std::cout<<"\n";
  }
}
