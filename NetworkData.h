#pragma once
#include <iostream>
#include <map>
#include "UserDataObject.h"


namespace NetData {

	// forward declarations
	static std::string initIPv4();
	static std::string initIPv6();

	class NetworkData : UserData::UserDataObject {
	private:
	protected:
		std::string IPv4;
		std::string IPv6;
	public:
		NetworkData() : UserDataObject::UserDataObject() {
			this->IPv4 = initIPv4();
			this->IPv6 = initIPv6();
		};

		std::string getIPv4() { return this->IPv4; }
		void setIPv4(std::string IPv4New) { this->IPv4 = IPv4New; }

		std::string getIPv6() { return this->IPv6; }
		void setIPv6(std::string IPv6New) { this->IPv6 = IPv6New; }
	};


	std::string initIPv4() {
		std::string result{ "" };
		return result;
	}

	std::string initIPv6() {
		std::string result{ "" };
		return result;
	}
}
