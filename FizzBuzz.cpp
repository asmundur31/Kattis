#include<iostream>
int main(){
  int x,y,N;
	std::cin>>x>>y>>N;
	for(int i=1; i<=N; i++)
	{
		if(i%x==0 && i%y==0)
			std::cout<<"FizzBuzz\n";
		else if(i%x==0)
			std::cout<<"Fizz\n";
		else if(i%y==0)
			std::cout<<"Buzz\n";
		else
			std::cout<<i<<"\n";
		}
}
