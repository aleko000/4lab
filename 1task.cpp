#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
class cities {
public:
    void INPUT() //ввод строк в массив
    {
        std::cout << "Enter names of cities:\n";
        for (int i = 0; i < 10; i++)
        {
            setlocale(LC_ALL, "Russian");
            std::cout << i + 1 << ".";
            std::cin >> city[i];
            if (searchWord(city[i])) serial_numbers.push_back(i + 1); //функция кладущая в вектор порядковый номер слова, содержащего в конце берг
            
        }
    }
    void OUTPUT() //вывод порядковых номеров
    {
        std::cout << "Serial numbers of words, that contains \'burg\' in the end" << std::endl;
        for (int i = 0; i < serial_numbers.size(); i++)
        {
            std::cout << serial_numbers[i] << " ";
        }
    }
private:
    std::string city[10];
    std::vector <int> serial_numbers;
    std::string word1 = "burg";
    
    bool searchWord(std::string word) //функция возвр. тру если там есть бург или burg в конце
    {
        setlocale(LC_ALL, "Russian");
        if (word.size() < 4) return 0; // если размер меньше 4 букв то возвр нет
        else 
        {
            std::string temp;
            for (int i = word.size(); i > word.size() - 4; i--) // добавляем в переменную temp последние 4 буквы, чтобы потом сравнить с константами
            {
                temp.push_back(word[i - 1]);
                
            }
            std::reverse(temp.begin(), temp.end()); // переворачиваем строку потому что push back отзеркалила последние 4 буквы
            
            if (temp == word1) return 1; // если равно константе возвр тру
            else return 0;
        }
    }
};

int main()
{
    cities* obj = new cities;
    obj->INPUT();
    obj->OUTPUT();
    
}

