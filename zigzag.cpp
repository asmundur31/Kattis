#include<iostream>
void fastscan(int &x)
    {
        register int c;
        x =0;
        c=getchar();
        while(c<58 && c>47){
          x = x*10 +c -48;
          c=getchar();
        }
    }
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int n;
  fastscan(n);
  int t;
  int s;
  fastscan(t);
  int count=1;
  int vaxandi=0;
  int minkandi=0;
  for(int i=0; i<n-1; i++){
    fastscan(s);
    if(t-s<0 && vaxandi!=1){
      count++;
      vaxandi=1;
      minkandi=0;
    }
    else if(t-s>0 && minkandi!=1){
      count++;
      minkandi=1;
      vaxandi=0;
    }
    t=s;
  }
  std::cout<<count<<"\n";
}
