#ifndef SEATMANAGER_H
#define SEATMANAGER_H

//Elí Martínez- A01653876

#include <iostream>
#include <string>
#include "Flight.h"
#include "seat.h"

using namespace std;

class SeatManager
{
    private:
    bool boarding;
    Seat seatList[4][10];
    Seat seat;
    Flight flight;

    public:
    SeatManager();
    SeatManager(bool boarding);

    ~SeatManager();

    bool getBoarding();
    int emptySeats();
    bool availableSeat(string seat);
    bool windowSeat();

    void assignFlight(Flight& flight);
    void getFlight();
    void setBording(bool boarding);
    void assignSeat(Seat& seat);

};

SeatManager :: SeatManager()
{
    this->boarding = false;
}

SeatManager :: SeatManager(bool boarding)
{
    this->boarding = boarding;
}

SeatManager :: ~SeatManager()
{
    delete &this->boarding;
    delete &this->seatList;
    delete &this->seat;
    delete &this->flight;
}

bool SeatManager :: getBoarding()
{
    return this->boarding;
}

int SeatManager::emptySeats()
{
    int counter = 0;
    for (int i = 0; i < 4 ; i++)
    {
        for (int j = 0 ; j < 10; j++)
        {
            if (this->seatList[i][j].getPassenger() == " ")
            {
                counter++;
            }
        }
    }
    return counter;
}

bool SeatManager::availableSeat(string seat)
{
    for (int i = 0; i < 4 ; i++)
    {
        for (int j = 0 ; j < 10; j++)
        {
            if (this->seatList[i][j].getID() == seat)
            {
                if (this->seatList[i][j].getPassenger() != " ")
                {
                    return false;
                }
            }
        }
    }
    return true;
}

bool SeatManager :: windowSeat()
{
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (this->seatList[i][j].getPassenger() == " ")
            {
                return true;
            }
        }

        for (int i = 3; i < 4; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (this->seatList[i][j].getPassenger() == " ")
            {
                return true;
            }
        }
    }

    }
    return false;
}

void SeatManager :: assignFlight(Flight& flight)
{
    this->flight = flight;
}

void SeatManager :: getFlight()
{
    cout << this->flight.getID() << endl;
}

void SeatManager :: setBording(bool boarding)
{
    this->boarding = boarding;
}

void SeatManager::assignSeat(Seat& seat)
{
    this->seat = seat;
    int column, row;
    string c,r;
    string l[1] = {this->seat.getID()};
    string n[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    string le[4] = {"A", "B", "C", "D"};

    for (int i = 0; i < 1 ; i++)
    {
        for (int j = 0 ; j < 1; j++)
        {
            r = l[i][j];
            c = l[i][j + 1];
        }
    }

    for (int i = 0; i < 4 ; i++)
    {
        if (r == le[i])
        {
            row = i;
        }
    }

    for (int i = 0; i < 10 ; i++)
    {
        if (c == n[i])
        {
            column = i;
        }
    }

    this->seatList[row][column] = this->seat;
}
#endif