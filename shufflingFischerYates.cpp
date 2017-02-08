#include<iostream>
#include<cstdlib>
using namespace std;
void shuffling(int x[], int n){
	int y[n];
	int temp;
	 for(int i=n-1;i>=0;i--){
	int r=rand()%(i+1);
	y[n-i-1]=x[r];
	temp=x[i];
	x[i]=x[r];
	x[r]=temp;
}
for(int j=0;j<n;j++){
	cout<<y[j]<<' ';
}
}
int main(){
	int n=10;
	int x[]={10,9,8,7,6,5,4,3,2,1};
	shuffling(x,n);
}
   

