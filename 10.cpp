#include<iostream>
using namespace std; 

class A {
private :
	int y;
protected :
	int z;
public :
	int x;
	void display()
	{	cout << "x = " <<x<< endl;
		cout << "z = " <<z<< endl; }
};
class B: public A{
public:
	void display()
	{
	    z =50;
	    cout << "z = " <<z<< endl;
	}
	
};
class C: protected A{
public:
	void display()
	{ 
	    x= 100;
    	z= 90;
	    cout << "x = " <<x<< endl;
		cout << "z = "<< z<< endl;
	}
};
class D : public C{
};
int main()
{
	B objB;
	C objC;
	D objD;
	objB.display();
	objC.display();
	}
//task2
#include<bits/stdc++.h>
using namespace std;

/* local variable is same as a member's name */
class Test
{
private:
	string name;
	char sec;
	int rollno;
	public:
	void setX (string name,char sec,int rollno )
	{
		
		this->name = name;
		this->sec = sec;
		this->rollno = rollno;
	}
	void print() 
	{
	 cout << "Name,Section,Roll Number: " << name<<" "<<sec<<" "<<rollno<<" " << endl; 
	 }
};

int main()
{
Test obj;
int x = 20;
string n="Abhishek";
char c='C';
int roll=1;
obj.setX(n,c,roll);
obj.print();
return 0;
}
//task3
#include<bits/stdc++.h>
using namespace std;

class test
{
	private:
	int a,b;
	
	public:
	test(int a1,int b2)
	{
		a=a1;
		b=b2;
	}
	
	void rem()
	{
		int r;
		if(a>b)
			r=a%b;
		else
			r=b%a;
	
		cout<<r<<endl;
	}
};

int main()
{

	test c1(6,5);
	c1.rem();
	
	return 0;
}
//task4
#include<bits/stdc++.h>
using namespace std;
class Test2;
class Test1
{
	int a;

	public:
	void getA(){
		cin>>a;
	}

	friend void operator <(Test1, Test2);
};



class Test2
{
	int b;

	public:
	void getB(){
		cin>>b;
	}

	friend void operator <(Test1, Test2);
};

void operator <(Test1 t1, Test2 t2)
{
	(t1.a<t2.b)?cout<<"a is less than b":cout<<"b is less than a"<<endl;
}

int main()
{
	Test1 t1;
	Test2 t2;
	
	t1.getA();
	t2.getB();

	t1<t2;
}
//4b
#include<bits/stdc++.h>
using namespace std;
class Test2;
class Test1
{
	int a;

	public:
	void getA(){
		cin>>a;
	}

	friend void operator <(Test1, Test2);
};



class Test2
{
	int b;

	public:
	void getB(){
		cin>>b;
	}

	friend void operator <(Test1, Test2);
};

void operator <(Test1 t1, Test2 t2)
{
	(t1.a<t2.b)?cout<<"a is less than b":cout<<"b is less than a"<<endl;
}

int main()
{
	Test1 t1;
	Test2 t2;
	
	t1.getA();
	t2.getB();

	t1<t2;
}
