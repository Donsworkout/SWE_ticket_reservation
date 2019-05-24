#include "stdafx.h"
#include "Ticket.h"
#include "Buyer.h"

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
	this->availability = true;
}

Ticket::~Ticket() {
	// TODO Auto-generated destructor stub
}

Ticket * Ticket::getTicket() {
	return this;
}

// [Èñ¸Á°¡°Ý] [³¯Â¥-½Ã°£] [È¨ÆÀ] [¾î¿þÀÌÆÀ] [ÁÂ¼®À§Ä¡]
void Ticket::bookTicket(Buyer * buyer) {
	buyer->purchasedTickets.add(this);
	timeSold = "1111";
	availability = false;
	cout << "¿¹¾à ¼º°ø" << endl;
	cout << "[" + to_string(price) + "] " + "[" + matchDate + " " + matchTime + "] " + "[" + homeTeam + "] " + "[" + awayTeam + "] " + "[" + seat + "] " << endl;
}