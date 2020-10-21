#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	 int arivaltime[10];
 int bursttime[10];
 int array[10];
 int waitingtime[10];
 int turnaroundtime[10];
 int completiontime[10];
 int i;
 int j;
 int small;
 int counter=0;
 int timer;
 int n;
 double avg=0,last;
 cout<<"Enter the number of Processes= \t";
 cin>>n;
 for(i=0;i<n;i++)
 {
   cout<<"Enter arrival time of process = ",i+1;
   cin>>arivaltime[i];
 }
 for(i=0;i<n;i++)
 {
   cout<<"Enter burst time of process  = ",i+1;
   cin>>bursttime[i];
 }
 for(i=0;i<n;i++)
 array[i]=bursttime[i];

  bursttime[9]=9999;
 for(timer=0;counter!=n;timer++)
 {
   small=9;
  for(i=0;i<n;i++)
  {
   if(arivaltime[i]<=timer && bursttime[i]<bursttime[small] && bursttime[i]>0 )
   small=i;
  }
  bursttime[small]--;
  if(bursttime[small]==0)
  {
   counter++;
   last=timer+1;
    completiontime[small] = last;
   waitingtime[small] = last - arivaltime[small] - array[small];
     turnaroundtime[small] = last - arivaltime[small];
  }
 }
 cout<<"\n";
 for(i=0;i<n;i++)
 {
 	cout<<"\n";
 	cout<<"Process id= \t";
	 cout<<i+1;
 	cout<<"\n";
 	cout<<"Burst Time= \t";
	 cout<<array[i];
 	cout<<"\n";
 	cout<<"Arrival Time= \t";
	 cout<<arivaltime[i];
 	cout<<"\n";
 	cout<<"Waiting Time= \t";
	 cout<<waitingtime[i];
 	cout<<"\n";	
 	cout<<"Turnaround Time= \t";
 	cout<<turnaroundtime[i];
 	cout<<"\n";
 	cout<<"Completeion Time= \t";
 	cout<<completiontime[i];
 	cout<<"\n";
   avg = avg + waitingtime[i];
 }
 cout<<"\n";
 cout<<"Avg waiting time = ";
 cout<<avg/n;

return 0;
}
