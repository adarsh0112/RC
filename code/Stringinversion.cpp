#include<iostream>
#include<string>

using namespace std;

//  Program finds the no of inversions in the given character array

string S;

long long int flag=0;
int comparevar=0;
int compare(int a, int b)
{
	comparevar++;
	return a>b?1:0;
}

void merge(int s1,char b[],int s2,char c[],char a[]);

void mergesort(int n, char a[])
{	
	int i;
	if(n==1)
	return;
	else
	{
		char b[n/2],c[(n+1)/2];
		for(i=0;i<n/2;i++)
        		b[i]=a[i];
		for(i=n/2;i<n;i++)
			c[i-n/2]=a[i];
		mergesort(n/2,b);
		mergesort((n+1)/2,c);
		merge(n/2,b,(n+1)/2,c,a);		
	}
}

void merge(int s1,char b[],int s2,char c[],char a[])
{
	int i=0,j=0,k=0;
	while(j<s1 && k<s2)
	{
		if(compare(b[j],c[k]))
		{
            a[i++]=c[k++];
            flag+=s1-j;
        }
        else
		a[i++]=b[j++];
	}
	if(j==s1)
	{
		while(k<s2)
		{
			a[i++]=c[k++];  
		} 
		if(k==s2)
		return;
	}
	else if(k==s2)
	{
		while(j<s1)
		{
			a[i++]=b[j++];
		}
		if(j==s1)
		return;
	}

}

int main(){
	char a[50];
	//cout<<"Enter string of size less than 50"<<endl;
	getline(cin,S);
	//cout<<S<<endl;
	for(int i=0;i<S.length();i++){
		a[i] = S[i];
	}
	//cout<<S.length()<<endl;
	mergesort(S.length(),a);
    	cout<<flag<<endl;
    	return 0;
}
