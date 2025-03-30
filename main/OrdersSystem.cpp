#include "OrdersSystem.h"

void OrdersSystem::addOrder(const string& desc, double price, int prepTime) {
    orders.emplace_back(desc, price, prepTime);
    cout << "Замовлення додано!\n";
}

void OrdersSystem::sortOrdersByReadyTime() {
    sort(orders.begin(), orders.end(), [](const Order& a, const Order& b) {
        return a.getReadyTime() < b.getReadyTime();
        });
}

void OrdersSystem::completeFirstOrder() {
    if (orders.empty()) {
		cout << "Немає замовлень для виконання!\n"; // почемуто гитхаб не то что тут написано "Немає замовлень для виконання"
        return;
    }
    orders.front().printOrder();
    orders.erase(orders.begin());
    cout << "Перше замовлення виконано і видалено!\n"; // почемуто гитхаб не то что тут написано "Перше замовлення виконано і видалено"
}

void OrdersSystem::printAllOrders() const {
    if (orders.empty()) {
        cout << "Немає активних замовлень.\n"; // почемуто гитхаб не то что тут написано "Немає активних замовлень"
        return;
    }
    for (const auto& order : orders) {
        order.printOrder();
    }
}
