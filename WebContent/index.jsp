
<%@page import="com.sun.xml.internal.bind.v2.runtime.unmarshaller.Scope"%>
<%@page import="java.util.Arrays.*"%>
<%@ page import="java.io.*,java.util.*, javax.servlet.*"%>
<%@ page import="javax.servlet.http.*" %>
<%@ page import="org.apache.commons.fileupload.*" %>
<%@ page import="org.apache.commons.fileupload.disk.*" %>
<%@ page import="org.apache.commons.fileupload.servlet.*" %>
<%@ page import="org.apache.commons.io.output.*" %>
<%@ page import="java.net.URL" %>

<%@ page import="newmoss.*" %>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %> 

<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
   
   
   <%   int con=1;
   		String original_name;
   		String lang="java";
   		String resul_link="ini";  
   		int t=1;
   		int no_of_matches;
   		String dir_loc="/Users/Anubhav/Documents/workspace/newmoss/WebContent/Bundle/";
   		String extract=dir_loc+"Extract/";
   		String empty=dir_loc+"Empty/";
   		String htmls=dir_loc+"Htmls/";
   		System.out.println(dir_loc);
   		
   		
   		ArrayList<String> file_name_list = new ArrayList<String>();   //Input File names
   		ArrayList<String> links=new ArrayList<String>();        //Links Array
   		ArrayList<Integer> no_line=new ArrayList<Integer>();
   		final int rand=(int) (Math.random()*10000000);
		System.out.println(rand);
		%>
<%
//--------------------------------------------------------------------------------------------------------------------------------------------------------
   //Uploading file and knowing language
   
   File file ;
   
   int maxFileSize = 500000 * 1024;
   int maxMemSize = 500000 * 1024;
   ServletContext context = pageContext.getServletContext();
   String filePath = context.getInitParameter("file-upload");
 
   // Verify the content type
   String contentType = request.getContentType();
   if ((contentType.indexOf("multipart/form-data") >= 0)) {

      DiskFileItemFactory factory = new DiskFileItemFactory();
      // maximum size that will be stored in memory
      factory.setSizeThreshold(maxMemSize);
      // Location to save data that is larger than maxMemSize.
      factory.setRepository(new File(dir_loc));

      // Create a new file upload handler
      ServletFileUpload upload = new ServletFileUpload(factory);
      // maximum file size to be uploaded.
      upload.setSizeMax( maxFileSize );
      
      try{ 
    	  
         // Parse the request to get file items.
         List fileItems = upload.parseRequest(request);

         // Process the uploaded file items
         Iterator i = fileItems.iterator();

         out.println("<html>");
         out.println("<head>");
         out.println("<title>JSP File upload</title>");  
         out.println("</head>");
         out.println("<body>");
        
         while ( i.hasNext () ) 
         {
            FileItem fi = (FileItem)i.next();
            if( fi.isFormField()&&t==1 )
    	    {
            	 lang =fi.getString();
            	t=2;
    	    }
            if ( !fi.isFormField () )	
            {
            // Get the uploaded file parameters
            String fieldName = fi.getFieldName();
            String fileName = fi.getName();
            boolean isInMemory = fi.isInMemory();
            long sizeInBytes = fi.getSize();
            // Write the file
            if( fileName.lastIndexOf("\\") >= 0 ){
            file = new File( filePath + 
            fileName.substring( fileName.lastIndexOf("\\"))) ;
            }else{
            file = new File( filePath + 
            fileName.substring(fileName.lastIndexOf("\\")+1)) ;
           
            }
            fi.write( file ) ;
//--------------------------------------------------------------------------------------------------------------------------------------------------------
 //Extract zip files phase 1
            original_name=fileName;      
            
			String zipFilePath = filePath + fileName;
			String destDirectory = extract+fileName;
			UnzipUtility unzipper = new UnzipUtility();
			try {
				unzipper.unzip(zipFilePath, destDirectory);
				
			} catch (Exception ex) {
				// some errors occurred
				ex.printStackTrace();
			
	}
//--------------------------------------------------------------------------------------------------------------------------------------------------------
  //Extract zip files in the form required
			 
			extract=extract+fileName;
			File folder = new File(extract+"/");
			File[] listOfFiles = folder.listFiles();
			    for (int i1 = 0; i1 < listOfFiles.length; i1++) {
			      if (listOfFiles[i1].isFile()) {
			    	  file_name_list.add(listOfFiles[i1].getName());
			    	  } else if (listOfFiles[i1].isDirectory()) {
			       
			      }
			     
			    }
			    for (int j = 0; j < file_name_list.size(); j++) {
			    try{
			    	
			    	File file2 = new File(extract+"/"+j+"/"+file_name_list.get(j));
			    	file2.getParentFile().mkdir();
			    	file2.createNewFile();
			    	   File afile =new File(extract+"/"+file_name_list.get(j));
			    	   if(afile.renameTo(new File(extract+"/"+j+"/"+afile.getName()))){
			    		
			    	   }else{
			    		System.out.println("File is failed to move!");
			    	   }
			 
			    	}catch(Exception e){
			    		e.printStackTrace();
			    	}
		 
			 }	
			    
//--------------------------------------------------------------------------------------------------------------------------------------------------------
 //Start a moss scan
			    System.out.println("Language is "+ lang);
			    System.out.println(extract + "               is extract");
				MojiScan tc = new MojiScan();
			    resul_link= tc.startscan(extract,empty,lang);
			    System.out.println(resul_link);
//--------------------------------------------------------------------------------------------------------------------------------------------------------
			    
            }
            
            
         }
         out.println("</body>");
         out.println("</html>");
         
      }catch(Exception ex) {

      }
      
   }else{
      out.println("<html>");
      out.println("<head>");
      out.println("<title>Servlet upload</title>");  
      out.println("</head>");
      out.println("<body>");
      out.println("<p>No file uploaded</p>"); 
      out.println("</body>");
      out.println("</html>");
      

   }

   

//--------------------------------------------------------------------------------------------------------------------------------------------------------
 //Generate an array which consists of all match links
links=(ArrayList<String>) link_extract.extractLinks(resul_link);
no_of_matches=links.size();

for(int i=0;i<links.size();i++){
	if(!(links.get(i).contains(resul_link))){
		links.remove(i);
		i=i-1;
	}
}

LinkedHashSet<String> links_temp = new LinkedHashSet<String>();
links_temp.addAll(links);
links.clear();
links.addAll(links_temp);

System.out.println(links);


//--------------------------------------------------------------------------------------------------------------------------------------------------------
//Extract info from link heads page
if(links.size()>0){
ArrayList<objects> link_head_info=new ArrayList<objects>();


for(int k2=0;k2<links.size();k2++){
	ArrayList<String> heads=new ArrayList<>();
	String ar=links.get(k2);
	String br=ar.substring(0,(ar.length())-5)+"-top.html";
	
	heads=table.pass(br);
	String file1=heads.get(0);
	String file1_name=file1.substring(0, file1.indexOf(' '));
	int no1=file1_name.charAt(file1_name.length()-2);
	String file1_pe=file1.substring(file1.indexOf(' ')+2,(file1.length()-2));
	String file2=heads.get(1);
	String file2_name=file2.substring(0, file2.indexOf(' '));
	String file2_pe=file2.substring(file2.indexOf(' ')+2,(file2.length()-2));
	int no_1=file1_name.charAt(file1_name.length()-2)-48;
	int no_2=file2_name.charAt(file2_name.length()-2)-48;
	
	
	
	
	objects tcb = new objects(file_name_list.get(no_1),file_name_list.get(no_2));
    tcb.file1=file_name_list.get(no_1);
    tcb.file2=file_name_list.get(no_2);
    tcb.file1_no=no_1;
    tcb.file2_no=no_2;
    System.out.println(file1_pe);
    System.out.println(file2_pe);
    tcb.file1_per=Integer.parseInt(file1_pe);
    tcb.file2_per=Integer.parseInt(file2_pe);
    for(int h=0;h<(heads.size()-2);h++){
    	if(h%2==0){
    		tcb.add1(heads.get(h+2));
    	}
    	else{
    		
    	tcb.add2(heads.get(h+2));
    	}
    }
    link_head_info.add(tcb);

}
System.out.println("Success");


//--------------------------------------------------------------------------------------------------------------------------------------------------
   // Create a file just for fun
   String maindir=htmls;
		File f = new File(maindir+rand+"/"+rand+".html");
		//(works for both Windows and Linux)
		f.getParentFile().mkdirs(); 
		f.createNewFile();

		for(int ijk=0;ijk<link_head_info.size();ijk++){
			 f = new File(maindir+rand+"/"+"match-"+ijk+".html");
			//(works for both Windows and Linux)
			f.getParentFile().mkdirs(); 
			f.createNewFile();
		}

for(int ij=0;ij<link_head_info.size();ij++){
	int ij1=0;
	int file11=link_head_info.get(ij).file1_no;
	int file22=link_head_info.get(ij).file2_no;
	String path1=extract+"/"+file11+"/"+file_name_list.get(file11);
	String path2=extract+"/"+file22+"/"+file_name_list.get(file22);
	System.out.println("Success"+ij);
	ShowGeneratedHtml.scope(htmls,file_name_list.get(file11),path1, link_head_info.get(ij).file_1set,ij,ij1,rand);
	
	ij1=1;
	ShowGeneratedHtml.scope(htmls,file_name_list.get(file22),path2, link_head_info.get(ij).file_2set,ij,ij1,rand);
}




no_line=TableEg.getlines(resul_link);
System.out.println(no_line);




no_line=TableEg.getlines(resul_link);

mainresult.makeresult(htmls,rand, link_head_info, no_line);  
genpage.makeresult(htmls,rand, link_head_info);
    
    
}
else{
	
System.out.println("Nothing matched");
con=0;
}

%>


<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<!--
Template Name: Prevision
Author: <a href="http://www.os-templates.com/">OS Templates</a>
Author URI: http://www.os-templates.com/
Licence: Free to use under our free template licence terms
Licence URI: http://www.os-templates.com/template-terms
-->
<title>CodeChek</title>
<meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no">
<link href="layout/styles/layout.css" rel="stylesheet" type="text/css" media="all">
<style type="text/css">
/* DEMO ONLY */
.container .demo{text-align:center;}
.container .demo div{padding:8px 0;}
.container .demo div:nth-child(odd){color:#FFFFFF; background:#CCCCCC;}
.container .demo div:nth-child(even){color:#FFFFFF; background:#979797;}
@media screen and (min-width:180px) and (max-width:900px){.container .demo div{margin-bottom:0;}}
/* DEMO ONLY */
</style>
</head>
<body id="top">
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->
<div class="wrapper row1">
  <header id="header" class="clear"> 
    <!-- ################################################################################################ -->
    <div id="logo" class="fl_left">
      <h1><a href="../index.html">CodeChek</a></h1>
    </div>
    <nav id="mainav" class="fl_right">
      <ul class="clear">
        <li class="active"><a href="index.html">Home</a></li>
        <li class="active"><a href="pages/start.html">Check Here</a></li>
        <li class="active"><a href="pages/resources.html">Resources</a></li>
        <li class="active"><a href="pages/about.html">About</a></li>
        <li class="active"><a href="pages/contact.html">Contact</a></li>
      </ul>
    </nav>
    <!-- ################################################################################################ -->
  </header>
</div>
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->

<!-- ################################################################################################ -->
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->
<div class="wrapper row3">
  <main class="container clear"> 
    <!-- main body -->
    <!-- ################################################################################################ -->
    <div class="content"> 




     


</br>
</br>
</br>

<%
String res="./Bundle/Htmls/"+rand+"/"+rand+".html";
%>
<%
if (con==0){
	out.println("Nothing Matched");
}
else{
	out.println("Something Matched");
}




%>

<h2>
<a href="<%=res%>"> Get Your Results Here </a>
</h2>



















    </div>
    <!-- ################################################################################################ -->
    <!-- / main body -->
    <div class="clear"></div>
  </main>
</div>
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->
<div class="wrapper row4">
  <footer id="footer" class="clear"> 
    <!-- ################################################################################################ -->
    <div class="one_quarter first">
      <h6 class="title">Contact Me</h6>
      <address class="btmspace-15">
      Anubhav Agarwal<br>
      IIT ROPAR<br>
      Punjab<br>
      140001
      </address>
      <ul class="nospace">
        <li class="btmspace-10"><span class="fa fa-phone"></span> +91 9779237774</li>
        <li><span class="fa fa-envelope-o"></span> anubhav.agwl@gmail.com</li>
      </ul>
    </div>
    <div class="one_quarter">
      <h6 class="title">Quick Links</h6>
      <ul class="nospace linklist">
        <li><a href="index.html">Home Page</a></li>
        <li><a href="pages/start.html">Check Here</a></li>
        <li><a href="#">Blog</a></li>
        <li><a href="pages/about.html">About</a></li>
        <li><a href="pages/contact.html">Contact Us</a></li>
      </ul>
    </div>
    <div class="one_quarter">
      <h6 class="title">From The Blog</h6>
      <article>
        <h2 class="nospace"><a href="#">Lorem ipsum dolor</a></h2>
        <time class="smallfont" datetime="2045-04-06">Friday, 6<sup>th</sup> April 2045</time>
        <p>Vestibulumaccumsan egestibulum eu justo convallis augue estas aenean elit intesque sed.</p>
      </article>
    </div>
    <div class="one_quarter">
      <h6 class="title">Keep In Touch</h6>
      <form class="btmspace-30" method="post" action="#">
        <fieldset>
          <legend>Newsletter:</legend>
          <input class="btmspace-15" type="text" value="" placeholder="Email">
          <button type="submit" value="submit">Submit</button>
        </fieldset>
      </form>
      <ul class="faico clear">
        <li><a class="faicon-facebook" href="https://www.facebook.com/anubhav.agarwal.7528"><i class="fa fa-facebook"></i></a></li>
        <li><a class="faicon-twitter" href="#"><i class="fa fa-twitter"></i></a></li>
        <li><a class="faicon-linkedin" href="https://www.linkedin.com/profile/view?id=390719197&trk=hp-identity-name"><i class="fa fa-linkedin"></i></a></li>
        <li><a class="faicon-google-plus" href="https://plus.google.com/u/0/116775464507029852811/posts"><i class="fa fa-google-plus"></i></a></li>
        <li><a class="faicon-tumblr" href="https://github.com/anubhavagwl"><i class="fa fa-git"></i></a></li>
      </ul>
    </div>
    <!-- ################################################################################################ --> 
  </footer>
</div>
<!-- ################################################################################################ --> 
<!-- ################################################################################################ --> 
<!-- ################################################################################################ -->
<div class="wrapper row5">
  <div id="copyright" class="clear"> 
    <!-- ################################################################################################ -->
    <p class="fl_left">Copyright &copy; 2015 - All Rights Reserved - <a href="#">Domain Name</a></p>
   
    <!-- ################################################################################################ --> 
  </div>
</div>
<!-- ################################################################################################ --> 
<!-- ################################################################################################ --> 
<!-- ################################################################################################ --> 
<a id="backtotop" href="#top"><i class="fa fa-chevron-up"></i></a> 
<!-- JAVASCRIPTS -->
<script src="layout/scripts/jquery.min.js"></script>
<script src="layout/scripts/jquery.backtotop.js" ></script>
<script src="layout/scripts/jquery.mobilemenu.js"></script>
<script src="layout/scripts/jquery.tabs.min.js"></script>
<script src="layout/scripts/jquery.slides.js"></script>
<script src="http://code.jquery.com/jquery-latest.min.js"></script>
<script src="layout/scripts/jquery.slides.min.js"></script>
<script src="layout/scripts/beaverslider-effects-uncompressed.js"></script>
<script src="layout/scripts/beaverslider-effects.js"></script>
<script src="layout/scripts/beaverslider.js"></script>
<script src="layout/scripts/addition.js"></script>

</body>
</html>




<%
System.out.println(resul_link);
%>

