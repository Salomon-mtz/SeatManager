#ifndef PASSENGER_H
#define PASSENGER_H

//Elí Martínez- A01653876

#include <iostream>
#include <string>
using namespace std;

//------------------------------------------------------------------------------------------------

//Passenger class and attributes
class Passenger
{
  private:

    string name, nationallity, passport;
    int age;
    bool freqTraveller;

  public:
    //Constructors
    Passenger ();
    Passenger(string name, string nationallity, string passport, int age, bool freqTraveller);

    //Destructor
    ~Passenger();

    //Getting Methods
    string getName();
    string getNationallity();
    int getAge();
    string getPassport();
    bool getFreqTraveller();

    //Setting Methods
    void setName(string name);
    void setNationallity(string nationallity);
    void setAge(int age);
    void setPassport(string passport);
    void setFreqTraveller(bool freqTraveller);
};

//Default class 
Passenger :: Passenger()
{
  this->name = " ";
  this->nationallity = " ";
  this->age = 0;
  this->passport = " ";
  this->freqTraveller = false;
}

//Explicit class
Passenger :: Passenger(string name, string nationallity,  string passport, int age, bool freqTraveller)
{
  this->name = name;
  this->nationallity = nationallity;
  this->age = age;
  this->passport = passport;
  this->freqTraveller = freqTraveller;
}

//Destructor 
Passenger :: ~Passenger()
{
  delete &this->name;
  delete &this->nationallity;
  delete &this->age;
  delete &this->passport;
  delete &this->freqTraveller;
}

//Setting methods
void Passenger :: setName(string name)
{
  this->name = name;
}
void Passenger :: setNationallity(string nationallity)
{
  this->nationallity = nationallity;
}
void Passenger :: setAge(int age)
{
  this->age = age;
}
void Passenger :: setPassport(string passport)
{
  this->passport = passport;
}
void Passenger :: setFreqTraveller(bool freqTraveller)
{
  this->freqTraveller = freqTraveller;
}

//Getting methods
string Passenger :: getName()
{
  return this->name;
}
string Passenger :: getNationallity()
{
  return this->nationallity;
}
int Passenger :: getAge()
{
  return this->age;
}
string Passenger :: getPassport()
{
  return this->passport;
}
bool Passenger :: getFreqTraveller()
{
  return this->freqTraveller;
}
#endif