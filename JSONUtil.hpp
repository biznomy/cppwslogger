/*
 * JSONUtil.hpp
 *
 *  Created on: 06-Oct-2016
 *      Author: pravesh
 */

#ifndef UTIL_JSONUTIL_HPP_
#define UTIL_JSONUTIL_HPP_

#include "Poco/JSON/Parser.h"
#include "Poco/JSON/ParseHandler.h"
#include "Poco/JSON/Stringifier.h"
#include "Poco/JSON/Array.h"

using Poco::JSON::ParseHandler;
using Poco::JSON::Stringifier;
using Poco::JSON::Object;
using Poco::JSON::Parser;
using Poco::Dynamic::Var;
using Poco::JSON::Array;

class JSONUtil {
public:

	JSONUtil();

	virtual ~JSONUtil();

	void updateJson(Object& obj, std::string key, std::string value);

	std::string createJsonString(Object obj);

	bool parse(std::string& stringVal);

	std::string findStrVal(std::string& json, const std::string& name);

	int findIntVal(std::string& json, const std::string& name);

};

#endif /* UTIL_JSONUTIL_HPP_ */
