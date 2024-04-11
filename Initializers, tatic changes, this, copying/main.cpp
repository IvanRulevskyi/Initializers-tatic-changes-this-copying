#include "Function.hpp"
int Apartament::totalResidents = 0;
int House::totalApartments = 0;
int main()
{
    Person person1("Ivan");
    Person person2("Nikita");
    Person person3("Egor");
    
    Apartament apartament;
    
    Apartament apartament1;
    apartament1.addResident(person1);
    apartament1.addResident(person2);
    apartament1.addResident(person3);
    
    Apartament apartament2;
    apartament2.addResident(person1);
    apartament2.addResident(person3);
    
    House house;
    house.addApartament(apartament1);
    house.addApartament(apartament2);
    
    house.printApartments();
    cout<<"Квартир в доме: "<<house.getTotalApartments()<<endl;
    cout<<"Жильцов в доме: "<<apartament.getTotalResidents()<<endl;
    
}
