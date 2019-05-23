#include "stdafx.h"
#include "TicketCollection.h"

TicketCollection::TicketCollection() {
	// TODO Auto-generated constructor stub

}

TicketCollection::~TicketCollection() {
	// TODO Auto-generated destructor stub
}

vector<Ticket *> TicketCollection::getAll() {
	return Tickets;
}

void TicketCollection::add(Ticket * ticket) {
	Tickets.push_back(ticket);
}