#include "Product.h"

Product::Product(){
    price = 0.0;
    ID = 0; 
    name = "";
    discountApplied = 0.0;
    finalPrice = 0.0;  
}

Product::Product(float price, int ID, std::string name, float discountApplied, float finalprice){
    this->price = price;
    this->ID = ID;
    this->name = name;
    this->discountApplied = discountApplied;
    this->finalPrice = finalPrice;
}

//Getters
float Product::GetPrice(){
    return price;
}

int Product::Getid(){
    return ID;
}

std::string Product::GetName(){
    return name;
}

float Product::GetDiscountApplied(){
    return discountApplied;
}

float Product::GetFinalPrice(){
    return finalPrice;
}

float Product::GetFinalPrice(float Taxes){
    return finalPrice * (1 + Taxes);
}

//Setters
void Product::SetPrice(int Price){
    this->price = price;
}

void Product::SetDiscountApplied(float discountApplied){
    this->discountApplied = discountApplied;
}

void Product::SetFinalPrice(float finalPrice){
    this->finalPrice = finalPrice;
}

float ApplyDiscount(float price, float discountApplied){
    return (price - discountApplied);
}
