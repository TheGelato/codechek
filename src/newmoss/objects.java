package newmoss;

import java.util.ArrayList;

public class objects {
	public String file1;
	public String file2;
	public int file1_no;
	public int file2_no;
	public int file1_line;
	public int file2_line;
	public int file1_per;
	public int file2_per;
	public ArrayList<String> file_1set=new ArrayList<String>();
	public ArrayList<String> file_2set=new ArrayList<String>();
	public objects(String file1,String file2){
	      this.file1 = file1;
	      this.file2 = file2;
	   }
	public void file1_no(int no) {
		file1_no=no;
	}
	public void file2_no(int no) {
		file2_no=no;
	}
	public void file1_per(int per) {
		file1_per=per;
	}
	public void file2_per(int per) {
		file2_per=per;
	}
	public void add_lines_f1(String a) {
		file_1set.add(a);
	}
	public void add_lines_f2(String a) {
		file_2set.add(a);
	}
	public void file1_lin(int line) {
		file1_line=line;
	}
	public void file2_lin(int line) {
		file2_line=line;
	}
	public void add1(String a) {
		file_1set.add(a);
	}
	public void add2(String a) {
		file_2set.add(a);
	}
	public void printfile1() {
		System.out.println(file1);
	}
	public void printfile2() {
		System.out.println(file2);
	}
	public void printfile1_per() {
		System.out.println(file1_per);
	}public void printfile2_per() {
		System.out.println(file2_per);
	}public void printfile1set() {
		System.out.println(file_1set);
	}public void printfile2set() {
		System.out.println(file_2set);
	}
	
	
	
}
