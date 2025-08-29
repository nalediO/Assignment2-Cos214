
#include <iostream>
#include "PizzaComponent.h"
#include "Topping.h"
#include "ToppingGroup.h"
#include "BassPizza.h"
#include "Pizza.h"
#include "PizzaDecorator.h"
#include "StuffedCrust.h"
#include "ExtraCheese.h"
#include "PizzaMenu.h"
#include "SpecialsMenu.h"
#include "Customer.h"
#include "Website.h"




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

    PizzaMenu regularMenu;
    SpecialsMenu specialsMenu;

    Pizza* margherita = new BassPizza(pizzaToppings,"Margherita", 12.99);
    Pizza* vegetarian = new BassPizza(pizzaToppings, "Vegetarian", 13.99);
    Pizza* hawaiian = new BassPizza(pizzaToppings, "Hawaiian", 15.99);

    std::cout << "=== Adding Pizzas to Regular Menu ===\n";
    regularMenu.addPizza(margherita);
    regularMenu.addPizza(vegetarian);

    std::cout << "\n=== Adding Pizzas to Specials Menu ===\n";
    specialsMenu.addPizza(hawaiian);

    std::cout << "\n=== Removing Pizza from Regular Menu ===\n";
    regularMenu.removePizza(vegetarian);

    Customer customer;
    Website website;

    std::cout << "\n=== Adding Observers ===\n";
    regularMenu.addObserver(&customer);
    regularMenu.addObserver(&website);

    std::cout << "\n=== Adding Observers to Specials Menu ===\n";
    specialsMenu.addObserver(&customer);
    specialsMenu.addObserver(&website);

    std::cout << "\n=== Remove Observer to Specials Menu ===\n";
    specialsMenu.removeObserver(&customer);

    std::cout << "\n=== Adding Observers ===\n";
    regularMenu.addObserver(&customer);







    // delete cheese;
    // delete pepperoni;
    // delete mushrooms;
    // delete pizzaToppings;
    // delete pizza; 
    return 0;
}
