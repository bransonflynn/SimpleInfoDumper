#pragma once
#include <map>
#include <iostream>
#include <vector>


namespace UserData {
	
	// shared functions and also superclass for this program's data objects
	class UserDataObject {
	private:
	protected:
	public:
		UserDataObject() {
			
		}
	};


	void printDataMap(std::map<std::string, std::string> dataMap) {
		std::map<std::string, std::string>::iterator it = dataMap.begin();
		while (it != dataMap.end()) {
			std::cout << it->first << " = " << it->second << std::endl;
			++it;
		}
	}

	void printDataVectorMap(std::vector<std::map<std::string, std::string>> dataVec) {
		for (std::size_t i = 0; i < dataVec.size(); i++) {
			std::map<std::string, std::string> dataVecElem = dataVec.at(i);
			UserData::printDataMap(dataVecElem);
			std::cout << std::endl;
		}
	}
}
