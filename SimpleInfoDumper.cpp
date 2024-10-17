#include <iostream>
#include <map>
#include "AccountData.h"
#include "FirmwareData.h"
#include "HardwareData.h"
#include "NetworkData.h"
#include "UserDataObject.h"


int main() {
	std::cout << "[SIMPLE HARDWARE INFO DUMPER]" << std::endl;
	
	// data setup block
	AccData::AccountData UserAccountData;
	FirmData::FirmwareData UserFirmwareData;
	HWData::HWData UserHardwareData;
	NetData::NetworkData UserNetworkData;
	
	// user interaction block
	std::string inputStr{ "" };
	int64_t inputInt{ -1 };
	bool run{ true };
	while (run == true) {
		std::cout << "\nSelect data to view:\n"
			"0 - Exit\n"
			"1 - Account\n"
			"2 - Hardware\n"
			"3 - Network\n"
			"ENTER INPUT: ";
		std::cout << std::endl;
		std::cin >> inputStr;
		inputInt = std::stoi(inputStr);
		switch (inputInt) {
		case 0:		// exit
			std::cout << "Program terminating..." << std::endl;
			run = false;
			break;
		case 1:		// account
			//
			break;
		case 2:		// hardware
			//
			break;
		case 3:		// network
			//
			break;
		default:
			std::cout << "Unrecognized input." << std::endl;
		}
	}

	// end block
	std::cout << "Program finished. Press 'Enter' to terminate this window.";
	std::cin.clear();
	std::cin.get();
	return 0;
}
