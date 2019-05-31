#include "stdafx.h"
#include "DataSetter.h"
#include "HomeTeamCollection.h"
#include "HomeTeam.h"
#include "Ticket.h"
#include "Buyer.h"

DataSetter::DataSetter() {
	// TODO Auto-generated constructor stub
}

DataSetter::~DataSetter() {
	// TODO Auto-generated destructor stub
}

/*
vector<HomeTeam *> DataSetter::getHomeTeams() {
	HomeTeamCollection::getInstance()

	HomeTeam* a = new HomeTeam("sk", "Seoul");
	HomeTeam* b = new HomeTeam("lg", "Ulsan");
	HomeTeam* c = new HomeTeam("doosan", "Gwangju");

	homeTeamCollection.add(a);
	homeTeamCollection.add(b);
	homeTeamCollection.add(c);

	vector<HomeTeam *> homeTeams = homeTeamCollection.getAll();
	vector<HomeTeam *> ticketSettedTeams = setDefaultTickets(homeTeams);
	return ticketSettedTeams;
}
*/
/*
vector<HomeTeam *> DataSetter::setDefaultTickets(vector<HomeTeam *> homeTeams) {
	TicketCollection tc1;
	Ticket * a1 = new Ticket(10000, "2019:05:22:12:00", "sk", "lg", "001001", false);
	Ticket * a2 = new Ticket(20000, "2019:05:19:13:00", "sk", "doosan", "M4", false);
	tc1.add(a1);
	tc1.add(a2);
	homeTeams[0]->ticketCollection = tc1;

	TicketCollection tc2;
	Ticket * b1 = new Ticket(5000, "2019:05:02:18:00", "lg", "sk", "C1", false);
	Ticket * b2 = new Ticket(8000, "2019:05:01:11:00", "lg", "doosan", "K2", false);
	tc2.add(b1);
	tc2.add(b2);
	homeTeams[1]->ticketCollection = tc2;

	TicketCollection tc3;
	Ticket * c1 = new Ticket(4000, "2019:05:10:09:00", "doosan", "sk", "L11", false);
	Ticket * c2 = new Ticket(4000, "2019:05:08:18:00", "doosan", "lg", "B50", false);
	tc3.add(c1);
	tc3.add(c2);
	homeTeams[2]->ticketCollection = tc3;

	return homeTeams;

}
*/
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
