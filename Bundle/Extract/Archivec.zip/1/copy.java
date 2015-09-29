e {
					p=1;
					stray.add(str.substring(0,(int) intray.get(1)));
				}
				if(intray.get(intray.size()-2)==intray.get(intray.size()-1)){
					t=1;
					intray.remove(intray.size()-1);
				}
				
				for(int i=p;i<intray.size()-1;i++){
					stray.add(str.charAt((int)intray.get(i)));
					stray.add(str.substring((int) intray.get(i)+1,(int) intray.get(i+1)));
					
				}
				
				if(stray.size()>1){
					if(stray.get(0)==stray.get(1)){
					stray.remove(0);
					}	
				}
				if(t==1){
					stray.add(str.charAt((int)intray.get(intray.size()-1)));
				
				}
				String str=in.next();
			if(str.contains("/*")|str.contains("*/")|str.contains("//")){
				if (str.contains("/*")&&str.contains("*/")){
					stmain.add(str.substring(0, 2));
					stmain.add


					
				for(int i=p;i<in
				if (p==1&&(stray.size()>2)){
					stray.remove(stray.size()-1);
					stray.add(str.substring((int) intray.get(intray.size()-2)+1,(int) intray.get(intray.size()-1)+1));
				}
				else {
					stray.add(str.charAt((int)intray.get(intray.size()-1)));

					if(stray.size()>1){
					if(stray.get(0)==stray.get(1)){
					stray.remove(0);
					}	
				}
				if(t==1){
					stray.add(str.charAt((int)intray.get(intray.size()-1)));
				
				}
				
				if (p==1&&(stray.size()>2)){
					stray.remove(
				}
				if(stray.get(stray.size()-2)==stray.get(stray.size()-1)){
					stray.remove(stray.size()-1);
				}
				stmain.addAll(stray);
				}
			}
			andom rnd = new Random();
		  for(int i=0;i<100;i++){
			 int t=0;
			 int j1=rnd.nextInt(5);
		  	 int k1=rnd.nextInt(5);
		  	 int j2=rnd.
			else{
				stmain.add(str);	
			}
			for(int i=0;i<stmain.size();i++){
				if(stmain.get(i)==""){
					System.out.println("sds");
					String a=(String) stmain.get(i-1);
					System.out.println(a);
					a.concat((String) stmain.get(i+1));
					stmain.set(i-1, a);
				}
			}
			System.out.println(stmain);
			
			
		}
		
	}
}