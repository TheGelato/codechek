package newmoss;


import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;


public class texting {
	
	public static int countLines(String filename) throws IOException {
	    InputStream is = new BufferedInputStream(new FileInputStream(filename));
	    try {
	        byte[] c = new byte[1024];
	        int count = 0;
	        int readChars = 0;
	        boolean empty = true;
	        while ((readChars = is.read(c)) != -1) {
	            empty = false;
	            for (int i = 0; i < readChars; ++i) {
	                if (c[i] == '\n') {
	                    ++count;
	                }
	            }
	        }
	        return (count == 0 && !empty) ? 1 : count;
	    } finally {
	        is.close();
	    }
	}
	
    public static void scope(String name,String file1,  ArrayList<String> line1,int i0,int i1,int id) throws Exception {
    	System.out.println("file name is           "+file1);
    	System.out.println("No of lines             "+line1);
    	BufferedReader br = new BufferedReader(new FileReader(file1));
        int no=line1.size();
        int[][] line=new int[no][2];
        int[] c1=new int[no];
        ArrayList<Integer> c2 = new ArrayList<Integer>();
        ArrayList<Integer> c3 = new ArrayList<Integer>();
        for (int i = 0; i < no; i++) {
			int k=line1.get(i).indexOf(45);
			int b1=Integer.parseInt(line1.get(i).substring(0, k))-2;
			line[i][0]=b1;
			c1[i]=b1;
			c2.add(b1);
			int aa=line1.get(i).length();
			int bb=Integer.parseInt(line1.get(i).substring(k+1,aa));
			c3.add(bb-2);
			line[i][1]=bb;
		}
        Arrays.sort(c1);
        int i = 0,j=0;
        String pl="FFFFFF";
        String[] textcolors={"FF4500","7CFC00","6495ED","8A2BE2","D2691E","FF4500","6A5ACD","FF7F50"};
        File f = new File(name+i0+"_"+i1+".html");
        String path="/Users/Anubhav/Documents/workspace/newmoss/WebContent/Bundle/Htmls/"+id+"/";
        BufferedWriter bw = new BufferedWriter(new FileWriter(path+f));
        bw.write("<html>");
        bw.write("<head>");
        bw.write("<title>");
        bw.write("</title>");
        bw.write("</head>");
        bw.write("<body bgcolor=282828>");
        bw.write("<p><pre>");
        bw.newLine();
        String line11="sd";
       
        int a=countLines(file1);
        System.out.println(a+"             is a");
        if(a==1){
    		bw.write("<FONT color = #"+textcolors[0]+">");
    		if(line11.contains("<")&&line11!=null){
				line11=line11.replaceAll("<", "&lt");
			}
			if(line11.contains(">")&&line11!=null){
				line11=line11.replace(">","&lt");
			}
    		line11=br.readLine();
    		bw.write(line11);
    		bw.write("</FONT>");
    	}
        else{
        while (i<=a&&line11!=null) {
        	
        	if(Arrays.binarySearch(c1, i)>=0){
        		
        		int an=c2.indexOf(i);
        		bw.write("<FONT color = #"+textcolors[an]+">");
        		
        		
        		for (int k1 = i-2; k1 < line[an][1]-3; k1++) {
        			
        			System.out.println(i+". "+line11+"                 ------------------------------");
        			if(br.readLine()!=null){
        			line11=br.readLine();
        			
        			}
        			else {
						line11="as";
					}
        			if(line11.contains("<")&&line11!=null){
        				line11=line11.replaceAll("<", "&lt");
        			}
        			if(line11.contains(">")&&line11!=null){
        				line11=line11.replace(">","&lt");
        			}
        			
        			if(line11==null){
        				System.out.println(i+". "+line11+"    2sasdasd");
        				break;
        			}
        			if(br.readLine()!=null){
        	    		bw.write(line11);}
                    bw.newLine();
                    i=i+1;
                    
				}
        		
        		bw.write("</FONT>");
        		if(c3.contains(i-1)&&c2.contains(i-1)){
        			i=i-1;
        			a=a-1;
        		}
        		
    		}else{
    			
    			if(br.readLine()!=null){
        			line11=br.readLine();
        			}
    			
    			System.out.println(i+". "+line11+"                 is new");
    		bw.write("<FONT color = #FFFAF0>");	
    		if(br.readLine()!=null){
    		bw.write(line11);}
            bw.newLine();
            i=i+1;
        }
        }
        }
        bw.write("</p></pre>");
        bw.write("</body>");
        bw.write("</html>");

        br.close();
        bw.close();

        
    }
}