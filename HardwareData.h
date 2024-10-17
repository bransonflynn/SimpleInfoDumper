#pragma once
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <map>
#include <string>
#include "UserDataObject.h"
#include <string>


namespace HWData {
	
	// forward declarations
	std::map<std::string, std::string> initDataCPU();
	std::map<std::string, std::string> initDataGPU();
	std::map<std::string, std::string> initDataRAM();
	std::map<std::string, std::string> initDataDisplay();


	class HWData : UserData::UserDataObject {
	private:
	protected:
		std::map<std::string, std::string> dataCPU;
		std::map<std::string, std::string> dataGPU;
		std::map<std::string, std::string> dataRAM;
		std::map<std::string, std::string> dataDisplay;
	public:
		HWData() : UserData::UserDataObject() {
			this->dataCPU = initDataCPU();
			this->dataGPU = initDataGPU();
			this->dataRAM = initDataRAM();
			this->dataDisplay = initDataDisplay();
		}

		std::map<std::string, std::string> getDataCPU() { return this->dataCPU; }
		void setDataCPU(std::map<std::string, std::string> dataCPUNew) { this->dataCPU = dataCPUNew; }
		std::string getDataKeyValueCPU(std::string key) { return this->dataCPU.at(key); }

		std::map<std::string, std::string> getDataGPU() { return this->dataGPU; }
		void setDataGPU(std::map<std::string, std::string> dataGPUNew) { this->dataCPU = dataGPUNew; }
		std::string getDataKeyValueGPU(std::string key) { return this->dataGPU.at(key); }

		std::map<std::string, std::string> getDataRAM() { return this->dataRAM; }
		void setDataRAM(std::map<std::string, std::string> dataRAMNew) { this->dataCPU = dataRAMNew; }
		std::string getDataKeyValueRAM(std::string key) { return this->dataRAM.at(key); }

		std::map<std::string, std::string> getDataDisplay() { return this->dataDisplay; }
		void setDataDisplay(std::map<std::string, std::string> dataDisplayNew) { this->dataDisplay = dataDisplayNew; }
		std::string getDataKeyValueDisplay(std::string key) { return this->dataDisplay.at(key); }
	};


	std::map<std::string, std::string> initDataCPU() {
		std::map<std::string, std::string> result;
		SYSTEM_INFO siSysInfo;
		GetSystemInfo(&siSysInfo);
		result["NumProcessors"] = std::to_string(static_cast<int>(siSysInfo.dwNumberOfProcessors));
		result["ProcessorType"] = std::to_string(static_cast<int>(siSysInfo.dwProcessorType));
		return result;
	}


	std::map<std::string, std::string> initDataGPU() {
		std::map<std::string, std::string> result;
		//
		return result;
	}


	std::map<std::string, std::string> initDataRAM() {
		std::map<std::string, std::string> result;
		//
		return result;
	}


	std::map<std::string, std::string> initDataDisplay() {
		std::map<std::string, std::string> result;
		//
		return result;
	}
}
