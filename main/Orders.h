#pragma once
#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;

class Order {
private:
    static int orderCounter;
    int orderNumber;
    time_t orderTime;
    int preparationTime;
    string description;
    double price;

public:
    Order(string desc, double pr, int prepTime);
    int getOrderNumber() const;
    time_t getReadyTime() const;
    string getDescription() const;
    double getPrice() const;
    void printOrder() const;
};
