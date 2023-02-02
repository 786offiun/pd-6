#include<iostream>
using namespace std;
main()
{
    int calculation;
     int patients;
     int counter=0;
     int treated;
     int untreated;
     int totalpatients;
     int doctors=7;
     int counter2=0;
     cout<<"enter the day for calculation:"<<endl;
     cin>>calculation;
     for(int i=1; i<=calculation; i++)
     {
       cout<<"enter the no of patients one by one:";
     cin>>patients;
     counter=patients+counter;
     counter2=counter2+1;
      if(counter2==3)
      {
       treated=doctors*3;
        if(counter>treated)
        {

        untreated=counter-treated;
        }
        else
        {

            untreated=treated-counter;
        }

          if(untreated>treated)
          {

            doctors=doctors+1;
          }

      counter2=0;
      
      }



     
     
     
     
     }
}