import java.io.*;
public class q4
{
	public static void main(String args[]) throws Exception
	{
		
		BufferedReader d= new BufferedReader(new InputStreamReader(System.in));
		String s=d.readLine();
		s=s.trim(); s=s.toLowerCase();
		String arr[]=s.split(" ");
		if(arr[0].compareTo("i")==0)
		{
			if(arr[1].compareTo("am")==0)
			{
				System.out.print("I once knew someone who also claimed to be ");
				for(int i=2; i<arr.length; i++)
					System.out.print(arr[i]+" ");
				System.out.println();
			}
			else
				System.out.println("Oh! And why would that be?");
		}
		else if(arr[0].contains("what") || arr[0].contains("why") || arr[0].contains("how") || arr[0].contains("who")||arr[0].contains("where"))
		{
			if(s.contains("who are you"))
				System.out.println("I am a chat bot. Talk to me. :)");
			else if(s.contains("what is your name")||s.contains("what's your name"))
				System.out.println("My name is Calvin.");
			else
				System.out.println("Umm...I'm not so sure. Take a guess?");
		}
		else if(arr[0].compareTo("because")==0)
			System.out.println("Oh. I see now. Go on.");
		else if(arr[0].startsWith("hi") || arr[0].startsWith("hello") )
			System.out.println("Hi there! Talk to me. :)");
		else if(arr[0].startsWith("you"))
			System.out.println("Oh stop it you!");
		else
			System.out.println("I am not sure I understand what that means. :(");
	}
}
