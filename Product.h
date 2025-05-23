#ifndef PRODUCT_H
#define PRORUCT_H
#include <string>

class Product{
    
    protected:
        float Price;
        int ID;
        std::string Name; 
        float DiscountApplied;
        float FinalPrice; 
    
    public:
        Product();
        Product(float, int, std::string, float, float);

        //Getters
        float GetPrice();
        int Getid();
        std::string GetName();
        float GetDiscountApplied();
        float GetFinalPrice();

        //Setters
        void SetPrice(int);
        void SetDiscountApplied(float);
        void SetFinalPrice(float);

        //Other methods
        float ApplyDiscount(float, float);
};

#endif
