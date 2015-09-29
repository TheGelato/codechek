package newmoss;

import java.io.IOException;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.LinkedHashSet;

public class link {
	public static void main(String[] args) throws IOException {
		String a="http://moss.stanford.edu/results/44402863";
		ArrayList<String> resul=new ArrayList<>();
		
	resul=(ArrayList<String>) link_extract.extractLinks("http://moss.stanford.edu/results/44402863");	
	
	
	}
}
