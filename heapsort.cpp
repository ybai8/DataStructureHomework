#include <iostream>
#include <random>
using namespace std;
void headadjust(int *a, int size,int i){

	int lchild=2*i+1;
	int rchild=lchild+1;
	if(rchild<size){
		if(a[lchild]>=a[rchild]&&a[lchild]>a[i])
			swap(a[lchild],a[i]);
		if(a[rchild]>a[lchild]&&a[rchild]>a[i])
			swap(a[rchild],a[i]);
		else
			return;
	}
	else{
		if(a[lchild]>a[i])
			swap(a[lchild],a[i]);
		else 
			return;
	}
	

}
void buildheap(int* x, int n){
	for(int i=n/2-1;i>=0;i--){
		headadjust(x,n,i);
	}
	
}
void heapsort(int* x,int n){
	buildheap(x,n);
for(int i=n-1;i>=1;i--){
		swap(x[0],x[i]);
		buildheap(x,i);
	}

}
	
default_random_engine gen;

// fill an array of n elements with value from 0 to m
void randomArray(int x[], int n, int m) {
	uniform_int_distribution<int> distribution(0, m);
	for (int i = 0; i < n; ++i) {
		x[i] = distribution(gen);
	}
}

void print(int x[], int n) {
	for (int i = 0; i < n; ++i)
		cout << x[i] << ' ';
	cout << '\n';
}

int main() {
	const int n = 20;
	int x[n];
	randomArray(x, n, n);
	print(x, n);
	heapsort(x,n);
	print(x, n);
}

