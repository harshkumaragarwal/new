#include<bits/stdc++.h>
using namespace std;
class student
{
 private:

   string name;
   string phoneNumber;
   string address;
   int roll;
 public:
   void setStudent(string a,string b,string c,int d)
   {name=a; phoneNumber=b; address=c; roll=d;}
   void getStudent(){cout<<name<<" "<<phoneNumber<<" "<<address<<" "<<roll<<endl;}

  

};
int main()
{
 class student s1;
 s1.setStudent("Sam","123332","DDN",1);
 class student s2;
 s2.setStudent("JOHN","5633525","MOHABBA",2);
 s1.getStudent();
 s2.getStudent();
  
}
9.2
#include<bits/stdc++.h>
using namespace std;
class areas
{
public:
int area(int l,int b) {return l*b;}
int area(int a) {return a*a;}
};
int main()
{
 class areas r;
 cout<<r.area(10,5)<<endl;
  cout<<r.area(10);
 
}
9.3
 #include<bits/stdc++.h>
using namespace std;
class areas
{
public:
static int count;
int area(int l,int b)
 {count++;
  return l*b;}
int area(int a) 
{count++; 
return a*a;}
static int getcount() 
{return count;}

};
int areas::count=0;
int main()
{
 class areas r;
 cout<<r.area(10,5)<<endl;
  cout<<r.area(10)<<endl;
  cout<<r.area(1)<<endl;

  cout<<r.area(10,2)<<endl;
  if(r.getcount()>3)
  cout<<r.getcount();
 
}
9.5
 #include<bits/stdc++.h>
using namespace std;
class college
{
 public:
 string name;
}
struct student
{
 string name;
}
/*TAlking about the differences between class and struct ,
1. By default, every element in a class is private but in structure, by default every element is public.
2. We can use access specifiers in oops in classes like public, private and protected which are very useful but in c in structures there is no such access specifiers.
3.classes are stored in heap whereas struct is stored in stack.
4. Classes take less memory as compared to struct.
3.classes are stored in heap whereas struct is stored in stack.
