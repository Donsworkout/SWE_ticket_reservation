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


string HomeTeam::getName() {
	return name;
}