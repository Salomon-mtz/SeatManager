#ifndef SEAT_H
#define SEAT_H

//Elí Martínez- A01653876

#include <iostream>
#include <string>
#include "Passenger.h"
using namespace std;

class Seat 
{
    private:
        string id, type;
        Passenger p;

    public:
        Seat();
        Seat(string id, string type);

        ~Seat();

        string getID();
        string getType();
        string getPassenger();


        void setID (string id);
        void setType (string type);

        void addPassengers(Passenger& p);
};

Seat :: Seat()
{
    this->id = "None";
    this->type = "None";
}

Seat :: Seat(string id, string type)
{
    this->id = id;
    this->type = type;
}

Seat :: ~Seat()
{
    delete &this->id;
    delete &this->type;
    delete &this->p;
}

string Seat :: getID()
{
    return this->id;
}

string Seat :: getType()
{
    return this->type;
}

string Seat :: getPassenger()
{
    return this->p.getName();
}

void Seat :: setID(string id)
{
    this->id = id;
}

void Seat :: setType(string type)
{
    this->type = type;
}

void Seat :: addPassengers(Passenger& p)
{
    this->p = p;
}
#endif
