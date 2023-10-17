#include "RailwayTicket.h"
#include <string>
#include <iostream>

RailwayTicket::RailwayTicket(){
	this->from = "Burgas";
	this->to = "Sofiq";
	this->price = 16.90;
}

RailwayTicket::RailwayTicket(std::string _from, std::string _to, double _price){
	this->from = _from;
	this->to = _to;
	this->price = _price;
}

bool RailwayTicket::operator<(const RailwayTicket& second) const
{
	return (*this<second);
	//return from<second.from;
}

bool RailwayTicket::operator>(const RailwayTicket& second) const
{
	return !(*this < second);
}

bool RailwayTicket::operator<=(const RailwayTicket& second) const
{
	return *this < second || *this == second;
}

bool RailwayTicket::operator>=(const RailwayTicket& second) const
{
	return *this > second || *this == second;
}

bool RailwayTicket::operator==(const RailwayTicket& second) const
{
	return this->from == second.from
		&& this->to == second.to
		&& this->price == second.price;
}

bool RailwayTicket::operator!=(const RailwayTicket& second) const
{
	return  !(*this == second);
}

void RailwayTicket::show() const{
	std::cout << "From:" << from << " To: " << to << " Price: " << price;
}
