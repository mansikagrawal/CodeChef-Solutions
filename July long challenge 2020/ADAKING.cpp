#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	ll t;
	cin>> t;
	char mat[8][8];
	while(t--)
	{
	    ll k;
	    cin>> k;
	    ll dots = k-1;
	    for(int i=0;i<8;i++)
	    {
	        for(int j=0;j<8;j++)
	        {
	            if(dots>=0){
	            mat[i][j]='.';
	            
	                dots--;
	            }
	            else
	            {
	                mat[i][j]='X';
	            }
	        }
	    }
	    mat[0][0]='O';
	    
	    for(int i=0;i<8;i++)
	    {
	        for(int j=0;j<8;j++)
	        {
	            cout<< mat[i][j];
	        }
	        cout<<"\n";
	    }
	    cout<<"\n";
	}
	return 0;
}
