/*
  Задача 3. Пользовательский массив в файл
  Описание
  Напишите программу, которая запрашивает у пользователя массив целых чисел и
  записывает его в файл в обратном порядке. Программа должна сначала спросить у
  пользователя размер предполагаемого массива, а затем попросить заполнить
  каждый его элемент. После этого программа должна записать размер полученного
  массива и сам полученный массив в обратном порядке в файл out.txt.

  Пример работы программы
  Консоль:

  Введите размер массива: 5
  arr[0] = 1
  arr[1] = 2
  arr[2] = 3
  arr[3] = 4
  arr[4] = 5
  Файл out.txt:

  5
  5 4 3 2 1
  Ещё один пример работы программы
  Консоль:

  Введите размер массива: 7
  arr[0] = 5
  arr[1] = 6
  arr[2] = 7
  arr[3] = 2
  arr[4] = 4
  arr[5] = 3
  arr[6] = 5
  Файл out.txt:

  7
  5 3 4 2 7 6 5
*/
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int size;
  cout << "==============================" << endl;
  cout << "Введите размер массива: " << endl;
  cout << "==============================" << endl;
  cin >> size;
  int *arr = new int[size];
  for (int i = 0; i < size; i++) {
    cout << "arr[" << i << "] = ";
    cin >> arr[i];
  }
  ofstream out("out.txt");
  out << size << endl;
  for (int i = size - 1; i >= 0; i--) {
    out << arr[i] << " ";
  }
  cout << "==============================" << endl;
  cout << "Все данные записаны в out.txt" << endl;
  cout << "==============================" << endl;

  out.close();
  delete[] arr;
  return 0;
}
