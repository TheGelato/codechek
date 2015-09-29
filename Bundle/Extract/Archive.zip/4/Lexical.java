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
		  	 int j2=rnd.nextInt(5);
		  	 int k2=rnd.nextInt(5);
		  	 t=array[j1][k1];
		  	 array[j1][k1]=array[j2][k2];
		  	 array[j2][k2]=t;
		  }
		  return array;
	}
	
	//Method to print grid
	public static void printGrid(int[][] print_arr)
	{
	   for(int i = 0; i < 5; i++)
	   {
				else if(str.contains("/*")){
					if(str.contentEquals("/*")){
						stmain.add(str);
					}
					else {
						stmain.add(str.substring(0, 2));
						stmain.add(str.substring(2, str.length()));
					}
				}
				else if (str.contains("*/")) {
					if(str.contentEquals("*/")){
						stmain.add(str);
					}
					else {
						stmain.add(str.substring(0, str.length()-2));
						stmain.add(str.substring(str.length()-2, str.length()));
					}
				}
				else {
					if(str.contentEquals("//")){
						stmain.add(str);
					}
					else {
						stmain.add(str.substring(0, 2));
						stmain.add(str.substring(2, str.length()));
					}
				}
				
			}
			else if(str.contains(":=")|str.contains(">=")|str.contains("<=")|str.contains("'")){
				stmain.add(str);
			}
			else if (str.contains("+")|str.contains("-")|str.contains("*")|str.contains("/")|str.contains("%")|str.contains("=")|str.contains("<")|str.contains(">")|str.contains("(")|str.contains(")")|str.contains("{")|str.contains("}")|str.contains(".")|str.contains(";")|str.contains(":")|str.contains("!")|str.contains("?")|str.contains(",")){
				if(str.length()==1){
					stmain.add(str);
				}
				else{
				ArrayList intray = new ArrayList();
				 intray.add(0);
				 ArrayList stray = new ArrayList();
				for(int i=0;i<str.length();i++){
					char k=str.charAt(i);
					if (k==37|k==33|k==123|k==125|(k>39&&k<48)|(k>57&&k<64)){
						intray.add(i);
					}
				}	
				intray.add(str.length()-1);
			
				if(intray.get(0)==intray.get(1)){
					stray.add(str.charAt(0));
					intray.remove(0);
					p=0;
				}
				else {
					p=1;
					stray.add(str.substring(0,(int) intray.get(1)));
				}
				if(intray.get(intray.size()-2)==intray.get(intray.size()-1)){
					t=1;
					intray.remove(intray.size()-1);
				}
				
				for(int i=p;i<intray.size()-1;i++){
					stray.add(str.charAt((int)intray.get(i)));
					stray.add(str.substring((int) intray.get(i)+1,(int) intray.get(i+1)));
					
				}
				
				if(stray.size()>1){
					if(stray.get(0)==stray.get(1)){
					stray.remove(0);
					}	
				}
				if(t==1){
					stray.add(str.charAt((int)intray.get(intray.size()-1)));
				
				}
				
				if (p==1&&(stray.size()>2)){
					stray.remove(stray.size()-1);
					stray.add(str.substring((int) intray.get(intray.size()-2)+1,(int) intray.get(intray.size()-1)+1));
				}
				else {
					stray.add(str.charAt((int)intray.get(intray.size()-1)));
				}
				if(stray.get(stray.size()-2)==stray.get(stray.size()-1)){
					stray.remove(stray.size()-1);
				}
				stmain.addAll(stray);
				}
			}
			else{
				stmain.add(str);	
			}
			for(int i=0;i<stmain.size();i++){
				if(stmain.get(i)==""){
					System.out.println("sds");
					String a=(String) stmain.get(i-1);
					System.out.println(a);
					a.concat((String) stmain.get(i+1));
					stmain.set(i-1, a);
				}
			}
			System.out.println(stmain);
			
			
		}
		
	}
}