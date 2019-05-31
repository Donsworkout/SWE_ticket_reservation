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

Ticket * BookTicket::bookTicket(HomeTeam * homeTeam, Buyer * buyer, map<string,string> ticketInfo) {
	vector<Ticket *> homeTeamTickets = homeTeam->getTicketCollection()->getTickets();

	// Ȩ�� Ƽ���� ������ ��ġ�ϴ� Ƽ�� ������ ���� ��
	for (int i = 0; i < homeTeamTickets.size(); i++) {
		if (homeTeamTickets[i]->getAvailability() && ticketInfo["matchDate"] == homeTeamTickets[i]->getMatchDate() && ticketInfo["awayTeam"] == homeTeamTickets[i]->getAwayTeam() && ticketInfo["seat"] == homeTeamTickets[i]->getSeat()) {
			homeTeamTickets[i]->bookTicket(buyer);
			return homeTeamTickets[i];
		}
	}

	return NULL;
}

BookTicket * BookTicket::inst;