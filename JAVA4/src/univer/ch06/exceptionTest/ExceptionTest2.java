package univer.ch06.exceptionTest;

// checked Exception 처리 예 2

public class ExceptionTest2 {
    public static void main(String[] args) {
        DataInputStream dis = new DataInputStream(System.in);
        try {
            int i = dis.readInt();
        } catch (Exception e) {
            System.out.println(e.toString());
            System.out.println(e.printStackTrace());
        }
    }
}
