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
            
            std::cout << i + 1 << ".";
            std::cin >> city[i];
            if (searchChar(city[i])) serial_numbers.push_back(i + 1); //функция кладущая в вектор порядковый номер слова, содержащего не менее 3 букв о

        }
    }
    void OUTPUT() //вывод порядковых номеров
    {
        std::cout << "Serial numbers of words, that contains 3 \'o\'" << std::endl;
        for (int i = 0; i < serial_numbers.size(); i++)
        {
            std::cout << serial_numbers[i] << " ";
        }
    }
private:
    std::string city[10];
    std::vector <int> serial_numbers;
    

    

    bool searchChar(std::string word) //функция возвр тру если не менее 3 букв о в слове
    {
        int counter = 0;//перем для подсчета
            for (int i = 0; i < word.size(); i++) 
            {
                if (word[i] == 'o' || word[i] == 'O') counter++;
            }
            

            if (counter >= 3) return 1; // если не меньше 3 возвр тру
            else return 0;
        
    }
};

int main()
{
    cities* obj = new cities;
    obj->INPUT();
    obj->OUTPUT();

}
