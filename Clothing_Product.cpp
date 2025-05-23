#include "Clothing_Product.h"
#include <iostream>
#include <string>
using namespace std;

Clothing_Product::Clothing_Product() : Product(){
    fabric = " ";
    size = " ";
}

// Overloaded constructor
Clothing_Product::Clothing_Product(float price,int ID,string name,
    float discountApplied,string _fabric,string _size):Product(price,ID,name,discountApplied) {
    fabric = _fabric;
    size = _size;
}

// Setter method
void Clothing_Product::set_fabric(string _fabric) {
    fabric = _fabric;
}

void Clothing_Product::set_size(string _size){
    size = _size;
}

// Getter method
string Clothing_Product::get_fabric() {
    return fabric;
}

string Clothing_Product::get_size(){
    return size;
} 