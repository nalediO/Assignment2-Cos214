
#include <iostream>
#include "PizzaComponent.h"
#include "Topping.h"
#include "ToppingGroup.h"
#include "BassPizza.h"
#include "Pizza.h"
#include "PizzaDecorator.h"
#include "StuffedCrust.h"
#include "ExtraCheese.h"

using namespace std;
int main() {
    
    PizzaComponent* cheese = new Topping("Cheese", 1.50);
    PizzaComponent* pepperoni = new Topping("Pepperoni", 2.00);
    PizzaComponent* mushrooms = new Topping("Mushrooms", 1.75);

   
    ToppingGroup* pizzaToppings = new ToppingGroup("Pizza Toppings");
    
    pizzaToppings->add(cheese);
    pizzaToppings->add(pepperoni);
    pizzaToppings->add(mushrooms);

    std::cout << "Toppings Group: " << pizzaToppings->getName() << std::endl;
    std::cout << "Total Price: $" << pizzaToppings->getPrice() << std::endl;

    Pizza* pizza = new BassPizza(pizzaToppings, "Deluxe Pizza", 10.00);

    std::cout << "Original Pizza:\n";
    pizza->printPizza();

    pizza = new StuffedCrust(pizza);

    std::cout << "\nAfter Adding Stuffed Crust:\n";
    pizza->printPizza();

    pizza = new ExtraCheese(pizza);
    std::cout << "\nAfter Adding Extra Cheese:\n";
    pizza->printPizza();

    delete cheese;
    delete pepperoni;
    delete mushrooms;
    delete pizzaToppings;
    delete pizza; 
    return 0;
}
