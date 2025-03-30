#include "OrdersSystem.h"

void OrdersSystem::addOrder(const string& desc, double price, int prepTime) {
    orders.emplace_back(desc, price, prepTime);
    cout << "���������� ������!\n";
}

void OrdersSystem::sortOrdersByReadyTime() {
    sort(orders.begin(), orders.end(), [](const Order& a, const Order& b) {
        return a.getReadyTime() < b.getReadyTime();
        });
}

void OrdersSystem::completeFirstOrder() {
    if (orders.empty()) {
		cout << "���� ��������� ��� ���������!\n"; // why is github not like what is written here in Ukrainian "No order for execution"
        return;
    }
    orders.front().printOrder();
    orders.erase(orders.begin());
    cout << "����� ���������� �������� � ��������!\n"; // for some reason GitHub is not what is written here in Ukrainian �First of all, it�s written down and deleted�
}

void OrdersSystem::printAllOrders() const {
    if (orders.empty()) {
        cout << "���� �������� ���������.\n"; // why is github not like what is written here in Ukrainian "No active orders"
        return;
    }
    for (const auto& order : orders) {
        order.printOrder();
    }
}
