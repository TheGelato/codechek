package newmoss;

import java.util.ArrayList;

public class itrre {

	public static void main(String[] args) throws Exception {
		String dir_loc="/Users/Anubhav/Documents/workspace/newmoss/Bundle/";
   		String extract=dir_loc+"Extract/";
   		String empty=dir_loc+"Empty/";
   		String htmls=dir_loc+"Htmls/";
		
		
		String name="sdsd.java";
		String file1="/Users/Anubhav/Desktop/moss/sas/sdsd.java";		
		ArrayList<String> line1 = new ArrayList<String>();
		line1.add("107-126");
		line1.add("144-155");
		line1.add("130-137");
		line1.add("11-15");
		line1.add("29-35");
		ShowGeneratedHtml.scope(htmls,name, file1, line1, 23, 14, 1886805);
		
	}
	
	
}
