#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y, R;
    cout << "Введите R" << endl;
    cin >> R;
    for (int i = 0; i < 10; i++);
    {
        cout << "Введите значение x, y" << endl;
        cin >> x >> y;
        if ((x * x + y * y >= R) && (x >= 0) && (x <= 2 * R) && (y <= 2 * R) && (y >= 0) || (x <= 0) && (y <= 0) && (y >= -x - 2 * R))
        cout << "Попал" << endl;
        else cout << "Не попал" << endl;
    }
    system("pause");
    return 0;
}
