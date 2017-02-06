#include<iostream>
#include<cmath>
using namespace std;
int isprime(double n){
  int prime = 1;
  if(n<=1){
   prime=0;
  }
  if(n>3&&int(n)%2==0){
    prime=0;
  }
  if(n>3&&int(n)%2!=0){
  for(int i=3;i<=sqrt(n);i+=2){
    if(isprime(i)==0){i+=2;}
    else{
    if(int(n)%i==0){
      prime=0;
      break;
    }}
  }
}
return prime;
}
int primesum(double sub, double sup){
  int sum=0;
  for(double i=sub; i<=sup; i++){
    if(isprime(i)){
      sum++;}
  }
  return sum;
}
int  main(){
  for(int n=0;n<10;n++){
  double a,b;
  cout<<"Please input 2 bounder numbers:"<<'\n';
  cin>>a>>b;
  cout<<primesum(a,b);
  
  }
  return 0;
}
    
