#include "array.h"

int main() {
    Array arr(3, 3); // Створення екземпляру класу Array з початковим розміром 3 та кроком 3

    arr.setValue(6);
    arr.setValue(60);
    arr.setValue(40);

    arr.showElements(); // Виведе: 6 60 40

    return 0;
}
