#include <iostream>
#include <bitset>


int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    // 4.1
    if ((a + b) % c == 0 & c % b == 0) {
        std::cout <<  (a + b) / c - c / b << std::endl;
    }
    else if ((a + b) % c == 0 & c % b != 0) {
        std::cout << (a + b) / c + b * c << std::endl;
    }
    else {
        std::cout << a - b + c << std::endl;
    }
    
    // 4.2
    int n;
    std::cin >> n;
    switch (n)
    {
        case 1: std::cout << "все хорошо" << std::endl; break;
        case 2: std::cout << "ошибка чтения файла" << std::endl; break;
        case 3: std::cout << "ошибка записи файла" << std::endl; break;
        case 4: std::cout << "не все поля определены" << std::endl; break;
    }
    
    // 4.3
    int x;
    std::cin >> x;
    if (x == 1) std::cout << "Positive number";
    else std::cout << "Negative number";
    // Самый простой вариант решения подзадачи.
  
    return 0;
}
