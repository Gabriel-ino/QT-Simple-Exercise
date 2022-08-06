#ifndef PERSON_HPP
#define PERSON_HPP

#include <QObject>
#include <QDebug>
#include <chrono>
#include <ctime>
#include <iostream>
#include <bits/stdc++.h>

class Person: public QObject
{
    Q_OBJECT
public:
    Person(const std::string &name, int age=0): name(name), age(age){};
    const void setDateToNumbers(const std::vector<int> &numbers);
    const void setAge(const std::vector<int> &todayDate);
    const void showData();
private:
    int age, day, month, year;
    const std::string name;
    std::string birth;


};

#endif // PERSON_HPP
