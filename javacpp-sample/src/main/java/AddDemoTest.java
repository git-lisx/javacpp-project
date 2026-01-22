import org.bytedeco.javacppsdk.Point;
import org.bytedeco.javacppsdk.global.AddDemo3;

public class AddDemoTest {

    public static void main(String[] args) {

        int result = AddDemo3.add(1, 3);
        System.out.println("java输出的日志，C/C++调用结果：" + result + "\n");

        try (
                Point point1 = AddDemo3.create_point(1, 2);
                Point point2 = AddDemo3.create_point(1, 4)
        ) {
            System.out.println("java输出的日志，C/C++创建的point1对象：" + point1.x() + "," + point1.y() + "\n");

            System.out.println("java输出的日志，C/C++创建的point2对象：" + point2.x() + "," + point2.y() + "\n");

            double distance = AddDemo3.distance(point1, point2);
            System.out.println("java输出的日志，C/C++计算两点距离：" + distance + "\n");

            AddDemo3.print_point(point2);
        }


//        AddDemo.
    }
}