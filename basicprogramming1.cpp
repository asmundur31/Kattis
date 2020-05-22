#include<iostream>
#include<vector>
#include<string>
using namespace std;

char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main() {
  int N,t;
  cin>>N>>t;
  vector<long> A(N);
  for(int i=0; i<N; i++) {
    cin>>A[i];
  }
  if(t==1) {
    cout<<7<<endl;
  } else if(t==2) {
    if(A[0]>A[1]) {
      cout<<"Bigger"<<endl;
    } else if(A[0]==A[1]) {
      cout<<"Equal"<<endl;
    } else {
      cout<<"Smaller"<<endl;
    }
  } else if(t==3) {
    long long median = A[0]+A[1]+A[2]-max(A[0],max(A[1],A[2]))-min(A[0],min(A[1],A[2]));
    cout<<median<<endl;
  } else if(t==4) {
    long long sum = 0;
    for(int i=0; i<N; i++) {
      sum+=A[i];
    }
    cout<<sum<<endl;
  } else if(t==5) {
    long long sum = 0;
    for(int i=0; i<N; i++) {
      if(A[i]%2==0) sum+=A[i];
    }
    cout<<sum<<endl;
  } else if(t==6) {
    string svar="";
    for(int i=0; i<N; i++) {
      char c = alphabet[A[i]%26];
      svar += c;
    }
    cout<<svar<<endl;
  } else if(t==7) {
    vector<bool> kominn(N,false);
    bool cyc = false;
    int i=0;
    kominn[i]=true;
    while(true) {
      if(i>=N || i<0) {
        cout<<"Out"<<endl;
        break;
      } else if(i==N-1) {
        cout<<"Done"<<endl;
        break;
      } else {
        i=A[i];
        if(kominn[i]) {
          cout<<"Cyclic"<<endl;
          cyc = true;
        }
        kominn[i] = true;
      }
      if(cyc) break;
    }
  }
}