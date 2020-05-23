#include<iostream>
using namespace std;
int main(){
  srand(time(NULL));
  for(int i=0; i<30; i++){
    for(int j=0; j<51; j++){
      cout<<(rand()%2)*2-1<<" ";
    }
    cout<<"\n";
  }
}
