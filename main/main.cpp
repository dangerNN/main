#include "OrdersSystem.h"

int main() {
    setlocale(0, "");
    OrdersSystem system;
    system.addOrder("Піца Маргарита", 250.00, 1800);
    system.addOrder("Кава Американо", 50.00, 300);
    system.addOrder("Суші Філадельфія", 350.00, 2400);

    cout << "\nСписок замовлень до сортування:\n";
    system.printAllOrders();

    system.sortOrdersByReadyTime();
    cout << "\n========Список замовлень після сортування:========\n";
    system.printAllOrders();

    cout << "\n========Виконуємо перше замовлення:========\n";
    system.completeFirstOrder();

    cout << "\n========Актуальний список замовлень:========\n";
    system.printAllOrders();

    return 0;
}