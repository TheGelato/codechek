package project1;
import java.util.*;

public class Lexical {
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		ArrayList<String> stmain = new ArrayList<String>();
		int t=0,p=0;
		while (in.hasNext()){
			String str=in.next();
			if(str.contains("/*")|str.contains("*/")|str.contains("//")){
				if (str.contains("/*")&&str.contains("*/")){
					stmain.add(str.substring(0, 2));
					stmain.add(str.substring(2, str.length()-2));
					stmain.add(str.substring(str.length()-2, str.length()));
				}int[][] array=new int[5][5];
		array=generate_list(array);
		 Random rnd = new Random();
		  for(int i=0;i<100;i++){
			 int t=0;
			 int j1=rnd.nextInt(5);
		  	 int k1=rnd.nextInt(5);
		  	 int j2=rnd.