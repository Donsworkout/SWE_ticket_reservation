#include "stdafx.h"
#include "TicketCollection.h"
#include "Ticket.h"

TicketCollection::TicketCollection() {
	// TODO Auto-generated constructor stub

}

TicketCollection::~TicketCollection() {
	// TODO Auto-generated destructor stub
}

vector<Ticket *> TicketCollection::getAll() {
	return tickets;
}

void TicketCollection::add(Ticket * ticket) {
	tickets.push_back(ticket);
}