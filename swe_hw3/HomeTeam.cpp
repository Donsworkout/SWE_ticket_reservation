#include "stdafx.h"
#include "HomeTeam.h"
#include "Ticket.h"

HomeTeam::HomeTeam() {

}

HomeTeam::~HomeTeam() {

}

//constructor overloading
HomeTeam::HomeTeam(string name, string city) {
	this->name = name;
	this->city = city;
}


HomeTeam HomeTeam::getHomeTeam() {
	return * this;
}

string HomeTeam::getName() {
	return this->name;
}

void HomeTeam::listAvailableTickets() {
	vector<Ticket *> tickets = ticketCollection.getAll();
	int ticketsSize = tickets.size();
	// 티켓 소팅
	sort(tickets.begin(), tickets.end(), Ticket::compare);
	for (int i = 0; i < ticketsSize; i++) {
		Ticket * ticket = tickets[i]->getTicket();
		// 가능한 티켓만 출력
		if (ticket->availability) {
			// [희망가격] [날짜-시간] [홈팀] [어웨이팀] [좌석위치] 
			cout << to_string(ticket->price) + " | " + ticket->matchDate + " | " + ticket->matchTime + " | " + ticket->homeTeam + " | " + ticket->awayTeam + " | " + ticket->seat << endl;
		}
	}
}