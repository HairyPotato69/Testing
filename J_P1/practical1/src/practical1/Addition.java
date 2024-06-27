package practical1;

public class Addition {
	private static int m_number1;
	private static int m_number2;
	private static int m_sum;
//	public Addition(int number1, int number2) {
//		m_number1 = number1;
//		m_number2 = number2;
//	}
	public static void setNum1(int number) {
		m_number1 = number;
	}
	public static void setNum2(int number) {
		m_number2 = number;
	}
	public static int getNum1() {
		return m_number1;
	}
	public static int getNum2() {
		return m_number2;
	}
	public static int getSum() {
		m_sum = m_number1 + m_number2;
		return m_sum;
	}
}
