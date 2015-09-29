package newmoss;


import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;


public class ShowGeneratedHtml {
	
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
	
    public static void scope(String htmls_loc,String name,String file1,  ArrayList<String> line1,int i0,int i1,int id) throws Exception {
    	BufferedReader br = new BufferedReader(new FileReader(file1));
        int no=line1.size();
        ArrayList<Integer> row1 = new ArrayList<Integer>();
        ArrayList<Integer> row2 = new ArrayList<Integer>();
        ArrayList<Integer> row1_sort = new ArrayList<Integer>();
        ArrayList<Integer> row2_unsort = new ArrayList<Integer>();
        for (int i = 0; i < no; i++) {
			int k=line1.get(i).indexOf(45);
			int b1=Integer.parseInt(line1.get(i).substring(0, k));
			row1.add(b1-1);
			row1_sort.add(b1-1);
			int aa=line1.get(i).length();
			int bb=Integer.parseInt(line1.get(i).substring(k+1,aa));
			row2.add(bb-1);
			row2_unsort.add(bb-1);
		}
        
        int i = 1;
        String pl="FFFFFF";
        String[] textcolors={"FF4500","7CFC00","6495ED","8A2BE2","D2691E","FF4500","6A5ACD","FF7F50"};
        File f = new File("match"+"-"+i0+"-"+i1+".html");
        String path=htmls_loc+id+"/";
        BufferedWriter bw = new BufferedWriter(new FileWriter(path+f));
        bw.write("<html>");
        bw.write("<head>");
        bw.write("<title>");
        bw.write("</title>");
        bw.write("</head>");
        bw.write("<body bgcolor=282828>");
        bw.write("<HR>");
        bw.write("</br>");
        bw.write("<FONT color = #FFFAF0>");
        bw.write("&gt;&gt;&gt;&gt; "+"file: "+name );
        bw.write("</FONT>");
        bw.write("</br>");
        bw.write("</br>");
        bw.write("<p><pre>");
        bw.newLine();
        String line11="sd";
       
        int a=countLines(file1)+1;
       if(a==2){
    		bw.write("<FONT color = #"+textcolors[0]+">");
    		line11=br.readLine();
    		if(line11.contains("<")){
				line11=line11.replaceAll("<", "&lt");
			}
			if(line11.contains(">")){
				line11=line11.replace(">","&gt");
			}
    		bw.write(line11);
    		bw.write("</FONT>");
    	}
        else{
        	for (int l = 0; l < row1.size(); l++) {
				int k=row1.get(l)+1;
        		if(row2.contains(row1.get(l))){
					row1.set(l, k);
					row1_sort.set(l, k);
				}
			}
        	row1_sort.sort(null);
        	row2.sort(null);
        	line11=br.readLine();
        while (i<=a&&line11!=null) {
        	
        	if(row1_sort.contains(i)){
        		
        		int an=row1.indexOf(i);
        		bw.write("<FONT color = #"+textcolors[an]+">");
        		
        		for (int k1 = i; k1 <= row2_unsort.get(an); k1++) {
        			
        			
        			if((i>=row2.get(row2.size()-1))&&i==a){
                    	break;
                    }
        			if(line11.contains("<")){
        				line11=line11.replaceAll("<", "&lt");
        			}
        			if(line11.contains(">")){
        				line11=line11.replace(">","&gt");
        			}
        			bw.write(line11);
                    bw.newLine();
                    line11=br.readLine();
                    i=i+1;
                    
        		}
        		
				bw.write("</FONT>");
        	}
        	else{
    		
    		bw.write("<FONT color = #FFFAF0>");	
    		if(line11.contains("<")){
				line11=line11.replaceAll("<", "&lt");
			}
			if(line11.contains(">")){
				line11=line11.replace(">","&gt");
			}
    		bw.write(line11);
            bw.newLine();
            bw.write("</FONT>");
            i=i+1;
            line11=br.readLine();
        }
        }
        }
        bw.write("</p></pre>");
        bw.write("</body>");
        bw.write("</html>");

        br.close();
        bw.close();
        System.out.println(" Showgenerated success");
		
        
    }

}