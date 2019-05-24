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

void BookTicket::bookTicket(HomeTeam * homeTeam, Buyer * buyer, map<string,string> ticketInfo) {
	bool find = false;
	vector<Ticket *> homeTeamTickets = homeTeam->ticketCollection.getAll();
	int ticketSize = homeTeamTickets.size();

	for (int i = 0; i < ticketSize; i++) {
		if (ticketInfo["matchDate"] == homeTeamTickets[i]->matchDate && ticketInfo["matchTime"] == homeTeamTickets[i]->matchTime && ticketInfo["awayTeam"] == homeTeamTickets[i]->awayTeam && ticketInfo["seat"] == homeTeamTickets[i]->seat) {
			if (homeTeamTickets[i]->availability) {
				find = true;
				homeTeamTickets[i]->bookTicket(buyer);
			}
			else {
				cout << "�̹� ����� Ƽ���Դϴ�" << endl;
			}
			// �ٽ� Ƽ�� ���� �������̽��� ���ư�
			SearchAvailableTicketsUI::getInstance()->buyTicketInterface(buyer, homeTeam);
		}
	}

	if (find == false) 
		cout << "�ش� Ƽ���� ã�� ���߽��ϴ�." << endl;

}

BookTicket * BookTicket::inst;