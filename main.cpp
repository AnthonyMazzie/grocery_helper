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
    groceryList(
        int itemNumber,
        string groceryItem)
    {
        ItemNumber = itemNumber;
        GroceryItem = groceryItem;
    }
    void display()
    {
        cout << "     ItemNumber : " << ItemNumber << endl;
        cout << "     GroceryItem : " << GroceryItem << endl;
    }
    string GroceryItem;
    int ItemNumber;
};

int main(int argc, char *argv[])
{
    vector<groceryList> groceryListVector;

    string groceryItem;
    int number = 0;

    cout << "Groceries!" << endl; // "title"

    cout << "Please enter a grocery item: ";
    cin >> groceryItem;
    cout << "Item entered: " << groceryItem;
    groceryList newList(number, groceryItem);

    cout << "\nGrocery list test: " << newList.ItemNumber << " " << newList.GroceryItem << endl;

    return 0;
}