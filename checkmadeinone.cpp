#include<iostream>
int main(){
  std::string bord[10][10];
  std::string s;
  for(int i=1; i<9; i++){
    getline(std::cin, s);
    for(int j=1; j<9; j++){
      bord[i][j]=s.substr(j-1,1);
    }
  }
  for(int j=0; j<10; j++){
    bord[0][j]="#";
    bord[9][j]="#";
  }
  for(int i=1; i<9; i++){
    bord[i][0]="#";
    bord[i][9]="#";
  }
  int ja=0;
  for(int i=1; i<9; i++){
    if(bord[1][i]=="k" && bord[3][i]=="K"){
      for(int j=1; j<8;j++){
        if(bord[j+1][i-1]!="R" && bord[j+1][i]!="R" && bord[j+1][i+1]!="R"){
          ja=1;
        }
        else{
          ja=0;
          break;
        }
      }
    }
    else if(bord[8][i]=="k" && bord[6][i]=="K"){
      for(int j=1; j<8;j++){
        if(bord[j][i-1]!="R" && bord[j][i]!="R" && bord[j][i+1]!="R"){
          ja=1;
        }
        else{
          ja=0;
          break;
        }
      }
    }
    else if(bord[i][1]=="k" && bord[i][3]=="K"){
      for(int j=1; j<8;j++){
        if(bord[i-1][j+1]!="R" && bord[i][j+1]!="R" && bord[i+1][j+1]!="R"){
          ja=1;
        }
        else{
          ja=0;
          break;
        }
      }
    }
    else if(bord[i][8]=="k" && bord[i][6]=="K"){
      for(int j=1; j<8;j++){
        if(bord[i-1][j]!="R" && bord[i][j]!="R" && bord[i+1][j]!="R"){
          ja=1;
        }
        else{
          ja=0;
          break;
        }
      }
    }
  }
  if(bord[1][1]=="k" && bord[2][3]=="K" && bord[2][2]!="R"){
    for(int j=4; j<9; j++){
      if(bord[2][j]!="R"){
        ja=1;
      }
      else {
        ja=0;
        break;
      }
    }
  }
  else if(bord[1][1]=="k" && bord[3][2]=="K" && bord[2][2]!="R"){
    for(int j=4; j<9; j++){
      if(bord[j][2]!="R"){
        ja=1;
      }
      else {
        ja=0;
        break;
      }
    }
  }
  else if(bord[1][8]=="k" && bord[2][6]=="K" && bord[2][7]!="R"){
    for(int j=1; j<6; j++){
      if(bord[2][j]!="R"){
        ja=1;
      }
      else {
        ja=0;
        break;
      }
    }
  }
  else if(bord[1][8]=="k" && bord[3][7]=="K" && bord[2][7]!="R"){
    for(int j=4; j<9; j++){
      if(bord[j][7]!="R"){
        ja=1;
      }
      else {
        ja=0;
        break;
      }
    }
  }
  else if(bord[8][1]=="k" && bord[6][2]=="K" && bord[7][2]!="R"){
    for(int j=1; j<6; j++){
      if(bord[j][2]!="R"){
        ja=1;
      }
      else {
        ja=0;
        break;
      }
    }
  }
  else if(bord[8][1]=="k" && bord[7][3]=="K" && bord[7][2]!="R"){
    for(int j=4; j<9; j++){
      if(bord[7][j]!="R"){
        ja=1;
      }
      else {
        ja=0;
        break;
      }
    }
  }
  else if(bord[8][8]=="k" && bord[7][6]=="K" && bord[7][7]!="R"){
    for(int j=1; j<6; j++){
      if(bord[7][j]!="R"){
        ja=1;
      }
      else {
        ja=0;
        break;
      }
    }
  }
  else if(bord[8][8]=="k" && bord[6][7]=="K" && bord[7][7]!="R"){
    for(int j=1; j<6; j++){
      if(bord[j][7]!="R"){
        ja=1;
      }
      else {
        ja=0;
        break;
      }
    }
  }

  if(ja==0) std::cout<<"No\n";
  else std::cout<<"Yes\n";
}
