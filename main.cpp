#include <iostream>
#include <stdlib.h>

using namespace std;

class product
{
public:
    void addproduct (int Product_id, int Price, int Expiration_date, string Product_name, string Manufacturer);
    void DisplayProducts ();
product();
private:
    int Product_id, Price, Expiration_date;
    string Product_name, Manufacturer;
    };

product::product (void){
    string choice;

    cout << "ALA EH SINSAY NA DINE SA TINDAHAN NI ANN " << endl;

    cout << "Do you want to add products? Yes or No "<< endl;
    cin >> choice;

    if (choice=="Y" || choice=="y")
    {
    cout<<" Product ID: " ;
    cin >> Product_id;
    cout<<" Product Name: " ;
    cin >> Product_name;
    cout<<" Price: " ;
    cin >> Price;
    cout<<"Manufacturer: " ;
    cin >> Manufacturer;
    cout<<"Expiration Date: " ;
    cin >> Expiration_date;
}

}


void product::DisplayProducts()
{
    system("CLS");
    system ("color 3");
    cout << "The Product ID is: " << Product_id<< endl;
    cout << "The Product Name is: " << Product_name<< endl;
    cout << "The Price is: " << Price<< endl;
    cout << "The product Manufacturer: " << Manufacturer<< endl;
    cout << "The Product Expiration is: " << Expiration_date<< endl;

}

int main()
{
    product product;

    product.DisplayProducts();


    return 0;
}
