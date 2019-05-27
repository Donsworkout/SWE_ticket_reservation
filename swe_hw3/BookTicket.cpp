#include "stdafx.h"
#include "BookTicket.h"
#include "Ticket.h"
#include "HomeTeam.h"
#include "SearchAvailableTicketsUI.h"

BookTicket::BookTicket()
{
}


BookTicket::~BookTicket()
{
}

bool BookTicket::bookTicket(HomeTeam * homeTeam, Buyer * buyer, map<string,string> ticketInfo) {
	vector<Ticket *> homeTeamTickets = homeTeam->ticketCollection.getAll();
	int ticketSize = homeTeamTickets.size();

	for (int i = 0; i < ticketSize; i++) {
		if (homeTeamTickets[i]->availability && ticketInfo["matchDate"] == homeTeamTickets[i]->matchDate && ticketInfo["matchTime"] == homeTeamTickets[i]->matchTime && ticketInfo["awayTeam"] == homeTeamTickets[i]->awayTeam && ticketInfo["seat"] == homeTeamTickets[i]->seat) {
			homeTeamTickets[i]->bookTicket(buyer);
			return true;
		}
	}

	return false;
}

BookTicket * BookTicket::inst;