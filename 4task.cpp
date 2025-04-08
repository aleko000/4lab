#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
class girls {
public:
    void INPUT() //ввод строк в массив
    {
        std::cout << "Enter names of girls:\n";
        for (int i = 0; i < 10; i++)
        {

            std::cout << i + 1 << ".";
            std::cin >> first_arr[i];
            if (searchChar(first_arr[i])) second_arr.push_back(first_arr[i]); //кладём в вектор строку, если там нет буквы р

        }
    }
    void OUTPUT() //вывод порядковых номеров
    {   
        std::sort(second_arr.begin(), second_arr.end());
        std::cout << "The strings are sorted alphabetically:" << std::endl;
        for (int i = 0; i < second_arr.size(); i++)
        {
            std::cout << second_arr[i] << " ";
        }
    }
private:
    std::string first_arr[10];
    std::vector<std::string> second_arr;




    bool searchChar(std::string word) //функция возвр тру если не менее 3 букв о в слове
    {
        int counter = 0;//перем для подсчета
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] == 'r' || word[i] == 'R') counter++;
        }
        

        if (counter >= 1) return 0; // если больше равно 1 возвр фолс
        else return 1;

    }
    
};

int main()
{
    
    girls* obj = new girls;
    obj->INPUT();
    obj->OUTPUT();

}
