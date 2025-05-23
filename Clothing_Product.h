#ifndef CLOTHING_PRODUCT
#define CLOTHING_PRODUCT 
#include "Product.h"

#include <string>
using namespace std;

class Clothing_Product:public Product {
    private: 
        string fabric;
        string size;
    public:
        Clothing_Product();
        Clothing_Product(float,int,string,float,string,string);
        string get_fabric();
        void set_fabric(string); 
        string get_size();
        void set_size(string);
        float ApplyDiscount(float, float) override;
};  

#endif
