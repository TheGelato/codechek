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
				
				if (p==1&&(stray.size()>2)){
					stray.remove(stray.size()-1);
					stray.add(str.substring((int) intray.get(intray.size()-2)+1,(int) intray.get(intray.size()-1)+1));
				}
				else {
					stray.add(str.charAt((int)intray.get(intray.size()-1)));
				}
				if(stray.get(stray.size()-2)==stray.get(stray.size()-1)){
					stray.remove(stray.size()-1);
				}
				stmain.addAll(stray);
				}
			}
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