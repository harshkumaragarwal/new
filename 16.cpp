1a
#include<iostream>
using namespace std; 
 template <typename T>
T add(T x, T y)
{
	return x+y;
}

int main()
{
	int a ,b;
	cout << "Enter value of a and b "<< endl;
	cin >> a >> b;
	cout << add<int>(a,b);
	return 0;
}
1b
  #include<iostream>
using namespace std; 
 template <typename T1, typename T2, typename T3>
T3 add(T1 x, T2 y)
{
	return x+y;
}

int main()
{
	int a ;
	float b ;
	cout << "Enter value of a and b "<< endl;
	cin >> a >> b;
	cout << add<int, float , double>(a,b);
	return 0;
}
2
  #include<iostream>
using namespace std;

int main()
{
	int a = 99;
	int b =0;

   try {
      if (b ==  0)
      {
         throw b;
         cout <<a/b; // this statement will never be executed.
      }
      else
      	cout <<a/b; // only executed if the denominator != 0.
   }
   catch (int b) 
   {
      cout << "runtime_error \n";
   }
   return 0;
#include <iostream>
using namespace std;
int main()
{
 try {
 throw 'a';
 }
 catch (int x) {
 cout << "Caught " << x;
 }
 catch (...) {
 cout << "Default Exception\n";
 }
 return 0;
}

Implicit type conversion doesn’t happen for primitive types,
so in the following program ‘a’ is not implicitly converted to int 
Also there is a special catch block called ‘catch all’ catch(…) that can be used to catch all types of exceptions. 
so a the " Default Exception " error will be thrown ,and not the " Caught " one.

