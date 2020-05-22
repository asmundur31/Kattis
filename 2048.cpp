#include<iostream>
using namespace std;
int main(){
  int bord[4][4];
  int utkoma[4][4];
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      cin>>bord[i][j];
      utkoma[i][j]=0;
    }
  }
  int stefna;
  cin>>stefna;
  int count=0;
  int j;
  if(stefna==0){ //vinstri
    for(int lina=0; lina<4; lina++){
      count=0;
      for(int i=0; i<4; ){
        if(bord[lina][i]==0){
          i++;
          continue;
        }
        else{
          j=i+1;
          while(bord[lina][j]==0 && j<4) j++;
          if(i==3){
            utkoma[lina][count]=bord[lina][i];
            count++;
            i++;
          }
          else if(bord[lina][i]==bord[lina][j]){
            utkoma[lina][count]=2*bord[lina][i];
            count++;
            i=j+1;
          }
          else{
            utkoma[lina][count]=bord[lina][i];
            count++;
            i=j;
          }
        }
      }
      for(int i=count; i<4; i++) utkoma[lina][i]=0;
    }
  }
  else if(stefna==2){ //hægri
    for(int lina=0; lina<4; lina++){
      count=3;
      for(int i=3; i>=0; ){
        if(bord[lina][i]==0){
          i--;
          continue;
        }
        else{
          j=i-1;
          while(bord[lina][j]==0 && j>=0) j--;
          if(i==0){
            utkoma[lina][count]=bord[lina][i];
            count--;
            i--;
          }
          else if(bord[lina][i]==bord[lina][j]){
            utkoma[lina][count]=2*bord[lina][i];
            count--;
            i=j-1;
          }
          else{
            utkoma[lina][count]=bord[lina][i];
            count--;
            i=j;
          }
        }
      }
      while(count>=0){
        utkoma[lina][count]=0;
        count--;
      }
    }
  }
  else if(stefna==3){ //niður
    for(int lina=0; lina<4; lina++){
      count=3;
      for(int i=3; i>=0; ){
        if(bord[i][lina]==0){
          i--;
          continue;
        }
        else{
          j=i-1;
          while(bord[j][lina]==0 && j>=0) j--;
          if(i==0){
            utkoma[count][lina]=bord[i][lina];
            count--;
            i--;
          }
          else if(bord[i][lina]==bord[j][lina]){
            utkoma[count][lina]=2*bord[i][lina];
            count--;
            i=j-1;
          }
          else{
            utkoma[count][lina]=bord[i][lina];
            count--;
            i=j;
          }
        }
      }
      while(count>=0){
        utkoma[count][lina]=0;
        count--;
      }
    }
  }
  else if(stefna==1){ //upp
    for(int lina=0; lina<4; lina++){
      count=0;
      for(int i=0; i<4; ){
        if(bord[i][lina]==0){
          i++;
          continue;
        }
        else{
          j=i+1;
          while(bord[j][lina]==0 && j<4) j++;
          if(i==3){
            utkoma[count][lina]=bord[i][lina];
            count++;
            i++;
          }
          else if(bord[i][lina]==bord[j][lina]){
            utkoma[count][lina]=2*bord[i][lina];
            count++;
            i=j+1;
          }
          else{
            utkoma[count][lina]=bord[i][lina];
            count++;
            i=j;
          }
        }
      }
      for(int i=count; i<4; i++) utkoma[i][lina]=0;
    }
  }
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++) cout<<utkoma[i][j]<<" ";
    cout<<"\n";
  }
}
