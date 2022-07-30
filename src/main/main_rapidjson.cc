#include <iostream>
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"


int main() {
    const char* json_str = "{\"project\":\"rapidjson\",\"stars\":10}";
    rapidjson::Document doc;
    doc.Parse(json_str);
    if (doc.HasParseError()) {
        std::cout << "rapid json parse error" << std::endl;
        return EXIT_FAILURE;
    }
    
    rapidjson::Value& s = doc["stars"];
    s.SetInt(s.GetInt() + 1);
    
    rapidjson::StringBuffer sb;
    rapidjson::Writer<rapidjson::StringBuffer> writer(sb);
    doc.Accept(writer);

    std::cout << "hello json: " << sb.GetString() << std::endl;
    return EXIT_SUCCESS;
}