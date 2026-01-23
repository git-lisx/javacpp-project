
#ifndef MULTIPLYDEMOPROJECT_NATIVELIBRARY_H
#define MULTIPLYDEMOPROJECT_NATIVELIBRARY_H

#include <string>

namespace NativeLibrary
{
    class NativeClass
    {
    public:
        const std::string& get_property() const;
        void set_property(const std::string& property);
        std::string property;
    };
}


#endif //MULTIPLYDEMOPROJECT_NATIVELIBRARY_H
