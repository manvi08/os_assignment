#include<bits/stdc++.h>
using namespace std;
void roundrobin(string p[],int a[],int b[],int tqn,int n)
{
	int res=0;
	int resc=0;
	string seq;
	int rb[n],ra[n];
	for(int i=0;i<n;i++)
	{
		rb[i]=b[i];
		ra[i]=a[i];
	}
	int t=0;
	int w[n];
	int comp[n];
	while(true)
	{
		bool flag=true;
		for(int i=0;i<n;i++)
		{
			if(ra[i]<=t)
			{
				if(ra[i]<=tqn)
				{
					if(rb[i]>0)
					{
						flag=true;
						if(rb[i]>tqn)
						{
							t=t+tqn;
							rb[i]=rb[i]-tqn;
							ra[i]=ra[i]+tqn;
							seq+="->"+p[i];
						}else{
							t=t+rb[i];
							comp[i]=t-a[i];
							w[i]=t-b[i]-a[i];
						    seq+="->"+p[i];	
						}
					}
