#include<iostream>
#include<algorithm>
int main(){
  int N;
  long long int count=0;
  long long int b=0;
  std::cin>>N;
  char dna[N];
  char t = getchar();
  for(int i=0; i<N; i++) {
    dna[i]=getchar();
    if(dna[i]=='B')b++;
  }
  if(dna[N-1]=='B' && dna[N-2]=='A'){
    count++;
    dna[N-1]='A';
  }
  for(int i=1; i<N-1; i++){
    if(dna[i]=='A' && dna[i-1]!=dna[i] && dna[i+1]!=dna[i]){
      count++;
      dna[i]='B';
    }
    else if(dna[i]=='B' && dna[i-1]!=dna[i] && dna[i+1]!=dna[i]){
      count++;
      dna[i]='A';
    }
  }

  int hlutarinni=0;
  for(int i=0; i<N-1; i++){
    if(dna[i+1]=='B' && dna[i]=='A'){
      hlutarinni++;
    }
  }
  if(dna[0]=='A'){
    if(hlutarinni>=1) count=count+hlutarinni*2;
  }
  else{
    count++;
    if(hlutarinni>=1) count=count+hlutarinni*2;
  }
  std::cout<<std::min(count,b)<<"\n";
}
