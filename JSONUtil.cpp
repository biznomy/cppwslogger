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

}

JSONUtil::~JSONUtil() {

}

void JSONUtil::updateJson(Object& obj, std::string key, std::string value) {
	obj.set(key, value);
}

std::string JSONUtil::createJsonString(Object obj) {
	std::ostringstream os;
	obj.stringify(os, 2);
	return os.str();
}

bool JSONUtil::parse(std::string& stringVal) {
	try {

		Parser parser;
		Var result = parser.parse(stringVal);
		Object::Ptr pObj = result.extract<Object::Ptr>();

	} catch (...) {
		return false;
	}
	return true;
}

std::string JSONUtil::findStrVal(std::string& json, const std::string& name = "") {
	Parser parser;
	Var result = parser.parse(json);
	Object::Ptr object = result.extract<Object::Ptr>();
	Var test = object->get(name);
	std::string value = test.convert<std::string>();
	return value;
}

int JSONUtil::findIntVal(std::string& json, const std::string& name = "") {
	Parser parser;
	Var result = parser.parse(json);
	Object::Ptr object = result.extract<Object::Ptr>();
	Var test = object->get(name);
	int value = test.convert<int>();
	return value;
}
