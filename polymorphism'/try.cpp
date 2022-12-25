# include<iostream>
using namespace std;
    
/*program for obtaining polymorphism

*/
class car        // has only pure virtual function so it becomes an abstract class
{
public:
	virtual void start()=0;           // pure virtual function
};
class innova:public car
{
public:
	void start()
	{
		cout<<"innova started"<<endl;
	}
};
class swift:public car
{
public:
	void start()
        {
		cout<<"swift started"<<endl;
	}
};
int main()
{
	car *p;
	p=new innova();
	p->start();
	p=new swift();
	p->start();
}