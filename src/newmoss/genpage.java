package newmoss;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.util.ArrayList;

public class genpage {
	public static void makeresult(String html,int id,ArrayList<objects> link_head_info) throws Exception {
		String maindir=html;
		for (int i = 0; i < link_head_info.size(); i++) {
		File f = new File(maindir+id+"/"+"match-"+i+".html");
		//(works for both Windows and Linux)
		f.getParentFile().mkdirs(); 
		f.createNewFile();
		BufferedWriter bw = new BufferedWriter(new FileWriter(maindir+id+"/"+"match-"+i+".html"));
		bw.write("<!DOCTYPE html>");
		bw.newLine();
		bw.write("<html>");
		bw.newLine();
		bw.write("<head>");
		bw.newLine();
		bw.write("<title>Codechek</title>");
		bw.newLine();
		bw.write("<meta charset=\"utf-8\">");
		bw.newLine();
		bw.write("<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no\">");
		bw.newLine();
		bw.write("<link href=\"../layout/styles/layout1.css\" rel=\"stylesheet\" type=\"text/css\" media=\"all\">");
		
		bw.write("<style type=\"text/css\">");
		bw.newLine();
		bw.write(".container .demo{text-align:center;}");
		bw.newLine();
		bw.write(".container .demo div{padding:8px 0;}");
		bw.newLine();
		bw.write(".container .demo div:nth-child(odd){color:#FFFFFF; background:#CCCCCC;}");
		bw.newLine();
		bw.write("container .demo div:nth-child(even){color:#FFFFFF; background:#979797;}");
		bw.newLine();
		bw.write("@media screen and (min-width:180px) and (max-width:900px){.container .demo div{margin-bottom:0;}}");
		bw.newLine();
		bw.write("</style>");
		bw.newLine();
		bw.write("</head>");
		bw.newLine();
		bw.write("<body id=\"top\">");
		bw.newLine();
		bw.write("<div class=\"wrapper row1\">");
		bw.newLine();
		bw.write("<header id=\"header\" class=\"clear\">");
		bw.newLine();
		bw.write("<div id=\"logo\" class=\"fl_left\">");
		bw.newLine();
		bw.write("<h1><a href=\"../../../WebContent/index.html\">CodeChek</a></h1></div>");
		bw.newLine();
		bw.write("<nav id=\"mainav\" class=\"fl_right\">");
		bw.newLine();
		bw.write("<ul class=\"clear\">");
		bw.newLine();
		bw.write("<li class=\"active\"><a href=\"../../../WebContent/index.html\">Home</a></li>");
		bw.newLine();
		bw.write("<li class=\"active\"><a href=\"../../../WebContent/pages/start.html\">Check Here</a></li>");
		bw.newLine();
		bw.write("<li class=\"active\"><a href=\"../../../WebContent/pages/resources.html\">Resources</a></li>");
		bw.newLine();
		bw.write("<li class=\"active\"><a href=\"../../../WebContent/pages/about.html\">About</a></li>");
		bw.newLine();
		bw.write("<li class=\"active\"><a href=\"../../../WebContent/pages/contact.html\">Contact</a></li>");
		bw.newLine();
		bw.write("</ul>");
		bw.newLine();
		bw.write("</nav>");
		bw.newLine();
		bw.write("</header>");
		bw.newLine();
		bw.write("</div>");
		bw.newLine();
		bw.write("<div class=\"tabl\"><table><thead><tr>");
		bw.newLine();
		bw.write("<th>");
		bw.newLine();
		bw.write(link_head_info.get(i).file1);
		bw.newLine();
		bw.write("</br>");
		bw.newLine();
		bw.write(Integer.toString(link_head_info.get(i).file1_per)+"%");
		bw.newLine();
		bw.write("</th>");
		bw.write("<th>");
		bw.newLine();
		bw.write(link_head_info.get(i).file2);
		bw.newLine();
		bw.write("</br>");
		bw.newLine();
		bw.write(Integer.toString(link_head_info.get(i).file2_per)+"%");
		bw.newLine();
		bw.write("</th>");
		bw.newLine();
		bw.write("</tr></thead><tbody>");
		bw.newLine();
		
		for (int j = 0; j < link_head_info.get(i).file_1set.size(); j++) {
			
		
		
		bw.write("<tr>");
		bw.newLine();
		bw.write("<td>");
		bw.newLine();
		bw.write( link_head_info.get(i).file_1set.get(j));
		bw.newLine();
		bw.write("</td><td>");
		bw.newLine();
		bw.write(link_head_info.get(i).file_2set.get(j));
		bw.newLine();
		bw.write("</td></tr>");
		bw.newLine();
		
		}
		bw.newLine();
		bw.write("</tbody></table></div><div class\"asdf\" style=\"width: 100%; overflow: hidden;margin:0px\"><div style=\"width: 50%; float: left;\"> ");
		bw.newLine();
		bw.write("<object type=\"text/html\" data=\"");
		bw.newLine();
		bw.write("match-"+i+"-"+"0.html");
		bw.newLine();
		bw.write("\" width=\"800px\" height=\"900px\" style=\"overflow:auto;border:0px solid white; border-collapse:collapse;\">");
		bw.newLine();
		bw.write("</object></div><div style=\"width: 50%;float: right\">");
		bw.write("<object type=\"text/html\" data=\"");
		bw.newLine();
		bw.write("match-"+i+"-"+"1.html");
		bw.newLine();
		bw.write("\" width=\"800px\" height=\"900px\" style=\"overflow:auto;border-left:1px solid white; border-collapse:collapse;\">");
		bw.newLine();
		bw.write("</object></div><!-- ################################################################################################ --><!-- / main body --> </div><!-- ################################################################################################ --><!-- ################################################################################################ --><!-- ################################################################################################ --><div class=\"wrapper row4\"><footer id=\"footer\" class=\"clear\"> <!-- ################################################################################################ --><div class=\"one_quarter first\"><h6 class=\"title\">Contact Me</h6><address class=\"btmspace-15\">Anubhav Agarwal<br>IIT ROPAR<br>Punjab<br>140001</address><ul class=\"nospace\"><li class=\"btmspace-10\"><span class=\"fa fa-phone\"></span> +91 9779237774</li><li><span class=\"fa fa-envelope-o\"></span> anubhav.agwl@gmail.com</li></ul></div><div class=\"one_quarter\"><h6 class=\"title\">Quick Links</h6><ul class=\"nospace linklist\"><li><a href=\"../index.html\">Home Page</a></li><li><a href=\"start.html\">Check Here</a></li><li><a href=\"#\">Blog</a></li><li><a href=\"about.html\">About</a></li><li><a href=\"contact.html\">Contact Us</a></li></ul></div><div class=\"one_quarter\"><h6 class=\"title\">From The Blog</h6><article><h2 class=\"nospace\"><a href=\"#\">Lorem ipsum dolor</a></h2><time class=\"smallfont\" datetime=\"2045-04-06\">Friday, 6<sup>th</sup> April 2045</time><p>Vestibulumaccumsan egestibulum eu justo convallis augue estas aenean elit intesque sed.</p></article></div><div class=\"one_quarter\"><h6 class=\"title\">Keep In Touch</h6><form class=\"btmspace-30\" method=\"post\" action=\"#\"><fieldset><legend>Newsletter:</legend><input class=\"btmspace-15\" type=\"text\" value=\"\" placeholder=\"Email\"><button type=\"submit\" value=\"submit\">Submit</button></fieldset></form><ul class=\"faico clear\"><li><a class=\"faicon-facebook\" href=\"https://www.facebook.com/anubhav.agarwal.7528\"><i class=\"fa fa-facebook\"></i></a></li><li><a class=\"faicon-twitter\" href=\"#\"><i class=\"fa fa-twitter\"></i></a></li><li><a class=\"faicon-linkedin\" href=\"https://www.linkedin.com/profile/view?id=390719197&trk=hp-identity-name\"><i class=\"fa fa-linkedin\"></i></a></li><li><a class=\"faicon-google-plus\" href=\"https://plus.google.com/u/0/116775464507029852811/posts\"><i class=\"fa fa-google-plus\"></i></a></li><li><a class=\"faicon-tumblr\" href=\"https://github.com/anubhavagwl\"><i class=\"fa fa-git\"></i></a></li></ul></div><!-- ################################################################################################ --> </footer></div><!-- ################################################################################################ --> <!-- ################################################################################################ --> <!-- ################################################################################################ --><div class=\"wrapper row5\"><div id=\"copyright\" class=\"clear\"> <!-- ################################################################################################ --><p class=\"fl_left\">Copyright &copy; 2015 - All Rights Reserved - <a href=\"#\">Domain Name</a></p> <!-- ################################################################################################ --> </div></div><!-- ################################################################################################ --> <!-- ################################################################################################ --> <!-- ################################################################################################ --> <a id=\"backtotop\" href=\"#top\"><i class=\"fa fa-chevron-up\"></i></a> <!-- JAVASCRIPTS --><script src=\"../layout/scripts/jquery.min.js\"></script><script src=\"../layout/scripts/jquery.backtotop.js\"></script><script src=\"../layout/scripts/jquery.mobilemenu.js\"></script><script src=\"https://ajax.googleapis.com/ajax/libs/jquery/1.7.2/jquery.min.js\"></script><script src=\"../layout/scripts/dropkick.js\" type=\"text/javascript\" charset=\"utf-8\"></script><script src=\"http://cdnjs.cloudflare.com/ajax/libs/jquery-throttle-debounce/1.1/jquery.ba-throttle-debounce.min.js\"></script><script src=\"js/jquery.stickyheader.js\"></script></body></html>");
		
		
		 bw.close();
		
		
		
		
		
		
		}
	}
}
