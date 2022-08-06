#include "timer.hpp"
#include <stdexcept>
#include <string>

Timer::Timer()
{
    getTodayDate();
    showTodayInfo();

}
const std::vector<int> Timer::getTodayDate(){
    auto init = std::chrono::system_clock::now();
    auto end = std::chrono::system_clock::now();
    std::time_t endTime = std::chrono::system_clock::to_time_t(end);

    char * todayDate = ctime(&endTime);

    std::string dateToString(todayDate);

    today_year = std::stoi(dateToString.substr(20, 4));
    std::string monthString = dateToString.substr(4, 3);
    today_day = std::stoi(dateToString.substr(9, 1));
    today_month = MONTH_MAP.find(monthString)->second;
    std::vector<int> vecDate{today_day, today_month, today_year};

    return vecDate;


}

const void Timer::showTodayInfo(){
    std::cout << "-----TODAY'S INFO-----\n\n\n";
    std::cout << "Day: " << today_day << '\n';
    std::cout << "Month: " << today_month << '\n';
    std::cout << "Year: " << today_year << '\n' << "----------------------\n";

}

const std::vector<int> Timer::splitDate(const std::string &date){

    std::vector<int>splitted{std::stoi(date.substr(0, 2)),std::stoi(date.substr(2,2)),std::stoi(date.substr(4,4))};

    return splitted;


}
