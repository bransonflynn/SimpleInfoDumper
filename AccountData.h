#pragma once
#include <iostream>
#include <cstdlib>
#include <map>
#include <windows.h>
#include "UserDataObject.h"


namespace AccData {

	// forward declarations
	std::string initUsername();

	class AccountData : UserData::UserDataObject {
	private:
	protected:
		std::string username;
	public:
		AccountData() : UserDataObject::UserDataObject() {
			this->username = initUsername();
		};

		std::string getUsername() { return this->username; }
		void setUsername(std::string usernameNew) { this->username = usernameNew;  }
	};


	std::string initUsername() {
		// windows only afaik
		char* username{ nullptr };
		std::size_t len{ 0 };

		if (_dupenv_s(&username, &len, "USERNAME") == 0 && username != nullptr) {
			std::string usernameStr = static_cast<std::string>(username);
			free(username);
			return usernameStr;
		}
		else {
			return "ErrorMissingUsername";
		}
	}
}
