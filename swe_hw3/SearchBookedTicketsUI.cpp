#include "stdafx.h"
#include "SearchBookedTicketsUI.h"
#include "SearchBookedTickets.h"
#include "Buyer.h"

SearchBookedTicketsUI::SearchBookedTicketsUI()
{
}


SearchBookedTicketsUI::~SearchBookedTicketsUI()
{
}

void SearchBookedTicketsUI::showBookedList(Buyer * buyer) {
	cout << "\n=============== " + buyer->getName() + "���� Ƽ�� ���� ���� ================\n\n";
	cout << "���Ű��� | ��⳯¥ | ���ð� | Ȩ   �� | �� �� �� �� | �¼���ġ" << endl;
	SearchBookedTickets::getInstance()->listBookedTickets(buyer);
	cout << "==============================================================================\n\n";
}

SearchBookedTicketsUI * SearchBookedTicketsUI::inst;