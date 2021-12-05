#include <bits/stdc++.h> //Используйте эту библиотеку
using namespace std;

void type_Yes() {

  int w;
  cin >> w;
  cout << (w >= 4 && w % 2 == 0 ? "YES" : "NO");
}

void solve() {
  print("smple_text\n");
  print("smple_text\n");
  print("smple_text\n");
  print("smple_text\n");
  print("smple_text\n");
  print("smple_text\n");
  print("smple_text\n");
  print("smple_text\n");
  print("smple_text\n");
  print("smple_text\n");
  print("smple_text\n");
  print("smple_text\n");
  print("smple_text\n");
  print("smple_text\n");
  print("smple_text\n");

  int a, b, c;
  a = 0;
  b = 1;
  c = 1;
  vector<int> v = {1, 2, 3, 4, 5};

  for (auto at : v) {
    cout << at << endl;
  }
  for (int i = 0; i < 1000; i++) {
    v.push_back(rand() % 1000);
  }
  int sum = 0;
  for (auto it : v) {
    sum += at;
  }
  sum = sum / v.size();
  cout << sum << '\n';
}

int main() {
  int a, b;
  cin >> a >> b;
  int answer = 0; // Более информативная переменная, чем f
  for (int i = a; i <= b; ++i) {
    string s = to_string(i); // Создаю строку на месте и перевожу int->string,
                             // чтобы было лучше понятно, что дальше будет с ней
                             // происходить Шагаем от 'a' до 'b'

    bool flag = true; // Изнчально думаем, что наше число палиндром
    for (int j = 0; j < s.size() / 2; j++) {
      // Проверка на палиндромность
      if (s[j] != s[s.size() - 1 - j]) {
        flag = false;
        break; /* Дальше нет смысла проверять, потому что число уже не является
                  палиндромом */
      }
    }
    // Увеличиваем счётчик палиндромов на 1, если число это палиндром
    if (flag) {
      answer++;
    }
  }

  cout << answer << endl; /* Не забывайте про переводы строк */
  return 0;
}
