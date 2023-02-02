#include <iostream>
#include <windows.h>
using namespace std;

main()
{
    int number;
    cout << "enter a number:";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<"*";
        }

        int spaces = 2 * number - 2 * i;
        for (int l = 1; l <= spaces; l++)
        {
            cout << " ";
        }
    
     for (int j = 1; j <= i; j++)
        {
            cout <<"*";
        }

    
      cout<<endl;    
    
    }



}
