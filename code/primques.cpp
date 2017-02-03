#include<iostream>
#include<cmath>

using namespace std;

double N;

int main(){
	//cout<<"Enter a positive rational number"<<endl;
	cin>>N;
	if(N<=0){
		cout<<"Invalid Input\n";
		return 0;
	}
	double a = sqrt(N)/2;
	cout<<a<<endl;
}
