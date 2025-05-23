#pragma once
#include "Product.h"
#include <string>
using namespace std;


class Electronics:public Product{
    private:
        string brand;
        string warranty;

    public:
        Electronics();
        Electronics(float,int,string,float,string,string);

        string get_brand();
        string get_warranty();
        void set_brand(string);
        void set_warranty(string);
        float ApplyDiscount(float, float) override; 

};
