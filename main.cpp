#include "electronics.h"
#include "Clothing_Product.h"
#include <iostream>
using namespace std;


int main(){
    Product product;
    Electronics electroincs(5000.00,1,"TV",150,"Samsumg","1_año");
    Clothing_Product clothing_Product(3000.00,2,"Shirt",100,"Cotton","M");
    cout<<"--- Product Information ---"<<endl;


    cout<<"Name: "<<electroincs.GetName()<<endl;
    cout<<"Price: "<<electroincs.GetPrice()<<endl;
    cout<<"Brand: "<<electroincs.get_brand()<<endl;
    cout<<"Warranty: "<<electroincs.get_warranty()<<endl;
    cout<<"Discount Applied: "<<electroincs.GetDiscountApplied()<<endl;
    
    float discountWithTaxes = electroincs.ApplyDiscount(electroincs.GetPrice(), electroincs.GetDiscountApplied());
    float discountWithoutTaxes = product.ApplyDiscount(electroincs.GetFinalPrice(), electroincs.GetDiscountApplied());

    cout<<"Discount without taxes: "<<discountWithoutTaxes<<endl;
    cout<<"Discount with taxes: "<<discountWithTaxes<<endl;

    cout<<"\n\n\n--- Product Information ---"<<endl;


    cout<<"Name: "<< clothing_Product.GetName()<<endl;
    cout<<"Price: "<<clothing_Product.GetPrice()<<endl;
    cout<<"Fabric: "<<clothing_Product.get_fabric()<<endl;
    cout<<"Size: "<<clothing_Product.get_size()<<endl;
    cout<<"Discount Applied: "<<clothing_Product.GetDiscountApplied()<<endl;
    
    float discountWithTaxes = clothing_Product.ApplyDiscount(clothing_Product.GetPrice(), clothing_Product.GetDiscountApplied());
    float discountWithoutTaxes = product.ApplyDiscount(clothing_Product.GetFinalPrice(), clothing_Product.GetDiscountApplied());

    cout<<"Discount without taxes: "<<discountWithoutTaxes<<endl;
    cout<<"Discount with taxes: "<<discountWithTaxes<<endl;



    return 0;
}