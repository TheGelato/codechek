package newmoss;

import java.awt.List;
import java.io.IOException;
import java.util.ArrayList;

import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.nodes.Element;
import org.jsoup.select.Elements;

public class table {
   public static ArrayList<String> pass(String aSt) throws IOException {
	   Document doc = Jsoup.connect(aSt).timeout(0).get();
	   Element tableHeader = doc.select("tr").first();
	   ArrayList<String> table=new ArrayList<>();

	   for( Element element : tableHeader.children() )
	   {
		   String ab=element.text();
     	  if (ab != null && !(ab.isEmpty())) {
            
	       // Here you can do something with each element
	       
	       table.add(ab);
	   }
	   }
	   
	   
	   Elements tableElements = doc.select("table");

       Elements tableHeaderEles = tableElements.select("thead tr th");
      
       
       
       
      

       Elements tableRowElements = tableElements.select(":not(thead) tr");

       for (int i = 0; i < tableRowElements.size(); i++) {
          Element row = tableRowElements.get(i);
          
          Elements rowItems = row.select("td");
          for (int j = 0; j < rowItems.size(); j++) {
        	  String a=rowItems.get(j).text();
        	  if (a != null && !(a.isEmpty())) {
        		  table.add(a);
            
          }
          
       }

  
	   
          
   }
	return table;
       
}
}