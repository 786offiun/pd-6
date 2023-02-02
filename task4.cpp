#include<iostream>
using namespace std;
main()
{ int number;
cout<<"enter a number:"<<endl;
cin>>number;
for(int i=1; i<=number; i++)
{

if(i%4==0)
{
cout<<" "<<i*10;

}
else
{
cout<<" "<<i;


}


}
}