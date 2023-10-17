#include "SleepingWagonTicket.h"
#include "RailwayTicket.h"

SleepingWagonTicket::SleepingWagonTicket(){

}

SleepingWagonTicket::SleepingWagonTicket(std::string _from, std::string _to, double _price, int _SleepingTicketPrice) :RailwayTicket(_from, _to, _price), SleepingTicketPrice(_SleepingTicketPrice) {
	this->SleepingTicketPrice = _SleepingTicketPrice;
}

double SleepingWagonTicket::fullPrice()
{
	return SleepingTicketPrice;
}

void SleepingWagonTicket::show() const{
	RailwayTicket::show();
	//std::cout << "Full Price: " << fullPrice << std::endl;
}
