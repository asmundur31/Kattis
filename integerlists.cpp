#include<iostream>
#include<deque>
#include<sstream>
using namespace std;

int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int T;
  cin>>T;
  string adgerd,listi;
  int fjoldi,fjoldiD=0;
  char t;
  int tala;
  bool Rkom=false;
  for(int i=0; i<T; i++){
    deque<int> rod;
    stringstream ssadgerd,sslisti;
    cin>>adgerd>>fjoldi>>listi;
    ssadgerd<<adgerd;
    sslisti<<listi;
    int count=0;
    while(t!=']' && fjoldi!=0){
      sslisti>>t;
      if(t==',' || t=='[') {
        sslisti>>tala;
        rod.push_back(tala);
      }
    }
    count=0;
    while(count<adgerd.length()){
      ssadgerd>>t;
      if(Rkom && t=='D' && !rod.empty()) {
        rod.pop_back();
        fjoldiD++;
      }
      else if(t=='D' && !rod.empty()) {
        rod.pop_front();
        fjoldiD++;
      }
      else if(t=='D')fjoldiD++;
      if(t=='R') Rkom=!Rkom;
      count++;
    }
    if(fjoldiD>fjoldi) printf("error\n");
    else if((fjoldi==0 && fjoldiD==0) || fjoldi==fjoldiD) printf("[]\n");
    else{
      printf("[");
      if(Rkom){
        for(int j=fjoldi-fjoldiD-1; j>0; j--){
          printf("%d,",rod[j]);
        }
        printf("%d]\n",rod[0]);
      }
      else{
        for(int j=0; j<fjoldi-fjoldiD-1; j++){
          printf("%d,",rod[j]);
        }
        printf("%d]\n",rod[fjoldi-fjoldiD-1]);
      }
    }
    //núllstilla
    fjoldiD=0;
    t='.';
    Rkom=false;
  }
}
