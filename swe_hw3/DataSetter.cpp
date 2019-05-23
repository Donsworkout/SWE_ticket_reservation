#include "stdafx.h"
#include "DataSetter.h"
#include "HomeTeamCollection.h"

DataSetter::DataSetter() {
	// TODO Auto-generated constructor stub
}

DataSetter::~DataSetter() {
	// TODO Auto-generated destructor stub
}

vector<HomeTeam *> DataSetter::getHomeTeams() {
	HomeTeamCollection homeTeamCollection;

	HomeTeam* a = new HomeTeam("Doosan Bears", "Seoul");
	HomeTeam* b = new HomeTeam("Lotte Giants", "Ulsan");
	HomeTeam* c = new HomeTeam("Kia Tigers", "Gwangju");

	homeTeamCollection.add(a);
	homeTeamCollection.add(b);
	homeTeamCollection.add(c);

	vector<HomeTeam *> homeTeams = homeTeamCollection.getAll();

	return homeTeams;
}

vector<HomeTeam *> DataSetter::setDefaultTickets(vector<HomeTeam *> homeTeams) {
	TicketCollection tc1;
	Ticket * a1 = new Ticket(10000, "20180503", "14:00", "20180501", "Doosan Bears", "Lotte Giants", "A1");
	Ticket * a2 = new Ticket(20000, "20180504", "15:00", "20180502", "Doosan Bears", "Kia Tigers", "M4");
	tc1.add(a1);
	tc1.add(a2);
	homeTeams[0]->ticketCollection = tc1;

	TicketCollection tc2;
	Ticket * b1 = new Ticket(5000, "20180505", "10:00", "20180501", "Lotte Giants", "Doosan Bears", "C1");
	Ticket * b2 = new Ticket(8000, "20180506", "11:00", "20180502", "Lotte Giants", "Kia Tigers", "K2");
	tc2.add(b1);
	tc2.add(b2);
	homeTeams[1]->ticketCollection = tc2;

	TicketCollection tc3;
	Ticket * c1 = new Ticket(4000, "20180507", "09:00", "20180501", "Kia Tigers", "Doosan Bears", "L11");
	Ticket * c2 = new Ticket(4000, "20180508", "19:00", "20180502", "Kia Tigers", "Lotte Giants", "B50");
	tc3.add(c1);
	tc3.add(c2);
	homeTeams[2]->ticketCollection = tc3;

	return homeTeams;

}

DataSetter * DataSetter::inst;
