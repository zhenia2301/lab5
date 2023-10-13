// lab7_perm_dan.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

/*#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    for (int i = 1;i <= 30;i++)
    {
        if (i % 2 == 0) {
            cout << "Четное число:";
            cout << i << endl;
        }
    }
    for (int j = 1;j <= 30;j++) {
        if (j % 2 != 0) {
            cout << "Нечетное число:";
            cout << j << endl;
        }
    }
    return 0;
}*/
/*#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int sum = 0;
    for (int i = 1;i <= 200;i++) {
        sum += i;
    }
    cout << sum;

    return 0;
}*/
#include <iostream>

using namespace std;

/*int main()
{
    setlocale(0, "");
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 1;i <= 100;i++) {
        if (i % 2 == 0) {
            sum1 += i;
        }
        else if (i % 3 == 0) {
            sum2 += i;
        }
        
    }
    cout <<"Ответ:" <<sum1 + sum2;

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int num1;
    cout << "Введите число:";
    cin >> num1;
    for (int i = 1;i >= 1;i++) {
        if (num1 % i == 0) {
            cout << i<<endl;
        }
    }

    return 0;
}*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    
    for (int i = 1;i <= 10;i++) {
        for (int j = 1;j <= 10;j++) {
            cout << i << "*" << j << "=" << i * j<<endl;
       }
    }

    return 0;
}
/*#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    cout << "0";
    cout << "1";
    cout << "1";
    cout << "2";
    cout << "3";
    cout << "5";
    cout << "8";
    cout << "13";
    cout << "21";
    cout << "34";
    return 0;
}*/

/*#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    unsigned long num;
    num = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 * 11 * 12 * 13 * 14 * 15 * 16 * 17 * 18 * 19 * 20;
    cout << "20!=" << num;
    
    return 0;
}*/

/*#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int num;
    cout << "Введите высоту:";
    cin >> num;
    for (int i = 0; i < num; ++i)
    {
        for (int j = 0; j < num; ++j)
            cout << "* ";

        cout << endl;
    }
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << ' ';
        }

        for (int j = num - 3 * i; j <= num; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}*/

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
