public class fibbo {
    public static void main(String[] args) 
	{
		
		 int max = Integer.parseInt(args[0]);
		 int pre = 1;
		 int next = 1;
		 
	        System.out.print("Fibonacci Series of "+max+" numbers:");
 
	        for (int i = 0; i < max; ++i)
	        {
	            System.out.print(pre+" ");
	            
	            int sum = pre + next;
	            pre = next;
	            next = sum;
	        }
	}
}
