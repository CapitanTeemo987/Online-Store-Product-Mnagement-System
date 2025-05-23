#include "electronics.h"
#include "Clothing_Product.h"
#include <iostream>
using namespace std;


int main(){
    Electronics electroincs(5000.0,1,"TV",150,"Samsumg","1_año");
    Clothing_Product clothing_Product(3000.0,2,"Shirt",100,"Cotton","M");
    cout<<"--- Product Information ---"<<endl;


    cout<<"Name: "<<electroincs.GetName()<<endl;
    cout<<"Price: "<<electroincs.GetPrice()<<endl;
    cout<<"Brand: "<<electroincs.get_brand()<<endl;
    cout<<"Warranty: "<<electroincs.get_warranty()<<endl;
    cout<<"Discount Applied: "<<electroincs.GetDiscountApplied()<<endl;
    
    float electronics.ApplyDiscount8






    return 0;
}