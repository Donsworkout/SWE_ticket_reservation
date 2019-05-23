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
	 
	// ���� �޾ƿͼ� ������ ����ϰ� ����� ������, �ƴϸ� �Ʒ�ó�� ���� ������ �̸� �ְ� �� ������
	cout << "\n===================================================================" << endl;
	cout << "�� �� | ��⳯¥ | ���ð� | Ȩ   �� | �� �� �� �� | �¼�" << endl;
	for (int i = 0; i < ticketsSize; i++) {
		cout << tickets[i]->getTicket() << endl;
	}
	cout << "===================================================================" << endl;
}