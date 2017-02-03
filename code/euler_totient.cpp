#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

long long N;
vector<long long> pf;

bool prime(long long N){
	bool flag  = true;
	for(long long i=2;i<N;i++){
		if(N%i==0)
			flag = false;
	}
	return flag;
}

vector<long long> primefactorize(long long N){
	vector<long long> result;
	for(long long i=2;i<=N;i++){
		if(N%i==0 && prime(i)){
			result.push_back(i);
		}
	}
	return result;
}

long long euler_totient(long long N,vector<long long> pf){
	long long result = N;
	for(int i=0;i<pf.size();i++){
		result*= (pf[i] - 1);
		result/=pf[i];
	}
	return result;
}

int main(){
	//cout<<"Enter a positive integer\n";
	cin>>N;
	pf = primefactorize(N);
	/*for(long long i=0;i<pf.size();i++){
		cout<<pf[i]<<" ";
	}
	cout<<endl;*/
	cout<<euler_totient(N,pf)<<endl;
}
