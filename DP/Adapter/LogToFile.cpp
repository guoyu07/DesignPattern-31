/*
 * LogToFile.cpp
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#include "LogToFile.h"

#include <iostream>

LogToFile::LogToFile(std::string fileName)
{
	/* ��֤�ļ����Ƿ�Ϸ�*/

	this->fileName = fileName;
}

std::vector<Logger> LogToFile::readLog()
{
	std::cout << "Read all log from file." << std::endl;
	std::vector<Logger> v;
	return v;
}

void LogToFile::writeLog(const std::vector<Logger>& logVector)
{
	std::cout << "Write logs into file" << std::endl;
}


