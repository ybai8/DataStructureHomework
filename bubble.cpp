#include<iostream>
using namespace std;
void bubble(int x[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(x[j]<x[i])
				swap(x[j],x[i]);
		}
	}
}
int main(){
	int n=10;
	int x[]={10,9,8,7,6,5,4,3,2,1};
	bubble(x,n);
	for(int i=0;i<n;i++){
		cout<<x[i]<<' ';
	}
}