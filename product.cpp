#include "product.h"

Product::Product(string gname, float gcost, int gquantity){
  name = gname;
  cost = gcost;
  quantity = gquantity;
}

string Product::getName() const{
    return name;
}

float Product::getCost() const{
    return cost;
}

int Product::getQuantity() const{
    return quantity;
}