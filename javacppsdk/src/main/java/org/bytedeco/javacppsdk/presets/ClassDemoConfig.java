package org.bytedeco.javacppsdk.presets;

import org.bytedeco.javacpp.annotation.Platform;
import org.bytedeco.javacpp.annotation.Properties;
import org.bytedeco.javacpp.tools.InfoMap;
import org.bytedeco.javacpp.tools.InfoMapper;

@Properties(
        target = "org.bytedeco.javacppsdk",
        global = "org.bytedeco.javacppsdk.global.ClassDemo",

    value = {
        @Platform(
            value = {
                "linux-x86",
                "linux-x86_64",
                "macosx-x86_64",
                "windows-x86",
                "windows-x86_64"
            },
            include = "NativeLibrary.h",
            link = "native_library"
        )
    }
)
public class ClassDemoConfig implements InfoMapper {

    @Override
    public void map(InfoMap infoMap) {
//        //    struct Person {
//        //        char firstname[100];
//        //        char lastname[100];
//        //    };
//        infoMap.put(new Info("Person").pointerTypes("PersonTypePtr"));
//        //
//        //    typedef struct Person PersonType;
//        infoMap.put(new Info("PersonType").pointerTypes("PersonTypePtr"));
//        //
//        //
//        //    typedef struct Person * PersonTypePtr;
//        infoMap.put(new Info("PersonTypePtr").valueTypes("PersonTypePtr"));
    }
}
