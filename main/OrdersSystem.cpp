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
		cout << "���� ��������� ��� ���������!\n"; // �������� ������ �� �� ��� ��� �������� "���� ��������� ��� ���������"
        return;
    }
    orders.front().printOrder();
    orders.erase(orders.begin());
    cout << "����� ���������� �������� � ��������!\n"; // �������� ������ �� �� ��� ��� �������� "����� ���������� �������� � ��������"
}

void OrdersSystem::printAllOrders() const {
    if (orders.empty()) {
        cout << "���� �������� ���������.\n"; // �������� ������ �� �� ��� ��� �������� "���� �������� ���������"
        return;
    }
    for (const auto& order : orders) {
        order.printOrder();
    }
}
