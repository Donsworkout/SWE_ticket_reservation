#pragma once
#include "stdafx.h"
#include "Buyer.h"

using namespace std;

class Ticket {
private: 
	string timeSold;
	string registrationDate;

	//bool limitedTimeAuction;

public:
	Ticket();
	Ticket(int, string, string, string, string, string, string);
	virtual ~Ticket();

	bool availability;
	string matchDate;
	string matchTime;
	string homeTeam;
	string awayTeam;
	string seat;
	int price;

	Ticket * getTicket();
	//void bookTicket(Buyer *);
};