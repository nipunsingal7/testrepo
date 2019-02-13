#include<iostream>
class pro
{public: int x,y,z;
	pro()
	{ cout<<"constructor"; 
		
	  x=1,y=2,z=5;                          //constructor
	}

	~pro()
	{
	  cout<<"destructor created";  //destructor
	}
};
int main()
{cout<<"program1 of cpp";
pro a;
cout<<a;
} 	

