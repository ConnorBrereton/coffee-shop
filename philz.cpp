#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;

class Coffee
{
    string roast;
    double price;
    int quantity;
    
    public:
        //getter
        string get_roast()
        {
            return roast;
        }
        double get_price()
        {
            return price;
        }
        int get_quantity()
        {
            return quantity;
        }
        //setter
        void your_roast(string the_roast)
        {
            roast=the_roast;
        }
        void the_roast(double roast_price)
        {
            price=roast_price;
        }
        void your_quantity(int roast_quantity)
        {
            quantity=roast_quantity;
        }
        //constructor
        Coffee(string the_roast="", double roast_price=0, int roast_quantity=0)
        {
            roast=the_roast; price=roast_price; quantity=roast_quantity;
        }
        void print()
        {
            cout<<roast<<price<<quantity<<endl;
        }
};

int main()
{
    Coffee philz[100];
    for(int i=0; i<100; i++)
    {
        cout<<"What roast do you want? ";
        string roast;
        getline(cin, roast);
        cout<<"What is the price of the roast? ";
        double price;
        cin>>price;
        cout<<"How many would you like? ";
        int quantity;
        cin>>quantity;
        getchar();
        philz[i]=Coffee(roast, price, quantity);
    }
    vector<Coffee>the_customer;
    cout<<"Confirm your purchase by entering the bill. ";
    double bill;
    cin>>bill;
    for(int i=0; i<100; i++)
        //if the order data is less/eq to the bill
        if(philz[i].get_price()<=bill)
            //push the customers data into the array
            the_customer.push_back(philz[i]);
    
    //while there is room in the memory
    for(int i=0; i<the_customer.size(); i++)
    {
        Coffee c=the_customer[i];
        c.print();
    }    
    return 0;
}
