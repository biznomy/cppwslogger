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

// remain
	void updateJson(Object& obj, std::string key, std::string value);

// remain
	std::string createJsonString(Object obj);

};

#endif /* UTIL_JSONUTIL_HPP_ */
