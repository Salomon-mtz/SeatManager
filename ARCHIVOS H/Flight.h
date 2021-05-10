#ifndef FLIGHT_H
#define FLIGHT_H

//Elí Martínez- A01653876

#include <iostream>
#include <string>
using namespace std;

//------------------------------------------------------------------------------------------------

//Fligth Class and attributes
class Flight
{
  private:
    string airline, origin, destiny, id, departureTime;
    bool delayed;

  public:
    //Constructors
    Flight();
    Flight(string airline, string origin, string destiny, string id, string departureTime, bool delayed);

    //Destructor
    ~Flight();

    //Getting Methods
    string getAirline();
    string getOrigin();
    string getDestiny();
    string getID();
    string getDepartureTime();
    bool getDelayed();


    //Setting Methods
    void setAirline(string airline);
    void setOrigin(string origin);
    void setDestiny(string destiny);
    void setID(string id);
    void setDepartureTime(string departureTime);
    void setDelayed(bool delayed);

};

//Default Class
Flight :: Flight()
{
  this->airline = " ";
  this->origin = " ";
  this->destiny = " ";
  this->id = " ";
  this->departureTime = " ";
  this->delayed = false;
}

//Explicit Class
Flight :: Flight (string airline, string origin, string destiny, string id, string departureTime, bool delayed)
{
  this->airline = airline;
  this->origin = origin;
  this->destiny = destiny;
  this->id = id;
  this->departureTime = departureTime;
  this->delayed = delayed;
}

//Destructor
Flight :: ~Flight()
{
  delete &this->airline;
  delete &this->origin;
  delete &this->destiny;
  delete &this->id;
  delete &this->departureTime;
  delete &this->delayed;
}

//Setting method
void Flight :: setAirline(string airline)
{
  this->airline = airline;
}
void Flight :: setOrigin(string origin)
{
  this->origin = origin;
}
void Flight :: setDestiny(string destiny)
{
  this->destiny = destiny;
}
void Flight :: setID(string id)
{
  this->id = id;
}
void Flight :: setDepartureTime(string departureTime)
{
  this->departureTime = departureTime;
}
void Flight :: setDelayed(bool delayed)
{
  this->delayed = delayed;
}

//Getting methods
string Flight :: getAirline()
{
  return this->airline;
}
string Flight :: getOrigin()
{
  return this->origin;
}
string Flight :: getDestiny()
{
  return this->destiny;
}
string Flight :: getID()
{
  return this->id;
}
string Flight :: getDepartureTime()
{
  return this->departureTime;
}
bool Flight :: getDelayed()
{
  return this->delayed;
}
#endif