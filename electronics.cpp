#include "electronics.h"
#include <string>
using namespace std;


Electronics::Electronics(){}

Electronics::Electronics(float price,int ID,string name,
    float discountApplied,float finalPrice,string brand,
    string warranty):Product(price,ID,name,discountApplied,finalPrice){
        this->brand = brand;
        this->warranty = warranty
    }


Electronics::get_brand(){
    return brand;
}

Electronics::get_warranty(){
    return warranty;
}

Electronics::set_brand(string brand){
    this->brand = brand;
}

Electronics::set_warranty(string warranty){
    this->warranty = warranty;
}

Electronics::ApplyDiscount(float price,float discountApplied){
    return (price - discountApplied) * 0.95;
}
