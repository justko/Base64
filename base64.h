#pragma once
#include<string>
namespace ko{
    class Base64{
        private:
        static const std::string baseString;
        public:
        static std::string base64Encode(const std::string& s);
        static std::string base64Decode(const std::string& s);
    };
}