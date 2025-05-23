#include "electronics.h"
#include "Clothing_Product.h"
#include <iostream>
using namespace std;


int main(){
    Product product;
    Electronics electronics(5000.00,1,"TV",150,"Samsumg","1_año");
    Clothing_Product clothing_Product(3000.00,2,"Shirt",100,"Cotton","M");
    cout<<"--- Product Information ---"<<endl;


    cout<<"Name: "<<electronics.GetName()<<endl;
    cout<<"Price: "<<electronics.GetPrice()<<endl;
    cout<<"Brand: "<<electronics.get_brand()<<endl;
    cout<<"Warranty: "<<electronics.get_warranty()<<endl;
    cout<<"Discount Applied: "<<electronics.GetDiscountApplied()<<endl;
    
    float discountWithTaxesElectronics = electronics.ApplyDiscount(electronics.GetPrice(), electronics.GetDiscountApplied());
    float discountWithoutTaxesElectronics = product.ApplyDiscount(electronics.GetFinalPrice(), electronics.GetDiscountApplied());

    cout<<"Discount without taxes: "<<discountWithoutTaxesElectronics<<endl;
    cout<<"Discount with taxes: "<<discountWithTaxesElectronics<<endl;

    cout<<"\n\n\n--- Product Information ---"<<endl;


    cout<<"Name: "<< clothing_Product.GetName()<<endl;
    cout<<"Price: "<<clothing_Product.GetPrice()<<endl;
    cout<<"Fabric: "<<clothing_Product.get_fabric()<<endl;
    cout<<"Size: "<<clothing_Product.get_size()<<endl;
    cout<<"Discount Applied: "<<clothing_Product.GetDiscountApplied()<<endl;
    
    float discountWithTaxesClothing = clothing_Product.ApplyDiscount(clothing_Product.GetPrice(), clothing_Product.GetDiscountApplied());
    float discountWithoutTaxesClothing = product.ApplyDiscount(clothing_Product.GetFinalPrice(), clothing_Product.GetDiscountApplied());

    cout<<"Discount without taxes: "<<discountWithoutTaxesClothing<<endl;
    cout<<"Discount with taxes: "<<discountWithTaxesClothing<<endl;



    return 0;
}