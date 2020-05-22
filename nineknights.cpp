#include<iostream>
int main(){
  std::string bord[5][5];
  std::string lina;
  int stad [9][9];
  for(int i=0; i<9; i++){
    for(int j=0; j<9; j++){
      stad[i][j]=0;
    }
  }
  int fjoldi=0;
  int valid=1;
  for(int i=0; i<5; i++){
    std::cin>>lina;
    for(int j=0; j<5; j++){
      bord[i][j]=lina.substr(j,1);
      if(bord[i][j]=="k"){
        fjoldi++;
        stad[i+2][j+2]=1;
      }
    }
  }
  if(fjoldi!=9) {
    std::cout<<"invalid\n";
    valid=0;
  }
  else{
    for(int i=2; i<7; i++){
      for(int j=2; j<7; j++){
        if(stad[i][j]==1 && (stad[i][j]==stad[i-2][j-1] || stad[i][j]==stad[i-2][j+1] || stad[i][j]==stad[i-1][j-2] || stad[i][j]==stad[i-1][j+2] || stad[i][j]==stad[i+1][j-2] || stad[i][j]==stad[i+1][j+2] || stad[i][j]==stad[i+2][j-1] || stad[i][j]==stad[i+2][j+1])){
          valid=0;
          break;
        }
      }
      if(valid==0)
        break;
    }
    if(valid==1)
      std::cout<<"valid\n";
    else
      std::cout<<"invalid\n";
  }
}
