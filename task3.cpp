#include<iostream>
using namespace std;
main()
{ 
    
    for(int i=1; i<=6; i++)
    {
     int count=1;   
     for(int j =6; j>=i; j--)
     {
        cout<<" ";
     }
     
     while(count<=i)
     {
     cout<<"*";
     count=count+1;
     
     }

   cout<<endl;


    }

    
    for(int i=1; i<=6; i++)
    {
        for(int k=1; k<=i; k++)
   {
  cout<<" ";

   }

     for(int j =6; j>=i; j--)
     {
        cout<<"*";
     }
     cout<<endl;





    }
}

   
    



    







