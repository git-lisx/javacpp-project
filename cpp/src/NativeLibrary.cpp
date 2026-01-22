#include "NativeLibrary.h"

namespace NativeLibrary
{
    // NativeClass 方法的具体实现
    const std::string& NativeClass::get_property() const
    {
        return property;
    }

    void NativeClass::set_property(const std::string& property)
    {
        this->property = property;
    }
}
