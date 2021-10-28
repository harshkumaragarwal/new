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
