#include <iostream>
#include <random>
using namespace std;

void quickSort(int x[], int left, int right) {
	if(left-right>=0){
		return;
	}
	int i=left;
	int j=right;
	int pivot=(x[left]+x[right])/2;
	
	while(i<j){
		while(x[j]>pivot&&i<j)
			j--;
		while(x[i]<=pivot&&i<j)
			i++;
        if(i<j){
        	swap(x[i],x[j]);
       
	
	}
	i++;
	j--;
}
//if(i==j){
	//if(x[i]<=pivot){
		quickSort(x,left,i);
		quickSort(x,i+1,right);
	//}
	//else{
		//quickSort(x,left,i-1);
		//quickSort(x,i,right);
	//}

}
else{
	quickSort(x,left,j);
	quickSort(x,i,right);
}
	 //if(i==j&&i>0){
	//if(i==j){
		//(x,left,i+1);
	
		//quickSort(x, j+1, right);
	//}
	 //if(i>0&&i>j){
	
		//quickSort(x,left,j);
	   // quickSort(x,i,right);
	//}
	
	
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
	quickSort(x, 0, n-1);
	print(x, n);
}

