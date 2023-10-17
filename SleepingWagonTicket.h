#pragma once
#include "RailwayTicket.h"
class SleepingWagonTicket:public RailwayTicket{
		int SleepingTicketPrice;
public:
		SleepingWagonTicket();
		SleepingWagonTicket(std::string _from, std::string _to, double _price, int _SleepingTicketPrice);

		double fullPrice();

		virtual void show() const;

	};
