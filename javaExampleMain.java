
public class javaExampleMain {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		

	     int a = 5;
	      int b = 7;
	      swap(a,b);
	      System.out.println(a + ", " + b);
	}
	
	public static void swap(int a, int b) {
	      int temp = a;
	      a = b;
	      b = temp;
	   }

}
