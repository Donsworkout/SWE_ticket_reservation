#include "stdafx.h"
#include "HomeTeam.h"

HomeTeam::HomeTeam() {

}

HomeTeam::~HomeTeam() {

}

//constructor overloading
HomeTeam::HomeTeam(string name, string city) {
	this->name = name;
	this->city = city;
}


HomeTeam HomeTeam::getHomeTeam() {
	return * this;
}

string HomeTeam::getName() {
	return this->name;
}

void HomeTeam::listAvailableTickets() {
	vector<Ticket *> tickets = ticketCollection.getAll();
	int ticketsSize = tickets.size();
	 
	// 벡터 받아와서 정렬을 명시하고 출력할 것인지, 아니면 아래처럼 정렬 데이터 미리 넣고 갈 것인지
	cout << "\n===================================================================" << endl;
	cout << "가 격 | 경기날짜 | 경기시간 | 홈   팀 | 어 웨 이 팀 | 좌석" << endl;
	for (int i = 0; i < ticketsSize; i++) {
		cout << tickets[i]->getTicket() << endl;
	}
	cout << "===================================================================" << endl;
}