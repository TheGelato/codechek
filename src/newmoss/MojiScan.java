package newmoss;
import java.io.File;
import java.util.Collection;
import java.net.URL;
import org.apache.commons.io.FileUtils;
import it.zielke.moji.SocketClient;

public class MojiScan {
    public String startscan(String l,String emp,String la) throws Exception {
    	// a list of students' source code files located in the prepared
    			// directory.
    			Collection<File> files = FileUtils.listFiles(new File(
    					l), new String[] { la }, true);
    			
    			// a list of base files that was given to the students for this
    			// assignment.
    			Collection<File> baseFiles = FileUtils.listFiles(new File(
    					emp), new String[] { la }, true);

    			// get a new socket client to communicate with the MOSS server
    			// and set its parameters.
    			SocketClient socketClient = new SocketClient();

    			// set your MOSS user ID
    			socketClient.setUserID("85828448");
    			// socketClient.setOpt...

    			// set the programming language of all student source codes
    			socketClient.setLanguage(la);
    			
    			// initialize connection and send parameters
    			socketClient.run();

    			// upload all base files
    			for (File f : baseFiles) {
    				socketClient.uploadBaseFile(f);
    			}
    			
    			// upload all source files of students
    			for (File f : files) {
    				socketClient.uploadFile(f);
    			}
    			// finished uploading, tell server to check files
    			socketClient.sendQuery();

    			// get URL with MOSS results and do something with it
    			URL results = socketClient.getResultURL();
    			return results.toString();
    }
}