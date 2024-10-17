#pragma once
#include <map>
#include <iostream>
#include <vector>


namespace UserData {
	
	// tracks amount of UserData child objects created
	static std::uint32_t idCounter{ 0 };

	// shared functions and also superclass for this program's data objects
	class UserDataObject {
	private:
	protected:
		std::uint32_t id;
	public:
		UserDataObject() {
			this->id = idCounter, idCounter++;
		}

		std::uint32_t getId() { return this->id; }
		void setId(std::uint32_t idNew) { this->id = idNew; }
		void modId(std::uint32_t amount) { this->id += amount, idCounter++; }
	};


	void printMap(std::map<std::string, std::string> dataMap) {
		std::map<std::string, std::string>::iterator it = dataMap.begin();
		while (it != dataMap.end()) {
			std::cout << it->first << " = " << it->second << std::endl;
			++it;
		}
	}

	void printVectorMap(std::vector<std::map<std::string, std::string>> dataVec) {
		for (std::size_t i = 0; i < dataVec.size(); i++) {
			std::map<std::string, std::string> dataVecElem = dataVec.at(i);
			UserData::printMap(dataVecElem);
			std::cout << std::endl;
		}
	}
}
