// Задача 2. Устранение дублирования

#include <iostream>

using namespace std;

void prints(int value, int power, int result) {

  for (int i = 0; i < power; i++) {
    result *= value;
  }

  cout << value << " в степени " << power << " = " << result << endl;
}

int main(int argc, char **argv) {
  void print();

  int value = 5, power = 2, result = 1;

  prints(value, power, result);

  value = 3;
  power = 3;
  result = 1;

  prints(value, power, result);

  value = 4;
  power = 4;
  result = 1;

  prints(value, power, result);

  return 0;
}
