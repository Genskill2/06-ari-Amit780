/* ari function*/
string ari(string s){
float chr=0;
float wrd=0;
float sen =0;
int ari;
for( int i=0; s[i]!= '\0'; i++){
if((s[i] >= 48 && s[i]<=57) || (s[i]>=65 && s[i] <=90) || (s[i]>=97 && s[i]<=122)){
chr = chr+1;}
if(s[i] == ' '){
wrd = wrd+1;}
if(s[i] == '.' || s[i] =='!' || s[i] == '?'){
sen = sen +1;}
}
ari = ceil(4.71*(chr/wrd) + 0.5*(wrd/sen) - 21.43);
if(ari == 1)
return "Kindergarten";
else if(ari == 2)
return "First/Second Grade";
else if(ari == 3) 
return "Third Grade";
else if(ari == 4)
return "Fourth Grade";
else if(ari == 5)
return "Fifth Grade";
else if(ari == 6)
return "Sixth Grade";
else if(ari == 7)
return "Seventh Grade";
else if(ari == 8)
return "Eighth Grade Grade";
else if(ari == 9)
return "Ninth Grade";
else if(ari == 10)
return "Tenth Grade";
else if(ari == 11)
return "Eleventh Grade";
else if(ari == 12)
return "Twelfth grade";
else if(ari == 13)
return "College student";
else if(ari == 14)
return "Professor";
}
