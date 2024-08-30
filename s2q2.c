#include<stdio.h>
#include<stdlib.h>

struct job
{
int atime;
int btime;
int ft;
int tat;
int wt;
}p[10];

int arr[10],burst[10],n,rq[10],no_rq=0,time=0;

void main()
{
int i,j;
printf("\nenter the job number");
scanf("%d",&n);
printf("\n");

for(i=0;i<n;i++)
{
printf("\nenter the arrival time p%d:",i);
scanf("%d",&p[i].atime);
arr[i]=p[i].atime;
}
printf("\n");
for(i=0;i<n;i++)
{
printf("\nenter the burst timep%d:",i);
scanf("%d",&p[i].btime);
burst[i]=p[i].btime;
}
printf("\n");
for(i=0;i<n;i++)
{
printf("\n arrival time of p%d=%d:",i,p[i].atime);
}
for(i=0;i<n;i++)
{
printf("\n burst time of p%d=%d:",i,p[i].btime);
}
addrq();
printf("\nGnatt chart is:\n");
while(1)
{
j=selectionjob();
if(j==-1)
{
printf("cpu is ideal");
time++;
addrq();
}
else
{
while(burst[j]!=0)
{
printf("\tj%d",j);
burst[j]--;
time++;
addrq();
}
p[j].ft=time;
}
if(fsahll()==1)
break;
}
int Tat=0,Twt=0;
printf("\n");
printf("\njob\tft\t\tTAT\t\tWT");
for(i=0;i<n;i++)
{
p[i].tat=p[i].ft-p[i].atime;
p[i].wt=p[i].tat-p[i].btime;
printf("\n job%d\t%d\t\t%d\t\t%d",i,p[i].ft,p[i].tat,p[i].wt);
Tat+=p[i].tat;
Twt+=p[i].wt;
}
float avgtat=Tat/n;
float avgwt=Twt/n;
printf("\nAverage of turn around timeis:%2f",avgtat);
printf("\nAverage of wait time is:%2f",avgwt);
}

int addrq()
{
int i;
for(i=0;i<n;i++)
{
if(arr[i]==time)
{
rq[no_rq]=i;
no_rq++;
}
}
}

int selectionjob()
{
int i,j;
if(no_rq==0)
return 1;
j=rq[0];
for(i=1;i<no_rq;i++)
if(burst[j]>burst[rq[i]])
j=rq[i];
deleteq(j);
return j;
}
int deleteq(int j)
{
int i;
for(i=0;i<no_rq;i++)
if(rq[i]==j)
break;

for(i=i+1;i<no_rq;i++)
rq[i-1]=rq[i];
no_rq--;
}


int fsahll()
{
int i;
for(i=0;i<n;i++)
if(burst[i]!=0)
return-1;
return 1;
}

