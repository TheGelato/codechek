package newmoss;
import java.io.IOException;
import java.util.ArrayList;

import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.nodes.Element;
import org.jsoup.select.Elements;
import org.omg.CORBA.PUBLIC_MEMBER;

public class TableEg {
   public static ArrayList<Integer> getlines(String a) {
      String html = a;
      ArrayList<Integer> no_line = new ArrayList<>();
      try {
         Document doc = Jsoup.connect(html).timeout(0).get();
         Elements tableElements = doc.select("table");

        

         Elements tableRowElements = tableElements.select(":not(thead) tr");

         for (int i = 1; i < tableRowElements.size(); i++) {
            Element row = tableRowElements.get(i);
            
            Elements rowItems = row.select("td");
            String b = "1";
            for (int j = 0; j < rowItems.size(); j++) {
            
                b=rowItems.get(2).text();
            }
           no_line.add(Integer.parseInt(b));
         }

      } catch (IOException e) {
         e.printStackTrace();
      }
      
	return no_line;
   }
}