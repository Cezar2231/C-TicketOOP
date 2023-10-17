#pragma once
#include "RailwayTicket.h"
class FirstClassTicket:public RailwayTicket{

	int PercentOverPrice;
public:
	FirstClassTicket();
	FirstClassTicket(std::string _from, std::string _to, double _price, int _PercentOverPrice);

	double fullPrice();

	virtual void show() const;

};


