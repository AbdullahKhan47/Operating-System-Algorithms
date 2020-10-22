#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

	int i;
    int	n;
    int timer;
 	int left;
 	int temp=0;
 	int time_slice;
	int waitingtime=0;
	int tat=0;
	
	cout<<"Enter the total number of process="<<endl;
	cin>>n;

	left=n;


   int arivaltime[n];
   int bursttime[n];
   int rt[n];

	cout<<"Enter the Arrival time and Burst time for all the processes"<<endl;
	int m=1;
	
	for(i=0;i<n;i++)
	{
		cout<<"For the Process"<<m;
		cout<<"\n";
		cin>>arivaltime[i];
		cin>>bursttime[i];
		rt[i]=bursttime[i];
		m++;
	}

	cout<<"Enter the time SLICE:"<<endl;
	cin>>time_slice;

	cout<<"\n\nProcess\t:Turnaround Time:Waiting Time\n\n";
	
	for(timer=0,i=0;left!=0;)
	{
		if(rt[i]<=time_slice && rt[i]>0)
		{
			timer += rt[i];
			//Addition using shorthand operators
			rt[i]=0;
			temp=1;
		}

		else if(rt[i]>0)
		{
			rt[i] -= time_slice;
			//Subtraction using shorthand operators
			timer += time_slice;
			//Addition using shorthand operators
		}

		if(rt[i]==0 && temp==1)
		{
			left--;
			//Desplaying the result of wating, turn around time:
	
			cout<<"Process \t"<<i+1<<": \t"<<timer-arivaltime[i]<<" \t: \t"<<timer-arivaltime[i]-bursttime[i]<<" \n";
			cout<<endl;

			waitingtime += timer-arivaltime[i]-bursttime[i];
			tat += timer-arivaltime[i];
			temp=0;
		}

		if(i == n-1)
			i=0;
		else if(arivaltime[i+1] <= timer)
			i++;
		else
			i=0;
	}

	cout<<"Avg Waiting time "<<waitingtime*1.0/n<<endl;
return 0;
}
