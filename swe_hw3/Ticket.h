#pragma once
#include "stdafx.h"
class Buyer;

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
	// algorithm sorting �� Ŀ���� �񱳿� function ����
	static bool compare(Ticket * me, Ticket * other) {
		if (me->matchDate < other->matchDate) {
			return true;
		}
		else if (me->matchDate > other->matchDate) {
			return false;
		}
		else {
			if (me->matchTime < other->matchTime) {
				return true;
			}
			else {
				return false;
			}
		}
	}
	//void bookTicket(Buyer *);
};