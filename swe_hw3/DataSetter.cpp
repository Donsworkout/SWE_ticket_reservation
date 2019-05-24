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

	HomeTeam* a = new HomeTeam("Doosan_Bears", "Seoul");
	HomeTeam* b = new HomeTeam("Lotte_Giants", "Ulsan");
	HomeTeam* c = new HomeTeam("Kia_Tigers", "Gwangju");

	homeTeamCollection.add(a);
	homeTeamCollection.add(b);
	homeTeamCollection.add(c);

	vector<HomeTeam *> homeTeams = homeTeamCollection.getAll();
	vector<HomeTeam *> ticketSettedTeams = setDefaultTickets(homeTeams);
	return ticketSettedTeams;
}

vector<HomeTeam *> DataSetter::setDefaultTickets(vector<HomeTeam *> homeTeams) {
	TicketCollection tc1;
	Ticket * a1 = new Ticket(10000, "20180504", "14:00", "20180501", "Doosan_Bears", "Lotte_Giants", "A1");
	Ticket * a2 = new Ticket(20000, "20180503", "15:00", "20180502", "Doosan_Bears", "Kia_Tigers", "M4");
	tc1.add(a1);
	tc1.add(a2);
	homeTeams[0]->ticketCollection = tc1;

	TicketCollection tc2;
	Ticket * b1 = new Ticket(5000, "20180506", "10:00", "20180501", "Lotte_Giants", "Doosan_Bears", "C1");
	Ticket * b2 = new Ticket(8000, "20180505", "11:00", "20180502", "Lotte_Giants", "Kia_Tigers", "K2");
	tc2.add(b1);
	tc2.add(b2);
	homeTeams[1]->ticketCollection = tc2;

	TicketCollection tc3;
	Ticket * c1 = new Ticket(4000, "20180507", "09:00", "20180501", "Kia_Tigers", "Doosan_Bears", "L11");
	Ticket * c2 = new Ticket(4000, "20180508", "19:00", "20180502", "Kia_Tigers", "Lotte_Giants", "B50");
	tc3.add(c1);
	tc3.add(c2);
	homeTeams[2]->ticketCollection = tc3;

	return homeTeams;

}

vector<Buyer *> DataSetter::getBuyers() {
	vector<Buyer *> buyers;

	Buyer * b1 = new Buyer("donsdev", "1234", "donkim", "931123-1111111", "경기도 성남시 분당구", "donsdevko@gmail.com");
	Buyer * b2 = new Buyer("ming", "1111", "mingmi", "950108-2000000", "경기도 고양시 일산동구", "zzimin95@gmail.com");
	Buyer * b3 = new Buyer("peakman", "2222", "peakachu", "921023-1131111", "서울시 동작구", "picha@gmail.com");

	buyers.push_back(b1);
	buyers.push_back(b2);
	buyers.push_back(b3);

	return buyers;
}

DataSetter * DataSetter::inst;
