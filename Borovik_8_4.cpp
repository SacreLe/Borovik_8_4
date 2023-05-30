/* Borovik_8_4.cpp : Реализовать структуру «Машина» (цвет, модель, номер). 
Номер машины может представлять из себя или пятизначный номер или слово до 8 символов.
Рекомендации: номер реализовать как объединение.
Создать экземпляр структуры «Машина» и реализовать для него следующие функции :
Заполнение машины
Печать машины
Создать массив из 10 экземпляров структуры «Машина» и реализовать для него следующие функции:
Редактировать машину
Печать всех машин
Поиск машины по номеру
*/

#include <iostream>
using namespace std;
#define SIZE 10

struct Car
{
    char colorCar[50];
    char modelCar[50];
    char numberCar[9];
};

Car Сompletion() {
    Car temp{};
    cout << "Введите модель машины: ";
    cin >> temp.modelCar;
    cout << "\nВведите цвет машины: ";
    cin >> temp.colorCar;
    cout << "\nВведите номер машины в фориате Х000ХХ: "; 
    cin >> temp.numberCar;
    return temp;
}
void Show(Car Instance) {
    cout << "Модель: " << Instance.modelCar<<endl;
    cout << "Цвет: " << Instance.colorCar << endl;
    cout << "Номер: " << Instance.numberCar << endl;
}
void Change(Car L[], int size) {
    cout << endl << "Введите модель машины которую необходимо отредактировать: ";
    char n[255];
    cin >> n;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(L[i].modelCar, n) == 0)
        {
            L[i] = Сompletion();
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    Car M = Сompletion();
    Show(M);
    Car Avto [SIZE]{};
    for (int i = 0; i < SIZE; i++)
    {
        Avto [i] = Сompletion();
    }
    Change(Avto, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        Show(Avto[i]);
    }
    cout << endl << "Введите номер автомобиля которую необходимо найти: ";
    char n[255];
    cin >> n;
    for (int i = 0; i < SIZE; i++)
    {
        if (strcmp(Avto[i].numberCar, n) == 0)
        {
            Show(Avto[i]);
        }
    }
}
