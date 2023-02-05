#include<iostream>
using namespace std;


main()
{
    string arr[4];
 
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];

    }

 

    if (arr[0] == arr[1] && arr[2] == arr[3] && arr[1] == arr[2])
    {
        cout << "True";
    }
    else
    {
        cout << "False";

    }

    
    
}