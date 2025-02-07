#pragma once

namespace core
{
    class File
    {
    public:
        static auto read(const std::string& path, int32_t mode = 0) -> std::vector<char>;

        File() = delete;
    };
}