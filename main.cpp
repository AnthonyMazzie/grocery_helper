// g++ main.cpp -o main -Wall -Werror
// ./main

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iterator>
using namespace std;

class groceryList
{
public:
    /* public groceryList class attributes */
    vector<string> GroceryItemVector;

    /* Default constructor */
    groceryList()
    {
    }

    /* Constructor with paramaters */
    groceryList(
        int itemNumber,
        string groceryItem)
    {
        GroceryItemVector.at(itemNumber) = "testing with params";
    }

    /* Display contents of groceryList */
    void display()
    {
        cout << "     GroceryItem : " << GroceryItemVector.at(0) << endl;
    }
};

int main(int argc, char *argv[])
{
    // string groceryItem;
    // cout << "Groceries!" << endl; // "title"
    // cout << "Please enter a grocery item: ";
    // cin >> groceryItem;
    // groceryList newList(1, groceryItem);

    groceryList myGroceryList;
    myGroceryList.GroceryItemVector.push_back("Bananas");
    cout << "\nGrocery list test item: " << myGroceryList.GroceryItemVector.at(0) << " " << endl;
    cout << "\nGrocery list size: " << myGroceryList.GroceryItemVector.size() << " " << endl;
    return 0;
}