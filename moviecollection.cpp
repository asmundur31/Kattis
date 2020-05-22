#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int a[2*100001];
int stada[100001];

#define LSB(i) ((i) & -(i))

void add(int i, int k, int max){
  while(i<2*max){
    a[i]=a[i]+k;
    i=i+LSB(i);
  }
}

int sum(int i){
  int sum=0;
  while(i>0){
    sum=sum+a[i];
    i=i-LSB(i);
  }
  return sum;
}

int main(){
  int T;
  int m,r;
  scanf("%d",&T);
  int mynd;
  int stad;
  int max=0;
  for(int i=0; i<T; i++){
    scanf("%d %d",&m,&r);
    if(m<r)max=r;
    else max=m;
    memset(a,0,2*100001*sizeof(int));
    for(int k=1; k<=m; k++){
      add(max+k,1,max);
      stada[k]=max+k-1;
    }
    for(int j=r; j>0; j--){
      scanf("%d",&mynd);
      stad=stada[mynd];
      printf("%d ",sum(stad));
      add(stad,-1,max);
      add(max-r+j,1,max);
      stada[mynd]=max-r+j-1;
      }
    printf("\n");
  }
}
