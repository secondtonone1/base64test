#ifndef __MSG_BASE64_H__
#define __MSG_BASE64_H__
#include <string>

std::string base64_encode(unsigned char const* , unsigned int len);
std::string base64_decode(std::string const& s);

#endif
