#include "file.hpp"

namespace core
{
    auto File::read(const std::string& path, const int32_t mode) -> std::vector<char>
    {
        std::ifstream stream(path, std::ios::ate | mode);
        assert(stream.is_open());

        const auto size = stream.tellg();
        assert(size > 0);

        std::vector<char> content(size);

        stream.seekg(0, std::ios::beg);
        stream.read(content.data(), size);

        return content;
    }
}