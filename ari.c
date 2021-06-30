/* ari function*/
string ari ( string s ){
float chr=0;
float wrd=0;
float sen =0;
int ar;
float fr1, fr2;
for( int i=0; s[i]!= '\0'; i++){
if(isalnum(s[i]))
chr = chr + 1;
if(s[i] == ' ')
wrd = wrd + 1;
if(s[i] == '.' || s[i] =='!' || s[i] == '?')
sen = sen + 1;
}
  fr1 = chr/wrd;
  fr2= wrd/sen;
ar = ceil(4.71*(fr1) + 0.5*(fr2) - 21.43);
if(ar == 1)
return "Kindergarten";
else if(ar == 2)
return "First/Second Grade";
else if(ar == 3) 
return "Third Grade";
else if(ar == 4)
return "Fourth Grade";
else if(ar == 5)
return "Fifth Grade";
else if(ar == 6)
return "Sixth Grade";
else if(ar == 7)
return "Seventh Grade";
else if(ar == 8)
return "Eighth Grade Grade";
else if(ar == 9)
return "Ninth Grade";
else if(ar == 10)
return "Tenth Grade";
else if(ar == 11)
return "Eleventh Grade";
else if(ar == 12)
return "Twelfth grade";
else if(ar == 13)
return "College student";
else if(ar == 14)
return "Professor";
}
