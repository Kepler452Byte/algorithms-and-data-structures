// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
//public class Main {
//    public static void main(String[] args) {
//        // Press Alt+Enter with your caret at the highlighted text to see how
//        // IntelliJ IDEA suggests fixing it.
//        System.out.printf("Hello and welcome!");
//
//        // Press Shift+F10 or click the green arrow button in the gutter to run the code.
//        for (int i = 1; i <= 5; i++) {
//
//            // Press Shift+F9 to start debugging your code. We have set one breakpoint
//            // for you, but you can always add more by pressing Ctrl+F8.
//            System.out.println("i = " + i);
//        }
//    }
//}
/**1. JAVA 删除字符串的字符
 *
 */
//public class Main {
//    public static void main(String args[]) {
//        String str = "this is Java";
//        System.out.println(removeCharAt(str, 3));
//    }
//    public static String removeCharAt(String s, int pos) {
//        return s.substring(0, pos) + s.substring(pos + 1);
//    }
//}

/**2. 格式化时间
 *
 */
//import java.text.SimpleDateFormat;
//import java.util.Date;
//
//public class Main{
//    public static void main(String[] args){
//        Date date = new Date();
//        String strDateFormat = "yyyy-MM-dd HH:mm:ss";
//        SimpleDateFormat sdf = new SimpleDateFormat(strDateFormat);
//        System.out.println(sdf.format(date));
//    }
//}

/**3. 获取当前时间
 *
 */
//import java.text.SimpleDateFormat;
//import java.util.Date;
//
//public class Main{
//    public static void main(String[] args){
//
//        SimpleDateFormat sdf = new SimpleDateFormat();// 格式化时间
//        sdf.applyPattern("yyyy-MM-dd HH:mm:ss a");// a为am/pm的标记
//        Date date = new Date();// 获取当前时间
//        System.out.println("现在时间：" + sdf.format(date)); // 输出已经格式化的现在时间（24小时制）
//    }
//}
/**4. JAVA instanceof 关键字的使用
 *
 */
//import java.util.ArrayList;
//import java.util.Vector;
//
//public class Main {
//
//    public static void main(String[] args) {
//        Object testObject = new ArrayList();
//        displayObjectClass(testObject);
//    }
//    public static void displayObjectClass(Object o) {
//        if (o instanceof Vector)
//            System.out.println("对象是 java.util.Vector 类的实例");
//        else if (o instanceof ArrayList)
//            System.out.println("对象是 java.util.ArrayList 类的实例");
//        else
//            System.out.println("对象是 " + o.getClass() + " 类的实例");
//    }
//}

/**5. continue关键字
 *
 */
//public class Main {
//    public static void main(String[] args) {
//        StringBuffer searchstr = new StringBuffer("hello how are you. ");
//        int length = searchstr.length();
//        int count = 0;
//        for (int i = 0; i < length; i++) {
//            if (searchstr.charAt(i) != 'h')
//                continue;//跳转到下一次循环，不执行count++
//            count++;
//            searchstr.setCharAt(i, 'h');
//        }
//        System.out.println("发现 " + count
//                + " 个 h 字符");
//        System.out.println(searchstr);
//    }
//}

/**6. ENUM构造函数
 *
 */
//enum Car {
//    lamborghini(900),tata(2),audi(50),fiat(15),honda(12);
//    private int price;
//    Car(int p) {
//        price = p;
//    }
//    int getPrice() {
//        return price;
//    }
//}
//public class Main {
//    public static void main(String args[]){
//        System.out.println("所有汽车的价格：");
//        for (Car c : Car.values())
//            System.out.println(c + " 需要 "
//                    + c.getPrice() + " 千美元。");
//    }
//}

/**7. 创建文件
 *
 */

/*
 author by runoob.com
 Main.java
 */

//import java.io.*;
//
//public class Main {
//    public static void main(String[] args)  {
//        try {
//            BufferedWriter out = new BufferedWriter(new FileWriter("runoob.txt"));
//            out.write("菜鸟教程");
//            out.close();
//            System.out.println("文件创建成功！");
//        } catch (IOException e) {
//        }
//    }
//}

/**8. 查看端口号
 *
 */
//import java.io.IOException;
//import java.net.InetSocketAddress;
//import java.net.Socket;
//import java.net.SocketAddress;
//import java.net.SocketTimeoutException;
//
//
//
//public class Main {
//
//    public static void main(String[] args) {
//        // 检测本地 80 端口
//        log(isSocketAliveUitlitybyCrunchify("localhost", 7890));
//
//        // 检测本地 8080 端口
//        log(isSocketAliveUitlitybyCrunchify("localhost", 8080));
//
//        // 检测本地 8081 端口
//        log(isSocketAliveUitlitybyCrunchify("localhost", 8081));
//
//        // 检测 runoob.com 的 80 端口
//        log(isSocketAliveUitlitybyCrunchify("runoob.com", 80));
//
//        // 检测 runoob.com 的 443 端口
//        log(isSocketAliveUitlitybyCrunchify("runoob.com", 443));
//
//        // 检测 runoob.com 的 81 端口
//        log(isSocketAliveUitlitybyCrunchify("runoob.com", 81));
//    }
//
//    /**
//     * 判断主机端口
//     *
//     * @param hostName
//     * @param port
//     * @return boolean - true/false
//     */
//    public static boolean isSocketAliveUitlitybyCrunchify(String hostName, int port) {
//        boolean isAlive = false;
//
//        // 创建一个套接字
//        SocketAddress socketAddress = new InetSocketAddress(hostName, port);
//        Socket socket = new Socket();
//
//        // 超时设置，单位毫秒
//        int timeout = 2000;
//
//        log("hostName: " + hostName + ", port: " + port);
//        try {
//            socket.connect(socketAddress, timeout);
//            socket.close();
//            isAlive = true;
//
//        } catch (SocketTimeoutException exception) {
//            System.out.println("SocketTimeoutException " + hostName + ":" + port + ". " + exception.getMessage());
//        } catch (IOException exception) {
//            System.out.println(
//                    "IOException - Unable to connect to " + hostName + ":" + port + ". " + exception.getMessage());
//        }
//        return isAlive;
//    }
//
//    private static void log(String string) {
//        System.out.println(string);
//    }
//
//    private static void log(boolean isAlive) {
//        System.out.println("是否真正在使用: " + isAlive + "\n");
//    }
//
//}

/**
 * 9. 查看本机IP
 */
//import java.net.InetAddress;
//
//public class Main {
//    public static void main(String[] args)
//            throws Exception {
//        InetAddress addr = InetAddress.getLocalHost();
//        System.out.println("Local HostAddress:"+addr.getHostAddress());
//        String hostname = addr.getHostName();
//        System.out.println("Local host name: "+hostname);
//    }
//}

/**
 * 10. 获取远程文件大小
 */
//import java.net.URL;
//import java.net.URLConnection;
//
//public class Main {
//    public static void main(String[] args) throws Exception {
//        int size;
//        URL url = new URL("https://arxiv.org/pdf/2109.10830.pdf");
//        URLConnection conn = url.openConnection();
//        size = conn.getContentLength();
//        if (size < 0)
//            System.out.println("无法获取文件大小。");
//        else
//            System.out.println("文件大小为：" + size + " bytes");
//        conn.getInputStream().close();
//    }
//}

/**
 * 11. 解析端口号
 */
import java.net.URL;

public class Main {
    public static void main(String[] args)
            throws Exception {
        URL url = new URL("https://arxiv.org/pdf/2109.10830.pdf");
        System.out.println("URL 是 " + url.toString());
        System.out.println("协议是 " + url.getProtocol());
        System.out.println("文件名是 " + url.getFile());
        System.out.println("主机是 " + url.getHost());
        System.out.println("路径是 " + url.getPath());
        System.out.println("端口号是 " + url.getPort());
        System.out.println("默认端口号是 "
                + url.getDefaultPort());
    }
}