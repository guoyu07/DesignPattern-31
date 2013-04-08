/*
 * Player.h
 *
 *  Created on: 2013-4-8
 *      Author: Administrator
 */

#ifndef PLAYER_H_
#define PLAYER_H_


#include "Observer.h"

#include <iostream>
#include <string>

class Player:public Observer
{
public:
	Player(std::string n):name(n){}
	~Player(){}

	std::string getName()const;

	void help();

	void beAttacked(ControlCenter * cc);

private:
	std::string name;
};

std::string Player::getName()const
{
	return name;
}

void Player::help()
{
	std::cout << "Hold on. " << name << " ����֧Ԯ��." << std::endl;
}

void Player::beAttacked(ControlCenter * cc)
{
	std::cout << name << "�ܵ�����, �������֧Ԯ." << std::endl;

	cc->notifyObserver(name);

}

#endif /* PLAYER_H_ */
