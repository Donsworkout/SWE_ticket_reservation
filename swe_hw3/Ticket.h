#pragma once
#include "stdafx.h"

using namespace std;

class Ticket {
private: 
	int price;
	string matchDate;
	string matchTime;
	string timeSold;
	string registrationDate;
	string homeTeam;
	string awayTeam;
	string seat;

	//bool limitedTimeAuction;
	bool availability;

public:
	string getTicket();
	Ticket();
	Ticket(int, string, string, string, string, string, string);
	virtual ~Ticket();
};