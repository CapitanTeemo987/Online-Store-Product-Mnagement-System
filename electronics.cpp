#include "electronics.h"
#include <string>
using namespace std;


Electronics::Electronics(){}

Electronics::Electronics(float price,int ID,string name,
    float discountApplied,string brand,
    string warranty):Product(price,ID,name,discountApplied){
        this->brand = brand;
        this->warranty = warranty;
    }


string Electronics::get_brand(){
    return brand;
}

string Electronics::get_warranty(){
    return warranty;
}

void Electronics::set_brand(string brand){
    this->brand = brand;
}

void Electronics::set_warranty(string warranty){
    this->warranty = warranty;
}

float Electronics::ApplyDiscount(float price,float discountApplied){
    return (price - discountApplied) * 0.95;
}
