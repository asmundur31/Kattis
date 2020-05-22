#include<iostream>
#include<stdlib.h>
int main(){
  int summa=0;
  char rettstafur [4][4]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','.'};
  char stafur [4][4];
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      std::cin>>stafur[i][j];
    }
  }
  for(int k=0; k<4; k++){
    for(int l=0; l<4; l++){
      for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
          if(stafur[k][l]==rettstafur[i][j] && stafur[k][l]!='.')
            summa+=abs(i-k)+abs(j-l);
        }
      }
    }
  }
  std::cout<<summa<<"\n";
  return 0;
}
