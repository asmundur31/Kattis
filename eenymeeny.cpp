#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
  string regla;
  getline(cin,regla);
  int fjoldiorda=1;
  for(int i=0; i<regla.length(); i++){
    if(regla[i]==' ') fjoldiorda++;
  }
  int n;
  cin>>n;

  vector<string> allir(n);
  vector<string> lid1;
  vector<string> lid2;
  for(int i=0; i<n; i++){
    cin>>allir[i];
  }

  int k=0;
  int count=0;
  int index=0;
  while(count<n){
    index=(k+fjoldiorda-1)%allir.size();
    if(count%2==0){
      lid1.push_back(allir[index]);
    }
    else{
      lid2.push_back(allir[index]);
    }
    count++;
    allir.erase(allir.begin()+index);
    if(!allir.empty()) k=index;
  }
  cout<<lid1.size()<<"\n";
  for(int i=0; i<lid1.size(); i++) cout<<lid1[i]<<"\n";
  cout<<lid2.size()<<"\n";
  for(int i=0; i<lid2.size(); i++) cout<<lid2[i]<<"\n";
}
