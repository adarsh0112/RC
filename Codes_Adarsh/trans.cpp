#include <bits/stdc++.h>
using namespace std;
string trans(string s)
{
	int len=s.size(), i=0, j=0;
	int mat=(int)ceil(sqrt(len));
	vector< vector<char> > a(mat, vector<char>(mat, '_'));
	string::iterator it=s.begin();
	for(i=0; i<mat; i++)
		for(j=0; j<mat; j++)
		{	
			if(it!=s.end())
			{
				if(*it != ' ')
					a[j][i]=*it;
				it++;
			}
			else
				goto end;
		}
	end: string s2="";
		for(i=0; i<mat; i++)
			for(j=0; j<mat; j++)
				s2.push_back(a[i][j]);
		return s2;
}

int main()
{
	string s;
	getline(cin,s);
	cout<<trans(s);
	return 0;
}