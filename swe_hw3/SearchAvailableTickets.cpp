#include "stdafx.h"
#include "SearchAvailableTickets.h"
#include "SearchAvailableTicketsUI.h"
#include "DataSetter.h"
#include "HomeTeam.h"

SearchAvailableTickets::SearchAvailableTickets()
{
}


SearchAvailableTickets::~SearchAvailableTickets()
{
}

/*
void SearchAvailableTickets::startSearch(Buyer * buyer) {
	vector<HomeTeam *> homeTeams = DataSetter::getInstance()->getHomeTeams();
	cout << homeTeams.size() << endl;
	//SearchAvailableTicketsUI::getInstance()->startInterface(buyer, );
}
*/

vector<Ticket *> SearchAvailableTickets::showAvailableTickets(HomeTeam * homeTeam) {
	return homeTeam->listAvailableTickets();
}

SearchAvailableTickets * SearchAvailableTickets::inst;