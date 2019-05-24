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
	sort(tickets.begin(), tickets.end(), TicketCollection::compare);
	cout << "\n===================================================================" << endl;
	cout << "�� �� | ��⳯¥ | ���ð� | Ȩ   �� | �� �� �� �� | �¼�" << endl;
	for (int i = 0; i < ticketsSize; i++) {
		Ticket * ticket = tickets[i]->getTicket();
		// ������ Ƽ�ϸ� ���
		if (ticket->availability) {
			// [�������] [��¥-�ð�] [Ȩ��] [�������] [�¼���ġ] 
			cout << to_string(ticket->price) + " | " + ticket->matchDate + " | " + ticket->matchTime + " | " + ticket->homeTeam + " | " + ticket->awayTeam + " | " + ticket->seat << endl;
		}
	}
	cout << "===================================================================" << endl;
}