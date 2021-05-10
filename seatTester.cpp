//Elí Martínez- A01653876
#include <iostream>
#include <string>

#include "seat.h"
#include "Passenger.h"
#include "Flight.h"
#include "seatManager.h"

using namespace std;

int main()
{
    //Flight
    Flight *f = new Flight("Volaris", "Mexico", "Cancún", "Vol765", "13:00", false); //Flight created
    f->setAirline("Aeromexico");
    f->setOrigin("Buenos Aires");
    f->setDestiny("Barcelona");
    f->setID("AER678");
    f->setDepartureTime("06:00");
    f->setDelayed(true);
    cout << "Fligth: " << endl;
    cout << "Airline: " << f->getAirline() << endl;
    cout << "Origin: " << f->getOrigin() << endl; 
    cout << "Destiny: " << f->getDestiny() << endl; 
    cout << "ID: " << f->getID() << endl; 
    cout << "Departure Time: " << f->getDepartureTime() << endl; 
    cout << "Delayed: " << boolalpha << f->getDelayed() << endl;

    //Passengers
    Passenger *p1 = new Passenger(); //Passenger created
    p1->setName("Luis, González");
    p1->setNationallity("Mexican");
    p1->setAge(19);
    p1->setPassport("A0986789");
    p1->setFreqTraveller(true);
    cout << "\n\nPassenger 1" << endl;
    cout << "Name: " << p1->getName() << endl;
    cout << "Nationallity: " << p1->getNationallity() << endl; 
    cout << "Age: " << p1->getAge() << endl; 
    cout << "Passport: " << p1->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p1->getFreqTraveller() << endl; 


    Passenger *p2 = new Passenger("Rodrigo, Martínez", "Mexican", "A0986789", 19, false); //Passenger created
    cout << "\n\nPassenger 2" << endl;
    cout << "Name: " << p2->getName() << endl;
    cout << "Nationallity: " << p2->getNationallity() << endl; 
    cout << "Age: " << p2->getAge() << endl; 
    cout << "Passport: " << p2->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p2->getFreqTraveller() << endl; 

    Passenger *p3 = new Passenger("Isabel, Pérez", "Mexican", "A0986789", 19, true); //Passenger created
    cout << "\n\nPassenger 3" << endl;
    cout << "Name: " << p3->getName() << endl;
    cout << "Nationallity: " << p3->getNationallity() << endl; 
    cout << "Age: " << p3->getAge() << endl; 
    cout << "Passport: " << p3->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p3->getFreqTraveller() << endl; 

    Passenger *p4 = new Passenger("Manolo, Bravo", "Mexican", "A0986789", 18, false); //Passenger created
    cout << "\n\nPassenger 4" << endl;
    cout << "Name: " << p4->getName() << endl;
    cout << "Nationallity: " << p4->getNationallity() << endl; 
    cout << "Age: " << p4->getAge() << endl; 
    cout << "Passport: " << p4->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p4->getFreqTraveller() << endl; 

    Passenger *p5 = new Passenger("Tania, Vázquez", "Mexican", "A0986789", 19, false); //Passenger created
    cout << "\n\nPassenger 5" << endl;
    cout << "Name: " << p5->getName() << endl;
    cout << "Nationallity: " << p5->getNationallity() << endl; 
    cout << "Age: " << p5->getAge() << endl; 
    cout << "Passport: " << p5->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p5->getFreqTraveller() << endl; 

    Passenger *p6 = new Passenger("Andrea, Gastón", "Mexican", "A0986789", 20, true); //Passenger created
    cout << "\n\nPassenger 6" << endl;
    cout << "Name: " << p6->getName() << endl;
    cout << "Nationallity: " << p6->getNationallity() << endl; 
    cout << "Age: " << p6->getAge() << endl; 
    cout << "Passport: " << p6->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p6->getFreqTraveller() << endl; 

    Passenger *p7 = new Passenger("Elizabeth, Gloria", "Mexican", "A0986789", 20, false); //Passenger created
    cout << "\n\nPassenger 7" << endl;
    cout << "Name: " << p7->getName() << endl;
    cout << "Nationallity: " << p7->getNationallity() << endl; 
    cout << "Age: " << p7->getAge() << endl; 
    cout << "Passport: " << p7->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p7->getFreqTraveller() << endl; 

    Passenger *p8 = new Passenger("Citlali, Lemus", "Mexican", "A0986789", 19, true); //Passenger created
    cout << "\n\nPassenger 8" << endl;
    cout << "Name: " << p8->getName() << endl;
    cout << "Nationallity: " << p8->getNationallity() << endl; 
    cout << "Age: " << p8->getAge() << endl; 
    cout << "Passport: " << p8->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p8->getFreqTraveller() << endl; 

    Passenger *p9 = new Passenger("Mónica, González", "Mexican", "A0986789", 22, true); //Passenger created
    cout << "\n\nPassenger 9" << endl;
    cout << "Name: " << p9->getName() << endl;
    cout << "Nationallity: " << p9->getNationallity() << endl; 
    cout << "Age: " << p9->getAge() << endl; 
    cout << "Passport: " << p9->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p9->getFreqTraveller() << endl; 

    Passenger *p10 = new Passenger("Elí, Martínez", "Mexican", "A0986789", 21, false); //Passenger created
    cout << "\n\nPassenger 10" << endl;
    cout << "Name: " << p10->getName() << endl;
    cout << "Nationallity: " << p10->getNationallity() << endl; 
    cout << "Age: " << p10->getAge() << endl; 
    cout << "Passport: " << p10->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p10->getFreqTraveller() << endl; 

    Passenger *p11 = new Passenger("Samuel, Fernández", "Mexican", "A0986789", 19, true); //Passenger created
    cout << "\n\nPassenger 11" << endl;
    cout << "Name: " << p11->getName() << endl;
    cout << "Nationallity: " << p11->getNationallity() << endl; 
    cout << "Age: " << p11->getAge() << endl; 
    cout << "Passport: " << p11->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p11->getFreqTraveller() << endl; 

    Passenger *p12 = new Passenger("Sergio, Gómez", "Mexican", "A0986789", 20, false); //Passenger created
    cout << "\n\nPassenger 12" << endl;
    cout << "Name: " << p12->getName() << endl;
    cout << "Nationallity: " << p12->getNationallity() << endl; 
    cout << "Age: " << p12->getAge() << endl; 
    cout << "Passport: " << p12->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p12->getFreqTraveller() << endl; 

    Passenger *p13 = new Passenger("Enrique, Castañeda", "Mexican", "A0986789", 21, true); //Passenger created
    cout << "\n\nPassenger 13" << endl;
    cout << "Name: " << p13->getName() << endl;
    cout << "Nationallity: " << p13->getNationallity() << endl; 
    cout << "Age: " << p13->getAge() << endl; 
    cout << "Passport: " << p13->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p13->getFreqTraveller() << endl; 

    Passenger *p14 = new Passenger("Sofía, Martínez", "Mexican", "A0986789", 18, true); //Passenger created
    cout << "\n\nPassenger 14" << endl;
    cout << "Name: " << p14->getName() << endl;
    cout << "Nationallity: " << p14->getNationallity() << endl; 
    cout << "Age: " << p14->getAge() << endl; 
    cout << "Passport: " << p14->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p14->getFreqTraveller() << endl; 

    Passenger *p15 = new Passenger("Valentina, Rojas", "Mexican", "A0986789", 19, true); //Passenger created
    cout << "\n\nPassenger 15" << endl;
    cout << "Name: " << p15->getName() << endl;
    cout << "Nationallity: " << p15->getNationallity() << endl; 
    cout << "Age: " << p15->getAge() << endl; 
    cout << "Passport: " << p15->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p15->getFreqTraveller() << endl; 

    Passenger *p16 = new Passenger("Patricia, Hernández", "Mexican", "A0986789", 22, false); //Passenger created
    cout << "\n\nPassenger 16" << endl;
    cout << "Name: " << p16->getName() << endl;
    cout << "Nationallity: " << p16->getNationallity() << endl; 
    cout << "Age: " << p16->getAge() << endl; 
    cout << "Passport: " << p16->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p16->getFreqTraveller() << endl; 

    Passenger *p17 = new Passenger("Paula, Solis", "Mexican", "A0986789", 24, true); //Passenger created
    cout << "\n\nPassenger 17" << endl;
    cout << "Name: " << p17->getName() << endl;
    cout << "Nationallity: " << p17->getNationallity() << endl; 
    cout << "Age: " << p17->getAge() << endl; 
    cout << "Passport: " << p17->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p17->getFreqTraveller() << endl; 

    Passenger *p18 = new Passenger("Fernanda, González", "Mexican", "A0986789", 21, false); //Passenger created
    cout << "\n\nPassenger 18" << endl;
    cout << "Name: " << p18->getName() << endl;
    cout << "Nationallity: " << p18->getNationallity() << endl; 
    cout << "Age: " << p18->getAge() << endl; 
    cout << "Passport: " << p18->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p18->getFreqTraveller() << endl; 

    Passenger *p19 = new Passenger("Patricio, Pérez", "Mexican", "A0986789", 20, true); //Passenger created
    cout << "\n\nPassenger 19" << endl;
    cout << "Name: " << p19->getName() << endl;
    cout << "Nationallity: " << p19->getNationallity() << endl; 
    cout << "Age: " << p19->getAge() << endl; 
    cout << "Passport: " << p19->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p19->getFreqTraveller() << endl; 

    Passenger *p20 = new Passenger("Mauricio, Márquez", "Mexican", "A0986789", 22, true); //Passenger created
    cout << "\n\nPassenger 20" << endl;
    cout << "Name: " << p20->getName() << endl;
    cout << "Nationallity: " << p20->getNationallity() << endl; 
    cout << "Age: " << p20->getAge() << endl; 
    cout << "Passport: " << p20->getPassport() << endl; 
    cout << "Frequent Traveller: " << boolalpha << p20->getFreqTraveller() << endl; 

    //Seat
    Seat *s1 = new Seat("A0", "Economic"); //Seat created
    Seat *s2 = new Seat("A1", "Economic"); //Seat created
    Seat *s3 = new Seat("A2", "Economic"); //Seat created
    Seat *s4 = new Seat("A3", "Economic"); //Seat created
    Seat *s5 = new Seat("A4", "Economic"); //Seat created
    Seat *s6 = new Seat("A5", "Economic"); //Seat created
    Seat *s7 = new Seat("A6", "Economic"); //Seat created
    Seat *s8 = new Seat("A7", "Economic"); //Seat created 
    Seat *s9 = new Seat("A8", "Economic"); //Seat created
    Seat *s10 = new Seat("A9", "Economic"); //Seat created 
    Seat *s11 = new Seat("B0", "Economic"); //Seat created
    Seat *s12 = new Seat("B1", "Economic"); //Seat created 
    Seat *s13 = new Seat("B2", "Economic"); //Seat created
    Seat *s14 = new Seat("B3", "Economic"); //Seat created
    Seat *s15 = new Seat("B4", "Economic"); //Seat created
    Seat *s16 = new Seat("B5", "Economic"); //Seat created
    Seat *s17 = new Seat("B6", "Economic"); //Seat created
    Seat *s18 = new Seat("B7", "Economic"); //Seat created
    Seat *s19 = new Seat("B8", "Economic"); //Seat created
    Seat *s20 = new Seat("B9", "Economic"); //Seat created
    Seat *s21 = new Seat("C0", "Economic"); //Seat created
    Seat *s22 = new Seat("C1", "Economic"); //Seat created
    Seat *s23 = new Seat("C2", "Economic"); //Seat created
    Seat *s24 = new Seat("C3", "Economic"); //Seat created
    Seat *s25 = new Seat("C4", "Economic"); //Seat created
    Seat *s26 = new Seat("C5", "Economic"); //Seat created
    Seat *s27 = new Seat("C6", "Economic"); //Seat created
    Seat *s28 = new Seat("C7", "Economic"); //Seat created
    Seat *s29 = new Seat("C8", "Economic"); //Seat created
    Seat *s30 = new Seat("C9", "Economic"); //Seat created
    Seat *s31 = new Seat("D0", "Economic"); //Seat created
    Seat *s32 = new Seat("D1", "Economic"); //Seat created
    Seat *s33 = new Seat("D2", "Economic"); //Seat created
    Seat *s34 = new Seat("D3", "Economic"); //Seat created
    Seat *s35 = new Seat("D4", "Economic"); //Seat created
    Seat *s36 = new Seat("D5", "Economic"); //Seat created
    Seat *s37 = new Seat("D6", "Economic"); //Seat created
    Seat *s38 = new Seat("D7", "Economic"); //Seat created
    Seat *s39 = new Seat("D8", "Economic"); //Seat created
    Seat *s40 = new Seat("D9", "Economic"); //Seat created
    
    s9->addPassengers(*p1);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s9->getPassenger() << endl;
    cout << "ID: " << s9->getID() << endl;
    cout << "Type: " << s9->getType() << endl;
    s2->addPassengers(*p2); //Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s2->getPassenger() << endl;
    s3->addPassengers(*p3);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s3->getPassenger() << endl;
    s25->addPassengers(*p4);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s25->getPassenger() << endl;
    s1->addPassengers(*p5);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s1->getPassenger() << endl;
    s5->addPassengers(*p6);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s5->getPassenger() << endl;
    s31->addPassengers(*p7);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s31->getPassenger() << endl;
    s38->addPassengers(*p8);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s38->getPassenger() << endl;
    s7->addPassengers(*p9);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s7->getPassenger() << endl;
    s12->addPassengers(*p10);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s12->getPassenger() << endl;
    s11->addPassengers(*p11);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s11->getPassenger() << endl;
    s29->addPassengers(*p12);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s29->getPassenger() << endl;
    s33->addPassengers(*p13);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s33->getPassenger() << endl;
    s32->addPassengers(*p14);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s32->getPassenger() << endl;
    s20->addPassengers(*p15);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s20->getPassenger() << endl;
    s22->addPassengers(*p16);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s22->getPassenger() << endl;
    s26->addPassengers(*p17);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s26->getPassenger() << endl;
    s27->addPassengers(*p18);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s27->getPassenger() << endl;
    s37->addPassengers(*p19);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s37->getPassenger() << endl;
    s40->addPassengers(*p20);//Passenger added to a seat
    cout << "\n\nPassenger's Name: " << s40->getPassenger() << endl;

    //SeatPassenger
    SeatManager *sm1 = new SeatManager(false);
    sm1->assignFlight(*f); //Flight assigned to the SeatManager class
    cout << "\n\nYour flight ID is: "; 
    sm1->getFlight(); //Getter method for the flight

    //Seats assigned to passengers
    sm1->assignSeat(*s9);
    sm1->assignSeat(*s2);
    sm1->assignSeat(*s3);
    sm1->assignSeat(*s25);
    sm1->assignSeat(*s1);
    sm1->assignSeat(*s5);
    sm1->assignSeat(*s31);
    sm1->assignSeat(*s38);
    sm1->assignSeat(*s7);
    sm1->assignSeat(*s12);
    sm1->assignSeat(*s11);
    sm1->assignSeat(*s29);
    sm1->assignSeat(*s33);
    sm1->assignSeat(*s32);
    sm1->assignSeat(*s20);
    sm1->assignSeat(*s22);
    sm1->assignSeat(*s26);
    sm1->assignSeat(*s27);
    sm1->assignSeat(*s37);
    sm1->assignSeat(*s40);

    cout << "The flight boarding status is: " << boolalpha << sm1->getBoarding() << endl;
    sm1->setBording(true);
    cout << "The new flight boarding status is: " << boolalpha << sm1->getBoarding() << endl;
    cout << "Is this seat available? " << sm1->availableSeat("D9") << endl;
    cout << "Total empty seats: " << sm1->emptySeats() << endl;
    cout << "Are there still window seats?? " << sm1->windowSeat() << endl;

    return 0;  
}