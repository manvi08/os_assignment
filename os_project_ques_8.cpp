#include<bits/stdc++.h>
using namespace std;
int main()
 {
   int u,nop,pr[10],prpr[10],brst[10],wt[10],tt[10],avgwt,avgtat,i,arrt[10],tqntm;
   //nop is number of process
   //pr is process
   //prpr is process priority
   //brst is process burst time
   //wt is wait time
   // tt is turnaround time
   //avgwt is average waiting time
   //avgtat is average turnaround time
   //arrt is arrival time
   //tqntm is time qunatum
   cout<<"Enter the number of process : "<<endl;
   cin>>nop;
   cout<<"Enter time quantum"<<endl;
   cin>>tqntm;
   cout<<"Enter burst time : time priorities : Arrival time"<<endl;
   for(i=0;i<nop;i++)
    {
      cout<<"Process: "<<i+1<<endl;
      cin>>brst[i]>>prpr[i]>>arrt[i];
	  pr[i]=i+1;
    }
//performing sorting on the basis of priority of the process
    int j;
  for(i=0;i<nop-1;i++)
   {
     for(j=i+1;j<nop;j++)
     {
       if(prpr[i]<prpr[j])
       {
     u=prpr[i];
     prpr[i]=prpr[j];
     prpr[j]=u;
     u=brst[i];
     brst[i]=brst[j];
     brst[j]=u;
     u=pr[i];
     pr[i]=pr[j];
     pr[j]=u;
      }
   }
}
wt[0]=0;
avgwt=0;
tt[0]=brst[0];
avgtat=tt[0];
for(i=1;i<nop;i++)
 {
 	if(tqntm<nop||tqntm>nop) {
   wt[i]=tt[i-1];
   avgwt+=wt[i];
   tt[i]=wt[i]+brst[i];
   avgtat+=tt[i];
	 }
 }
 //to print the gantt chart i.e.,show the order the process are being executed
 cout<<"Gantt chart"<<endl;
 for(i=0;i<nop;i++)
 {
 	cout<<"P "<<pr[i]<<endl;
 }
//Displaying the process and their attributes
cout<<endl<<endl<<"Process"<<ends<<"Burst Time"<<ends<<"Wait Time"<<ends<<"Turn Around Time"<<ends<<"Priority"<<ends<<"Arrival time"<<endl;
for(i=0;i<nop;i++)
{
 cout<<endl<<pr[i]<<ends<<brst[i]<<ends<<wt[i]<<ends<<tt[i]<<ends<<prpr[i]<<ends<<arrt[i]<<endl;
}
avgwt/=nop;
avgtat/=nop;
cout<<"Average Wait Time: "<<avgwt<<endl;
cout<<"Average Turn Around Time : "<<avgtat<<endl;
}
