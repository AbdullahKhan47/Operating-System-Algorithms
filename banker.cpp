#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	

	
	int process;
	cout<<"Enter thw number of process"<<endl;
	cin>>process;
		int squence[process+1];
	int types;
	cout<<"Enter number of types of resources"<<endl;
	cin>>types;
	int type[types+1];
		int alocation[process+1];
	int rqst[process+1];
	int avai[process+1];
//	int test[2][3][2];

	for(int i=1;i<=types;i++)
	{
		cout<<"Enter the Number of resouces for Type"<<i<<endl;
		cin>>type[i];
	}
	
	for(int i=1;i<=process;i++)
	{
	cout<<"Enter the alocated resource for process"<<i<<endl;
				cin>>alocation[i];
	}
	for(int i=1;i<=process;i++)
	{
	cout<<"Enter the requested resource to process"<<i<<endl;
					cin>>alocation[i];
	}

			cout<<"Enter the intial available resource"<<endl;
					cin>>avai[1];

		int p=2;
	int u=1;
	int z=1;
	for(int i=1;i<=process;i++)
	{
		if(avai[z]>=rqst[i])
				{
					avai[p]=avai[z]+alocation[i];
					p++;
					squence[u]=i;
					u++;
					z++;
				}
	}
	
	
	cout<<"Sequence is"<<endl;
	for(int i=1;i<=process;i++)
	{
		
		cout<<squence[i]<<"\t";
	}
		return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
/*	 for(int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for(int k = 0; k < 2; ++k )
            {
                cin >> test[i][j][k];
            }
        }
    }

	for(int i=1;i<1;i++)
	{
		for(int j=1;j<1;j++)
		{
			for(int k=1;k<process;k++)
			{
				cout<<"Enter the alocated resource for process"<<k<<endl;
				cin>>rqst[i][j][k];
			}
		}
	}
	
	for(int i=1;i<1;i++)
	{
		for(int j=1;j<1;j++)
		{
			for(int k=1;k<process;k++)
			{
				cout<<"Enter the requested resource to process"<<k<<endl;
				cin>>alocation[i][j][k];
			}
		}
	
	}
	for(int i=1;i<1;i++)
	{
		for(int j=1;j<1;j++)
		{
			for(int k=1;k<1;k++)
			{
				cout<<"Enter the Intiial available resource"<<k<<endl;
				cin>>avail[i][j][k];
			}
		}
	
	}
	int p=2;
	int u=1;
	for(int i=1;i<1;i++)
	{
		for(int j=1;j<1;j++)
		{
			for(int k=1;k<process;k++)
			{	
				if(avail[i][j][k]>=rqst[i][j][k])
				{
					avail[i][j][p]=avail[i][j][k]+alocation[i][j][k];
					p++;
					squence[u]=k;
					u++;
				}
				 
			}
		}
	
	}
	
	for(int i=1;i<=process;i++)
	{
		cout<<squence[i]<<"\t";
	} */

