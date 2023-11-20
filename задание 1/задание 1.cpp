

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    cout << "Введите два целых однозначных:" << endl;

    int num1;
    cin >> num1;

    int num2;
    cin >> num2;

    int num3 = num1 * num2;

    cout << "Результат умножения первого числа на второе:" << endl;

    int answer;
    cin >> answer;

    if (answer == num3) {

        cout << "Вы правильно ответили!" << num3;

    }

    else if (answer < num3) {

        cout << "Вы неправильно ответили!" << num3;

    }
    else if (answer > num3) {

        cout << "Вы неправильно ответили!" << num3;

    }

    return 0;

}
