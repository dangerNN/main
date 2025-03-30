#pragma once
#include "Orders.h"
#include <vector>
#include <algorithm>
class OrdersSystem {
private:
    vector<Order> orders;

public:
    void addOrder(const string& desc, double price, int prepTime);
    void sortOrdersByReadyTime();
    void completeFirstOrder();
    void printAllOrders() const;
};


