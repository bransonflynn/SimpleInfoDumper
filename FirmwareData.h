#pragma once
#include <iostream>
#include <map>
#include "UserDataObject.h"


namespace FirmData {

	std::map<std::string, std::string> initDriverInfoCPU();
	std::map<std::string, std::string> initDriverInfoGPU();
	
	class FirmwareData : UserData::UserDataObject {
	private:
	protected:
		std::map<std::string, std::string> driverInfoCPU;
		std::map<std::string, std::string> driverInfoGPU;
	public:
		FirmwareData() : UserData::UserDataObject() {
			this->driverInfoCPU = initDriverInfoCPU();
			this->driverInfoGPU = initDriverInfoGPU();
		}

		std::map<std::string, std::string> getDriverInfoCPU() { return this->driverInfoCPU; }
		void setDriverInfoCPU(std::map<std::string, std::string> driverInfoCPUNew) { this->driverInfoCPU = driverInfoCPUNew; }
		std::string getDriverInfoKeyValueCPU(std::string key) { return this->driverInfoCPU.at(key); }

		std::map<std::string, std::string> getDriverInfoGPU() { return this->driverInfoGPU; }
		void setDriverInfoGPU(std::map<std::string, std::string> driverInfoGPUNew) { this->driverInfoGPU = driverInfoGPUNew; }
		std::string getDriverInfoKeyValueGPU(std::string key) { return this->driverInfoGPU.at(key); }
	};


	std::map<std::string, std::string> initDriverInfoCPU() {
		std::map<std::string, std::string> result;
		//
		return result;
	}


	std::map<std::string, std::string> initDriverInfoGPU() {
		std::map<std::string, std::string> result;
		//
		return result;
	}
}
