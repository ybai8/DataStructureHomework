#include<iostream>
using namespace std;
double ckn(int k, int n){
  double c;
  double ns=1;
  double nks=1;
  if(k==0)
  	c=1;
  else if(k>=n-k){
  	for(int i=k+1;i<=n;i++){
    ns*=i;
    nks*=i-k;
  	}
  	c=ns/nks;
  }
  else if(k<n-k){
  	c=ckn(n-k,n);
  }
 return c;
}
int main(){
	int a,b;
	for(int i=1;i<100;i++){
	cout<<"Please input k and n:";
    cin>>a>>b;
    cout<<ckn(a,b)<<'\n';
}
}