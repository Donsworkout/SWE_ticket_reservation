#include "stdafx.h"
#include "HomeTeam.h"
#include "Ticket.h"

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

vector<Ticket *> HomeTeam::listAvailableTickets() {
	return ticketCollection.getAll();
}