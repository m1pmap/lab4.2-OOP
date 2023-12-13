//Создать ассоциативный контейнер map.Значение ключей контейнера за 
//полнить из файла, значение контейнера просчитать по вариантам(табл. 4.2)
//Задание: Перевести шестнадцатеричные значения в двоичные(шестнадцатеричное
//представление, двоичное представление)

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <bitset>

using namespace std;

int main()
{
    std::map<int, std::string> container;
    std::ifstream file("D:\\2 КУРС\\3 СЕМЕСТР\\ООП\\Лабораторная 4\\lab4.2\\txt.txt");

    cout << "File:" << endl;
    std::string line;
    int line_number = 1;
    while (std::getline(file, line)) {
        container[line_number] = line;
        ++line_number;
    }

    for (auto pair : container)
        cout << pair.second << '\n';

    cout << "\nBinary system:" << endl;
    for (auto pair : container) {
        bitset<8> binary(std::stoi(pair.second, nullptr, 16));
        cout << binary.to_string() << endl;
    }
}