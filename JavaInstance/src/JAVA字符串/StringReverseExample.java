package JAVA字符串;

public class StringReverseExample{
    public static void main(String[] args){
        String string="runoob";
        /**
         * 1. 和 String 类不同的是，StringBuffer 和 StringBuilder 类的对象能够被多次的修改，并且不产生新的未使用对象。
         * 2. 在使用 StringBuffer 类时，每次都会对 StringBuffer 对象本身进行操作，而不是生成新的对象，
         * 所以如果需要对字符串进行修改推荐使用 StringBuffer。
         */
        String reverse = new StringBuffer(string).reverse().toString();
        System.out.println("字符串反转前:"+string);
        System.out.println("字符串反转后:"+reverse);
    }
}