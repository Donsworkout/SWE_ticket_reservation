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

void SearchAvailableTickets::startSearch(Buyer * buyer, vector<HomeTeam *> availableTeams) {
	SearchAvailableTicketsUI::getInstance()->startInterface(buyer, availableTeams);
}

void SearchAvailableTickets::showAvailableTickets(HomeTeam * homeTeam) {
	homeTeam->listAvailableTickets();
}

SearchAvailableTickets * SearchAvailableTickets::inst;