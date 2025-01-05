#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct  Product{
    int productID;
    string name;
    string category;
};

struct  Order{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main(){
    vector<Product> products = {
        {101, "Phone", "Electronics"},
        {102, "Tab", "Electronics"},
        {103, "Mixer", "Kitchen"},
        {104, "CoffeeMaker", "Kitchen"},
        {105, "Fan", "Electrical"}
    };

    deque<string> recentCustomers = {"B01,B02,B03"};
    
    recentCustomers.push_back("B04");
    recentCustomers.push_front("B05");

    list<Order> orderHistory;

    orderHistory.push_back({1, 101, 1, "B01", time(0)});
    orderHistory.push_back({2, 104, 2, "B05", time(0)});
    orderHistory.push_back({3, 103, 5, "B02", time(0)});

    set<string> categories;
    for(const auto &product: products){
        categories.insert(product.category);
    }

    map<int, int> productStock = {      // map is saved in sorted order
        {101,10},
        {102,20},
        {103,17},   //map uses binary search tree 
        {104,6},
        {105,7},
    };

    multimap<string, Order> customerOrders;
    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerID, order});
    };

    unordered_map<string, string> customerData = {  // isnt sorted
        {"B01", "Alice"},
        {"B02", "Risabh"},      //uo map uses hash table
        {"B03", "Nkr"},
        {"B04", "Alex"},
        {"B05", "Bob"}
    };

    unordered_set<int> uniqueProductIDs;
    for(const auto &product: products){
        uniqueProductIDs.insert(product.productID);
    }

    return 0;
}