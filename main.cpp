#include <QCoreApplication>
#include <memory>

#include "person.hpp"
#include "timer.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::string birthDate;
    std::cout << "Type your birth date (dd/mm/yyyy): ";
    std::cin >> birthDate;
    if (birthDate.size() != 10){
        throw std::invalid_argument("Invalid Format");
    }

    std::shared_ptr<Timer> timer = std::make_shared<Timer>();
    std::shared_ptr<Person> person = std::make_shared<Person>("Gabriel");

    birthDate.erase(birthDate.begin() + 2);
    birthDate.erase(birthDate.begin() + 4);

    std::vector<int> todayDate = timer->getTodayDate();

    std::vector<int> splitter = timer->splitDate(birthDate);
    person->setDateToNumbers(splitter);
    person->setAge(todayDate);

    person->showData();

    return a.exec();
}
