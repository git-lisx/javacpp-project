import org.bytedeco.javacpp.BytePointer;
import org.bytedeco.javacppsdk.NativeClass;

public class ClassDemoTest {

    public static void main(String[] args) {


        try (NativeClass nativeClass = new NativeClass()) {

            nativeClass.set_property("张三");

            BytePointer property = nativeClass.get_property();
            System.out.println("java输出的日志，C/C++调用结果：" + property.getString());
        }

//        AddDemo.
    }
}