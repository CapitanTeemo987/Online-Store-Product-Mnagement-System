#include "Product.h"

Product::Product(){
    Price = 0.0;
    ID = 0; 
    Name = "";
    DiscountApplied = 0.0;
    FinalPrice = 0.0;  
}

Product::Product(float Price, int ID, std::string Name, float DiscountApplied, float Finalprice){
    this->Price = Price;
    this->ID = ID;
    this->Name = Name;
    this->DiscountApplied = DiscountApplied;
    this->FinalPrice = FinalPrice;
}

//Getters
float Product::GetPrice(){
    return Price;
}

int Product::Getid(){
    return ID;
}

std::string Product::GetName(){
    return Name;
}

float Product::GetDiscountApplied(){
    return DiscountApplied;
}

float Product::GetFinalPrice(){
    return FinalPrice;
}

//Setters
void Product::SetPrice(int Price){
    this->Price = Price;
}

void Product::SetDiscountApplied(float DiscountApplied){
    this->DiscountApplied = DiscountApplied;
}

void Product::SetFinalPrice(float FinalPrice){
    this->FinalPrice = FinalPrice;
}

float ApplyDiscount(float Price, float DiscountApplied){
    return (Price - DiscountApplied);
}
