package org.bytedeco.javacppsdk.presets;

import org.bytedeco.javacpp.annotation.Platform;
import org.bytedeco.javacpp.annotation.Properties;
import org.bytedeco.javacpp.tools.InfoMap;
import org.bytedeco.javacpp.tools.InfoMapper;

@Properties(
//    target = "cn.xian",
//    global = "cn.xian.global.AddDemo3",


//        target = "org.bytedeco.ucc",
//        global = "org.bytedeco.ucc.global.AddDemo3",

        target = "org.bytedeco.javacppsdk",
        global = "org.bytedeco.javacppsdk.global.AddDemo3",

    value = {
        @Platform(
            value = {
                "linux-x86",
                "linux-x86_64",
                "macosx-x86_64",
                "windows-x86",
                "windows-x86_64"
            },
            include = "add_demo.h",
            link = "add_demo"
//                ,
//            preload = "libhelloworld-0"
        )
    }
)
public class AddDemoConfig implements InfoMapper {

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
