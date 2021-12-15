//task1
#include<iostream>
using namespace std;

int main()
{
	int a=5;
	string s1="ABC";
	string s2=a+s1;
	cout<<s2<<endl;
	return 1;
}
//task2

#include<iostream>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);
	
    int l,i; 
    
    
    for(l = 0; str[l] != '\0'; l++);

  
    for(i = 0; (i < l/2) && (str[i] == str[l - i - 1]); i++);

    if(i == l/2)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";
	
    return 0;
}

//task3

#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cout<<"Enter the String"<<endl;
  cin >> s;

  reverse(s.begin(),s.end());

  cout<<" Reverse String is : "<<s<<endl;
  return 0;
}
//task4
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s1,s2;
  cout<<"Enter the First String"<<endl;
  cin >> s1;
  cout << "Enter the Second String " <<endl;
  cin >> s2;

  int n = s1.size();
  int m = s2.size();

  if(s1.size()!=s2.size())
  {
    cout << " Strings are unequal "<<endl;
    return 0;
  }

  int max = n > m ? n:m;

  for(int i=0;i< max;i++)
   {
      if(s1[i]!=s2[i])
      {
         cout << " Strings are Unequal " <<endl;
         return  0;
      }
   }
   cout<<"Strings are Equal" <<endl;
  return 0;
}
//task5
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s1,s2;
  cout<<"Enter the First String"<<endl;
  cin >> s1;
  cout << "Enter the Second String " <<endl;
  cin >> s2;

  int n = s1.size();
  int m = s2.size();

  if(s1.size()!=s2.size())
  {
    cout << " Strings are unequal "<<endl;
    return 0;
  }

  int max = n > m ? n:m;

  for(int i=0;i< max;i++)
   {
      if(s1[i]!=s2[i])
      {
         cout << " Strings are Unequal " <<endl;
         return  0;
      }
   }
   cout<<"Strings are Equal" <<endl;
  return 0;
}
//task6
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s1;
  cout<<"Enter the String"<<endl;
  cin >> s1;
  s1[0]='b';
  cout << "String is : " << s1 << endl;  
  return 0;
}
