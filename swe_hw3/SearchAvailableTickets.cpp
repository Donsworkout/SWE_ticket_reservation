#include "stdafx.h"
#include "SearchAvailableTickets.h"
#include "SearchAvailableTicketsUI.h"
#include "DataSetter.h"

SearchAvailableTickets::SearchAvailableTickets()
{

}


SearchAvailableTickets::~SearchAvailableTickets()
{
}

void SearchAvailableTickets::startSearch() {
	vector<HomeTeam *> homeTeams = DataSetter::getInstance()->getHomeTeams();
	vector<HomeTeam *> availableTeams = DataSetter::getInstance()->setDefaultTickets(homeTeams);
	SearchAvailableTicketsUI::getInstance()->startInterface(availableTeams);
}


SearchAvailableTickets * SearchAvailableTickets::inst;