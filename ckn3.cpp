#include<iostream>
using namespace std;

int main(){
	int memo[200][200];
	int i,j;
	for(i=0;i<200;i++){
		for(j=0;j<200;j++){
			if(j==0||j==i)
				memo[i][j]=1;
			else if(j==1||j==i-1)
				memo[j][i]=i;
			else if(j<=i/2)
				memo[j][i]=memo[j-1][i]*(i-j+1)/j;
            else
            	memo[j][i]=memo[i-j][i];
		}
	}
	int a,b;
	for(int k=1;k<100;k++){
		cout<<"Please input 2 numbers:";
		cin>>a>>b;
		cout<<memo[a][b]<<'\n';
	}
}