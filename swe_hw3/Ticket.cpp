#include "stdafx.h"
#include "Ticket.h"

Ticket::Ticket() {
	// TODO Auto-generated constructor stub
}

Ticket::Ticket(int price, string matchDate, string matchTime, string registrationDate, string homeTeam, string awayTeam, string seat) {
	this->price = price;
	this->matchDate = matchDate;
	this->matchTime = matchTime;
	this->registrationDate = registrationDate;
	this->homeTeam = homeTeam;
	this->awayTeam = awayTeam;
	this->seat = seat;
}

Ticket::~Ticket() {
	// TODO Auto-generated destructor stub
}

string Ticket::getTicket() {
	// [�������] [��¥-�ð�] [Ȩ��] [�������] [�¼���ġ] 
	return to_string(price) + " | " + matchDate + " | " + matchTime + " | " + homeTeam + " | " + awayTeam + " | " + seat;
}