#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <vector>



using namespace std;

// from Dmitriev and Kulikovberg






int main()
{
    //list1[] = {}
    setlocale(LC_ALL, "Russian");
    
    int x;
    int count = 0;
    
    bool ContinueInput = true;
    

    
    while (ContinueInput)
    {
        //std::vector<std::string> anton = {"Anton", "88005553535", "anton@mail.ru"};
        std::vector<std::string> timur = {"Timur", "89225252525", "ilovearchlinux@gmail.com"};
        
        //std::string input;  я люблю std:: ничего не поделать... 
        

        std::string input;
        
        std::cout << "Выберите действие:\n1. Поменять местами программистов и дизайнеров\n2. Удалить\n3. Изменить\n4. Сохранить в файл\n5. Выход из программы" << std::endl;
        cin >> x;
        
        if (x == 1)
        {
            std::cout << "Введите направление сюда: " << std::endl;

            cin >> input; // True

            //anton.insert(anton.begin() + 1, input);
            timur.insert(timur.end(), input);

            std::cout <<"\n\n\tИтак,\nСодержимое timur: "<< std::endl;

            for (const auto& str : timur)
            {
                std::cout << str << std::endl;
            }
            
            
            //cout <<  

            




            
            //cout << input << endl;
            //ContinueInput = false;
            


            
        }


        else if (x == 2)
        {
            cout << " Не хватает времени дописать прогу, нужно закинуть в гит, простите " << endl;
            
        }

        else if (x == 3)
        {
            cout << " Не хватает времени дописать прогу, нужно закинуть в гит, простите " << endl;
            
        }

        if (x == 4)
        {
            cout << " Не хватает времени дописать прогу, нужно закинуть в гит, простите " << endl;
            
        }
    
        else if (x == 5)
        {
            //count = 1;
            cout << "Выход из программы... " << endl;
            ContinueInput = false;
            
        }
    }
    
        //if(x == not int)
        //{
            
        //}
    




    
    return 0;
}


