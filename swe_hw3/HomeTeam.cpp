#include "stdafx.h"
#include "HomeTeam.h"

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
	sort(tickets.begin(), tickets.end(), TicketCollection::compare);
	cout << "\n===================================================================" << endl;
	cout << "가 격 | 경기날짜 | 경기시간 | 홈   팀 | 어 웨 이 팀 | 좌석" << endl;
	for (int i = 0; i < ticketsSize; i++) {
		Ticket * ticket = tickets[i]->getTicket();
		// 가능한 티켓만 출력
		if (ticket->availability) {
			// [희망가격] [날짜-시간] [홈팀] [어웨이팀] [좌석위치] 
			cout << to_string(ticket->price) + " | " + ticket->matchDate + " | " + ticket->matchTime + " | " + ticket->homeTeam + " | " + ticket->awayTeam + " | " + ticket->seat << endl;
		}
	}
	cout << "===================================================================" << endl;
}