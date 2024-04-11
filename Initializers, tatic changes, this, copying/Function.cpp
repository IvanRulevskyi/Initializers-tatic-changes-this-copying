#include "Function.hpp"


string Person::getName() const
{
    return name;
}

void Apartament::addResident(Person person)
{
    resident.push_back(person);
}

void Apartament::prinrPerson()
{
    cout<<"Жильцы квартиры"<<endl;
    for (size_t i = 0; i < resident.size(); i++)
    {
        totalResidents+=1;
        cout<<resident[i].getName()<<endl;
    }
}
int Apartament::getTotalResidents()
{
    return totalResidents;
}

void House::addApartament(Apartament apartament)
{
    apartaments.push_back(apartament);
}

void House::printApartments()
{
    for (size_t i = 0; i < apartaments.size(); i++)
    {
        totalApartments+=1;
        cout << "Квартира " << i + 1 << endl;
        apartaments[i].prinrPerson();
        cout << endl;
    }
}
int House::getTotalApartments()
{
    return totalApartments;
}
