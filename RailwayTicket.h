#pragma once
#include <string>
#include <iostream>

class RailwayTicket {
private:
	std::string from;
	std::string to;
protected:
	double price;
public:
	RailwayTicket();
	RailwayTicket(std::string _from, std::string _to, double _price);



	bool operator<(const RailwayTicket& second)const;
	bool operator>(const RailwayTicket& second) const;

	bool operator<=(const RailwayTicket& second)const;
	bool operator>=(const RailwayTicket& second) const;

	bool operator==(const RailwayTicket& second) const;
	bool operator!=(const RailwayTicket& second) const;

	virtual void show() const;
};