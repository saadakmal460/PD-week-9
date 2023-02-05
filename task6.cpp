#include<iostream>
using namespace std;


main()
{
    int arr[3];
    int times;


    cout << "Enter number of times transformation is needed: ";
    cin >> times;

    for (int i = 0; i <3; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if (arr[i]%2 == 0)
        {
            arr[i] = arr[i] - (2*times); 
        }
        else
        {
            arr[i] = arr[i] + (2*times);
        }

        cout << arr[i] << " ";
        
    }
    
    
}