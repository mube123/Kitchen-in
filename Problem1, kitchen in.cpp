#include<iostream>
#include<string>
using namespace std;


int main()
{
	string thing, choice;
	float i ;
	float j=1,box=5,fill=i;
	bool confirm;
	do
	{			
		cout<<"\nwhat do want to fill in the box?";
		cin>>thing;
		cout<<"How many kg do you want to fill the "<<thing<<" in the box?";
		cin>>i;
		if(i>=0 && i<=box)
		{
			for(j=1;j<=i;j++)
			{
				cout<<"Add 1 kg "<<thing<<endl;
				cout<<"you can add "<<box-j<<"kg more "<<thing<<endl;
			}
				cout<<"\nyou added "<<i<<"kg "<<thing;
				cout<<"\nyou can add "<<box-i<<"kg more "<<thing<<" next time";
		}
		else
		{
				cout<<"you cant add more than box capacity (minimum=0 and maximum=5):";
		}
		
		cout<<"\ndo you want to add another thing in another box? press 1 for yes and 0 for no : ";
		cin>>confirm;
		cout<<"\n#######		another box		#######"<<endl;
		}
		while(confirm==1);
	}
