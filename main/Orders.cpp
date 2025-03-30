#include "Orders.h"

int Order::orderCounter = 0;

Order::Order(string desc, double pr, int prepTime) {
    orderNumber = ++orderCounter;
    orderTime = time(nullptr);
    preparationTime = prepTime;
    description = desc;
    price = pr;
}

int Order::getOrderNumber() const { return orderNumber; }
time_t Order::getReadyTime() const { return orderTime + preparationTime; }
string Order::getDescription() const { return description; }
double Order::getPrice() const { return price; }
void Order::printOrder() const {
    cout<<("\n���������� #%d\n", orderNumber);
    cout << ("����: %s\n", description.c_str());
    cout << ("ֳ��: %.2f ���\n", price);

    time_t readyTime = getReadyTime();
    char buffer[26];
    ctime_s(buffer, sizeof(buffer), &readyTime);
    cout << ("��� ���������: %s", buffer);
}