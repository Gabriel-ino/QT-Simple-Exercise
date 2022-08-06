#include "person.hpp"
#include <string.h>

const void Person::setDateToNumbers(const std::vector<int> &numbers){
   day = numbers[0];
   month = numbers[1];
   year = numbers[2];

   birth = std::to_string(day) + '/' + std::to_string(month) + '/' + std::to_string(year);
}

const void Person::showData(){
    std::cout << "Name: " << name << '\n';
    std::cout << "Birth: " << birth << '\n';
    std::cout << "Age: " << age << '\n';

}

const void Person::setAge(const std::vector<int> &todayDate){
    if (todayDate[0] == day && todayDate[1] == month && todayDate[2] == year){
        std::cout << "It's your birthday!!! Congratulations!!\n";
        age = todayDate[2] - year;
        std::cout << "Now you have " << age << " years old!\n";
    }else{
        if (todayDate[1] < month){
            age = todayDate[2] - year - 1;
        }else{
            if (todayDate[1] > month){
                age = todayDate[2] - year;
            }else{
                age = todayDate[2] - year - 1;
            }
        }
    }
}
