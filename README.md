# Base64
一个Base64编码解码C++实现
## 正确的食用方法

#include"base64.h"
#include<string>
#include<iostream>
int main(){
    std::string s=ko::Base64::base64Encode("fuckyourmom");
    std::cout<<s<<std::endl;
    std::string ori=ko::Base64::base64Decode(s);
    std::cout<<ori<<std::endl;
    return 0;
}
