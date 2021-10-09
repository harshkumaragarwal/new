namespace first
{
  void add(int a,int b)
  {
   cout<< a+b<<endl;
  }
}
namespace second
{
  void add(float a,float b)
  {
   cout<< a + b<<endl;
  }
}
//using namespace first;
int main()
{
  add(2, 5.9);
  first::add(2,3);
  second::add(2,3);

}
