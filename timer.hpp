#ifndef TIMER_HPP
#define TIMER_HPP

#include <QObject>
#include <iostream>
#include <chrono>
#include <ctime>
#include <iostream>
#include <map>

const std::map<std::string, int>MONTH_MAP{{"Jan", 1}, {"Feb",2}, {"Mar", 3}, {"Apr", 4}, {"May",5}, {"Jun", 6}, {"Jul", 7},
                                          {"Aug", 8}, {"Sep", 9}, {"Oct", 10}, {"Nov", 11}, {"Dec", 12}};


class Timer: public QObject
{
    Q_OBJECT
public:
    Timer();
    const std::vector<int> getTodayDate();
    const void showTodayInfo();
    const std::vector<int>splitDate(const std::string &date);

private:
    int today_year, today_day, today_month;

};

#endif // TIMER_HPP
