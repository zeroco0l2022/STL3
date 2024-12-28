// STL3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
     // Создаем вектор из 10 элементов
   std::vector<int> numbers(10);
   
   // Пример использования generate
   int counter = 0;
   std::generate(numbers.begin(), numbers.end(), [&counter]() { return counter++; });
   
   // Вывод результата generate
   std::cout << "После generate: ";
   for (const int num : numbers) {
       std::cout << num << " ";
   }
   std::cout << "\n";
   
   // Пример использования transform (умножаем каждый элемент на 2)
   std::transform(numbers.begin(), numbers.end(), numbers.begin(),
                 [](const int n) { return n * 2; });
   
   // Вывод результата transform
   std::cout << "После transform: ";
   for (const int num : numbers) {
       std::cout << num << " ";
   }
   std::cout << "\n";
   
   // Пример использования remove (удаляем числа больше 3)
   const auto new_end = std::remove_if(numbers.begin(), numbers.end(), 
                               [](const int n) { return n > 3; });
   
   // Вывод результата remove
   std::cout << "После remove: ";
   for (auto it = numbers.begin(); it != new_end; ++it) {
       std::cout << *it << " ";
   }
   std::cout << "\n";
   
   return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
