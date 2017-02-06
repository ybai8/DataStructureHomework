#include<iostream>
using namespace std;
double ckn(int k, int n){
  if(k==0||k==n)
    return 1;
  if(k==1||k==n-1)
    return n;
  if(k<n/2)
    return ckn(k-1,n)*(n-k+1)/k;
  else
    return ckn(n-k,n);
}
int main(){
	int a,b;
	for(int i=1;i<100;i++){
	cout<<"Please input k and n:";
    cin>>a>>b;
    cout<<ckn(a,b)<<'\n';
}
}