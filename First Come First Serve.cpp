#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

 	 int n;
 	 int a,b;
 	 	int no=0;
    double sum;
    double avg;
     cout<<"please enter the number of process \n";
	cin>>n;
    int bursttime[n];
    int arrivaltime[n];
    int responsetime[n];
    int waitingtime[n]; 
   
  
    for(int i=0;i<n;i++)
    {
        cout<<"enter the burst time \n";
        cin>>bursttime[i];
    }
    for(int x=0;x<n;x++)
    {
        cout<<"enter the ariival  time \n";
   
        cin>>arrivaltime[x];
    }
       for (int i = 0; i<n; ++i) {
            for (int j = i + 1; j<n; ++j) 
            {
                if (arrivaltime[i] > arrivaltime[j]) 
                {
                    a = arrivaltime[i];
                    b = bursttime[i];
                    
                    arrivaltime[i] = arrivaltime[j];
                    bursttime[i] = bursttime[j];
                    
                    arrivaltime[j] = a;
                    bursttime[j] = b;
                }
            }
        }
    responsetime[0]=arrivaltime[0];
    int j=1;
    for(int i=0;i<n-1;i++)
    {
    responsetime[j]=responsetime[i]+bursttime[i];
    j++;
	}
	   for(int y=0; y<n;y++)
    {
        cout<<"response time is \n";
        cout<<responsetime[y];
        cout<<"\n";
    }
	waitingtime[0]=0;
	cout<<"Waiting time for first is \n";
	cout<<waitingtime[0];
	cout<<"\n";
	int u=1;
	for(int p=1;p<n;p++)
	{
		waitingtime[p]=responsetime[u]-arrivaltime[p] ;
		u++;
	}
 for(int o=1;o<n;o++)
 {
 	cout<<"waiting time is \n";
 	cout<<waitingtime[o];
 	cout<<"\n";
 }
   for(int m=0;m<n;m++)
   {
   	sum=sum+waitingtime[m];
   }
   avg=sum/n;
   cout<<"average waiting time is \n";
   cout<<avg;
   cout<<"\n";
  
  return 0;
}
