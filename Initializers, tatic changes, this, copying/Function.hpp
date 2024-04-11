#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person
{
private:
    string name;
public:
    Person(string name):
    name (name){}
    string getName() const;
};

class Apartament
{
private:
    vector<Person>resident;
    static int totalResidents;
    
public:
    void addResident(Person person);
    void prinrPerson();
    int getTotalResidents();
};

class House
{
private:
    vector<Apartament> apartaments;
    static int totalApartments;
public:
    void addApartament(Apartament apartament);
    void printApartments();
    int getTotalApartments();
};
