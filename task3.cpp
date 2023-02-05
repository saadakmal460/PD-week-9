#include<iostream>
using namespace std;




main()
{


    string word;
    
    cout << "Enter name: ";
    getline(cin , word);

    int i=0;


    while (word[i] != '\0')
    {
        i++;
    }
    
    if (i%2 == 0)
    {
        cout << "True";
    
    }
    else
    {
        cout << "False";
    }



    
}
    
