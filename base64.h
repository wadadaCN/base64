#include <string>

namespace base64
{
std::string Base64Encode(const std::string& raw_str);

std::string Base64Decode(const std::string& raw_str);
}  // namespace base64