/*
 * JSONUtil.cpp
 *
 *  Created on: 06-Oct-2016
 *      Author: ubuntu
 */

#include "JSONUtil.hpp"

#include <memory>
#include <cstring>

JSONUtil::JSONUtil() {
	// TODO Auto-generated constructor stub
}

JSONUtil::~JSONUtil() {
	// TODO Auto-generated destructor stub
}
//used only
void JSONUtil::updateJson(Object& obj, std::string key, std::string value) {
	obj.set(key, value);
}


//used only
std::string JSONUtil::createJsonString(Object obj) {
	std::ostringstream os;
	obj.stringify(os, 2);
	return os.str();
}
