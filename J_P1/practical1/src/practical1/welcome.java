package practical1;
import java.util.Scanner;

public class welcome {
	public static void main(String[] args) {
//		double d = 2.5;
		// int i = d + 3; // cannot cast double to an integer
//		double i = d+ 3;
//		System.out.println("Hello World!");
//		System.out.println(i);
		
		Scanner input = new Scanner(System.in);
//		
//		int no1;
//		int no2;
//		System.out.print("Enter first integer: ");
//		no1 = input.nextInt();
//		
//		System.out.print("Enter second integer: ");
//		no2 = input.nextInt();

//		input.close();
//		Addition.setNum1(no1);
//		Addition.setNum2(no2);
//		System.out.println("The sum is: "+Addition.getSum());
		
//		double d = 100.04;
//		System.out.println("Double value " + d);
//		System.out.println("Long value " + (long)d);
//		System.out.println("Int value " + (int)d);
		
//		int m_avg_no;
//		int sum = 0;
//		int number;
//		System.out.print("How many numbers to average : ");
//		m_avg_no = input.nextInt();
// 		input.close()
//		for(int count = 1; count <=m_avg_no; count++) {
//			System.out.print("Enter number " + count + " : ");
//			number = input.nextInt();
//			sum+=number;
//		}
//		System.out.printf("The average is %.1f", (float)(sum/m_avg_no));
		
		int integer;
		int neg = 0;
		int count = 0;
		int sum = 0;
		System.out.print("Enter an integer, the input ends if it is 0: ");
		while((integer = input.nextInt()) != 0) {
			count++;
			neg += (integer < 0) ? 1 : 0;
			sum += integer;
		}
		
//		do {
//			integer = input.nextInt();
//			count += (integer == 0) ? 0 : 1;
//			neg += (integer < 0) ? 1 : 0;
//			sum += integer;
//		}while(integer!=0);
		
		input.close(); // remember to close the input
		if (sum != 0) {
			System.out.printf("The number of positives is %d\n", (count - neg));
			System.out.printf("The number of negatives is: %d\n", neg);
			System.out.printf("The total is %d\n", sum);
			System.out.printf("The average is %.2f\n", ((float)sum/count));
		}
		else
			System.out.println("No numbers are entered except 0");
		
		
//		float weight; 
//		float height;
//		float bmi;
//		System.out.print("Enter weight in kilograms: ");
//		weight = input.nextFloat();
//		System.out.print("Enter height in kilograms: ");
//		height = input.nextFloat();
//		bmi = weight / (float)Math.pow(height,2);
//		System.out.printf("BMI is %.2f", bmi);
//		input.close();
	}
}
















































