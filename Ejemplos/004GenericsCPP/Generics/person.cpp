#include "person.h"
#include <QString>

Person::Person(){}

Person::Person(QString firstName, QString lastName, QString career)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->career = career;
}

QString Person::getPresentation()
{
    return career + ": " + firstName + " " + lastName;
}

QString Person::toString()
{
    return this->lastName;
}

int Person::compare(Person another)
{
    int comparision = this->lastName.compare(another.lastName);
    return comparision;
}
