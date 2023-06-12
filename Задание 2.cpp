#include <iostream>
#include <vector>
using namespace std;
vector<int> final() {
    vector<int> doors(100, 0); // создаем вектор из 100 дверей, изначально все закрыты
    for (int i = 1; i <= 100; i++) { // проходим по всем проходам
        for (int j = i - 1; j < 100; j += i) { // проходим по каждой i-й двери
            doors[j] = !doors[j]; // меняем состояние двери (открыто/закрыто)
        }
    }
    vector<int> openDoors; // создаем вектор для хранения номеров открытых дверей
    for (int i = 0; i < 100; i++) {
        if (doors[i] == 1) { // если дверь открыта, добавляем ее номер в вектор
            openDoors.push_back(i + 1); //push_back() — это один из способов вставить новый элемент в конец вектора, который увеличивает размер вектора на 1.
        }
    }
    return openDoors;
}
int main() {
    vector<int> openDoors = final();
    cout << "The final: ";
    for (int i = 0; i < openDoors.size(); i++) {//функция size(), которая возвращает количество элементов в заданном контейнере
        cout << openDoors[i] << " ";
    }
    cout << endl;
    return 0;
}