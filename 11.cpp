#include<iostream>
 using namespace std; 
 
 class Parent {
 public:
 int x;
  void display(){
  x=100;
  cout <<x;}
  };
  
class Child: public Parent {
 public:
  void displayChild(){
  x = 5;
  cout << x<<endl;
  display();
  }
  };
  int main()
  {
  Child obj;
   obj.displayChild();
   return 0;
   }
//task 2
#include<iostream>
using namespace std;

class Mammals{
public:
	void displayMammals(){cout<<"I am a Mammal"<<endl;}
};

class Marine{
public:
	void displayMarine(){cout<<"I am a Marine"<<endl;}
};

class BlueWhale : public Mammals, public Marine{
public:
	void displayBoth(){cout<<"I am a Both"<<endl;}
};

int main()
{
	Mammals A;
	Marine B;
	BlueWhale C;
	A.displayMammals();
	B.displayMarine();
	C.displayBoth();
	C.displayMammals();
	C.displayMarine();
return 0;
}
//task3a
#include<iostream>
using namespace std;

class A{
public:
	int k;
	void display()
	{cout << "Inside class A "<< endl;}
};
class B: public A{};
class C: public A{};
class D: public B, public C{};

int main()
{
D obj;
	obj .k =10;
	obj.display();
};
//task 3b
#include<iostream>
using namespace std;

class A{
public:
	int k;
	void display()
	{cout << "Inside class A "<< endl;
	cout << "Value of k is "<< k << endl;}
};
class B: public virtual A{};
class C: virtual public A{};
class D: public B, public C{};

int main()
{
D obj;
	obj .k =10;
	obj.display();
};
//task 3c

#include<iostream>
using namespace std;

class A{
public:
	int k;
	void display()
	{cout << "Inside class A "<< endl;
	cout << "Value of k is "<< k << endl;}
};
class B{
public:
	int k;
	void display()
	{cout << "Inside class A "<< endl;
	cout << "Value of k is "<< k << endl;}};
	
class C: public A,public B{};

int main()
{
C obj;
	// (obj .k =10;)-> this will show error as the compiler dont know about which k variable to access 
	//obj.display(); to solve the error we need to use SRO to specify which class we want to use.
	obj .A::k =10;
	obj.B::display();
};
