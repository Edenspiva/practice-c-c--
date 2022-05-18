#include "global.h"

void printMenu(Product array[], const int SIZE){
    cout << "|\tName\t|" << "\tCost\t|" << "\tIn Stock\t|" << endl;

  for(int i = 0; i < SIZE; i++){
      cout << "|\t" << array[i].getName() << "\t|";
      cout << "\t" << array[i].getCost() << "\t|";
      cout << "\t" << array[i].getQuantity() << "\t|" << endl << endl;
  }
}