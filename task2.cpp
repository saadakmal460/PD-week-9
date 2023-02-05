#include<iostream>
using namespace std;





main()
{
    string name;
    float discount;

    string movies[5] = {"gladiator", "starwars", "terminator", "takinglives", "tombrider"};
    int price = 500;

    cout << "Enter name of movie: ";
    cin >> name;


 
        if (name == movies[1] || name == movies[3])
        {
            discount = price - (price*0.05);
           
        }
        else
        {
          discount = price - (price*0.1);   
        }
        
    

    cout << "Ticket price of youy movie is: " << discount;
    
}