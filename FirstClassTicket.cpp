#include "FirstClassTicket.h"
#include "RailwayTicket.h"
FirstClassTicket::FirstClassTicket():RailwayTicket()
{
	this->PercentOverPrice=2;
}

FirstClassTicket::FirstClassTicket(std::string _from, std::string _to, double _price, int _PercentOverPrice) 
	:RailwayTicket(_from, _to, _price), PercentOverPrice(_PercentOverPrice)
{
	this->PercentOverPrice = _PercentOverPrice;
}



double FirstClassTicket::fullPrice() {
	PercentOverPrice = PercentOverPrice / 100;
	double newPrice = price * PercentOverPrice +price;
	return  newPrice;
	
}
void FirstClassTicket::show() const
{
	RailwayTicket::show();
	//std::cout << "Full Price: " << fullPrice << std::endl;
}
