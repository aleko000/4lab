#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
class surname {
public:
    void INPUT() //ввод строк в массив
    {
        std::cout << "Enter surnames:\n";
        for (int i = 0; i < 20; i++)
        {
            
            std::cout << i + 1 << ".";
            std::cin >> surnames[i];  
            int temp = letter_count(surnames[i]); 
            if (temp > number_longest_surname) // если функция возвр число больше максимального то обновляем 
            {
                longest_surname.clear();
                longest_surname += surnames[i];
                number_longest_surname = temp;
            }
        }
    }
    void OUTPUT()
    {
        std::cout << "The longest surname consists of " << number_longest_surname << " books. It is " << longest_surname << std::endl;
    }
private:
    std::string surnames[20];
    int number_longest_surname = 0;
    std::string longest_surname = "abc"; // уже инициализирована чтоб подвести алгоритм под общий шаблон

    int letter_count(std::string word) //считаем буквы без дефиса
    {
        int counter = 0;
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] != '-') counter++;
        }
        return counter;
    }
    
        
};

int main()
{
    
    surname* obj = new surname;
    obj->INPUT();
    obj->OUTPUT();
}
