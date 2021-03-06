/*
 * TicketMachine.h
 *
 *  Created on: 2017年1月13日
 *      Author: LYL
 */

#ifndef TICKETMACHINE_H_
#define TICKETMACHINE_H_

class TicketMachine {
public:
	TicketMachine();
	virtual ~TicketMachine();
	void showPrompt();			// 提示
	void getMoney(int money);
	void printTicket();
	void showBalance();			// 余额
	void printError();
private:
	const int PRICE;
	int balance;
	int total;
};

#endif /* TICKETMACHINE_H_ */
