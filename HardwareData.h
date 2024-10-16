#pragma once
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <map>
#include <string>
#include "UserDataObject.h"


namespace HWData {
	
	// forward declarations
	std::map<std::string, std::string> initDataCPU();
	std::map<std::string, std::string> initDataGPU();
	std::map<std::string, std::string> initDataRAM();


	class HWData : UserData::UserDataObject {
	private:
	protected:
		std::map<std::string, std::string> dataCPU;
		std::map<std::string, std::string> dataGPU;
		std::map<std::string, std::string> dataRAM;
	public:
		HWData() : UserData::UserDataObject() {
			this->dataCPU = initDataCPU();
			this->dataGPU = initDataGPU();
			this->dataRAM = initDataRAM();
		}

		std::map<std::string, std::string> getDataCPU() { return this->dataCPU; }
		void setDataCPU(std::map<std::string, std::string> dataCPUNew) { this->dataCPU = dataCPUNew; }

		std::map<std::string, std::string> getDataGPU() { return this->dataGPU; }
		void setDataGPU(std::map<std::string, std::string> dataGPUNew) { this->dataCPU = dataGPUNew; }

		std::map<std::string, std::string> getDataRAM() { return this->dataRAM; }
		void setDataRAM(std::map<std::string, std::string> dataRAMNew) { this->dataCPU = dataRAMNew; }
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
}
