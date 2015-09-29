$string = <>;
$a=1;
while($a!=0){
$string =~ s/;/\n/;
$string =~ s/:/\n/;
$string =~ s/&/\n/;
$string =~ s/@/\n/;
$string =~ s/#/\n/;
if (($bar =~ /;/)||($bar =~ /:/)||($bar =~ /!/)||($bar =~ /&/)||($bar =~ /@/)||($bar =~ /#/)){
   $a=1;
}else{
   $a=0;
}
}
$string =~ s/;/\n/;
$string =~ s/:/\n/;
$string =~ s/&/\n/;
$string =~ s/@/\n/;
$string =~ s/#/\n/;

print "$string\n";
