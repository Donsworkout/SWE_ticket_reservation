#pragma once
#include "stdafx.h"
class Buyer;

using namespace std;

class Ticket {
private: 
	int price;
	string matchDate; // �Ľ� �ʿ� (�߰��� ���� date typeȮ���ҰԿ�..)
	string homeTeam;
	string awayTeam;
	string seat;
	bool limitedTimeAuction;
	string timeSold;
	string registrationDate;
	bool availability;


public:
	Ticket();
	// TODO : registrationDate ����ð� �������� �����ڿ��� ���־�� �ϴ� ���� �ƴ���
	// price / matchDate / homeTeam / awayTeam / seat / limitedTimeAuction
	Ticket(int, string, string, string, string, bool);

	virtual ~Ticket();

	bool bookTicket(Buyer *);
	Ticket * getTicket();

	// getter / setter
	int getPrice();

	string getMatchDate();

	string getHomeTeam();

	string getAwayTeam();

	string getSeat();

	bool getLimitedTimeAuction();

	bool getAvailability();

	string getRegistrationDate();

	string getTimeSold();

	// algorithm sorting �� Ŀ���� �񱳿� function ����
	static bool compare(Ticket * me, Ticket * other) {
		string mmd = me->getMatchDate();
		string omd = other->getMatchDate();
		mmd.erase(remove(mmd.begin(), mmd.end(), ':'), mmd.end());
		omd.erase(remove(omd.begin(), omd.end(), ':'), omd.end());

		if (atoi(mmd.c_str()) < atoi(omd.c_str())){
			return true;
		}
		else {
			return false;
		}
	}
};