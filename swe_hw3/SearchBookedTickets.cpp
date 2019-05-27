#include "stdafx.h"
#include "SearchBookedTickets.h"
#include "Buyer.h";
#include "Ticket.h";
#include "TicketCollection.h";

SearchBookedTickets::SearchBookedTickets()
{
}


SearchBookedTickets::~SearchBookedTickets()
{
}

void SearchBookedTickets::listBookedTickets(Buyer * buyer) {
	vector<Ticket *> tickets = buyer->bookedTickets.getAll();
	int ticketsSize = tickets.size();
	// 티켓 소팅
	sort(tickets.begin(), tickets.end(), Ticket::compare);
	for (int i = 0; i < ticketsSize; i++) {
		Ticket * ticket = tickets[i]->getTicket();
		cout << to_string(ticket->price) + " | " + ticket->matchDate + " | " + ticket->matchTime + " | " + ticket->homeTeam + " | " + ticket->awayTeam + " | " + ticket->seat << endl;
	}
}

SearchBookedTickets * SearchBookedTickets::inst;