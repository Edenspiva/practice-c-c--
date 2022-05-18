#include "product.h"
#include "global.h"
using namespace std;

int main(){
/*I want to create a simple project
  where user can buy items from a store menu
*/

Product p1("apple",2.5,7),p2("banana",0.99,20),p3("pear",3.25,6),p4("juice",4.2,10),p5("soda",1.99,30);

Product array[5] = {p1,p2,p3,p4,p5};

printMenu(array,5);

}