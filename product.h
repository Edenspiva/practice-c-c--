#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

using namespace std;

class Product{
 private:
         string name;
         float cost;
         int quantity;
 public:
        Product(){};
        Product(string gname, float gcost, int gquantity);

        string getName() const;
        float getCost() const;
        int getQuantity() const;

};


#endif