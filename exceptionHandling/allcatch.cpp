# include<iostream>
using namespace std;
    
/*program for all about catch

*/
class myexception1: exception
{
};
class myexception2:public myexception1
{
};
int main()
{
	try
	{
		throw myexception1();
	}
	catch(myexception2 e)               // child first
	{
		cout<<"int catch"<<endl;
	}
	catch(myexception1 e)              // then comes catch block for parent
	{
		cout<<"double catch"<<endl;
	}
	catch(...)
	{
		cout<<"all catch"<<endl;
	}
}