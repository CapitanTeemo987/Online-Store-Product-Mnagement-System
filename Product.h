#ifndef PRODUCT_H
#define PRORUCT_H
#include <string>

class Product{
    
    protected:
        float price;
        int ID;
        std::string name; 
        float discountApplied;
        float finalPrice;

    public:
        Product();
        Product(float, int, std::string, float);

        //Getters
        float GetPrice();
        int Getid();
        std::string GetName();
        float GetDiscountApplied();

        //Overloading
        float GetFinalPrice();
        float GetFinalPrice(float);
        

        //Setters
        void SetPrice(int);
        void SetDiscountApplied(float);
        void SetFinalPrice(float);

        //Other methods
        virtual float ApplyDiscount(float, float);
};

#endif
