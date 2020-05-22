#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
double EPS=1E-3;
void gauss(double a[], int n, int m){
  int i,j,k,t;
  double p;
  for(i=0; i<n; i++){
    t=-1;
    while(++t<m && fabs(a[i*m+t])<EPS);
    if(t==m) continue;
    p=a[i*m+t];
    for(j=t; j<m; j++){
      a[i*m+j]/=p;
    }
    for(j=0; j<n; j++){
      if(i!=j){
        p=a[j*m+t];
        for(k=t; k<m; k++){
          a[j*m+k]-=a[i*m+k]*p;
        }
      }
    }
  }
}
int main(){
  int n;
  cin>>n;
  while(n!=0){
    double a[n*(n+1)];
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        cin>>a[i*(n+1)+j];
      }
    }
    for(int i=0; i<n; i++) cin>>a[i*(n+1)+n];
    gauss(a,n,n+1);
    /*for(int i=0; i<n; i++){
      for(int j=0; j<n+1; j++){
        cout<<a[i*(n+1)+j]<<" ";
      }
      cout<<"\n";
    }*/
    bool tokst=true;
    bool tilnull=false;
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(fabs(a[i*(n+1)+j])>EPS) break;
        if(j==n-1){
          if(fabs(a[i*(n+1)+j+1])>EPS){
            cout<<"inconsistent\n";
            tokst=false;
            break;
          }
          tilnull=true;
        }
        if(!tokst) break;
      }
      if(!tokst) break;
    }
    if(tokst && tilnull) cout<<"multiple\n";
    else if(tokst){
      for(int i=0; i<n; i++) cout<<setprecision(5)<<a[i*(n+1)+n]<<" ";
      cout<<"\n";
    }
    cin>>n;
  }
}
