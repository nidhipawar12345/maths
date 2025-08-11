import java.io.*;
import java.util.*;
import java.lang.*;
class keyword cipher
{
public static void main(string args[])
{
string str,keyword,in-text="\0";
string Alphabet="abcdefghijklmnopqrstuvwxyz";
string code="\0";
scanner sc=new scanner(system.in);
system.out.println("\n enter the string:");
str1=sc.netline();
system.out.println("\n enter keyboard:");
keyword=sc.next();
int count=0;
for(int i=0;i<keyword.length();i++)
{
if(!code.contains(charcter.tostring(keyword.charAt(i)))
{
char s=keyword.charAt(i);
code=code.concat (character.to string(s));
}
}
for(int i=0;i<Alphabets.length();i++)
{
if(! code.contains(character.to string(Alphabet.charAt(i)))
{
char s=Alphabets.charAt(i);
code=code.concat(character to string(e));
}
}
for(int i=0;i<str.length(0;i++)
{
char c=str.charAt(i);
int pos=Alphabets.idex of(c);
en_text=en_text.concat (character.to string(code.charAt(pos)));
}
system.out.println("\n the encoded string is:"tentext);
system.out.println("\n the decoded string is;");
for(int i=1;i<en_text.lenth();i++)
{
char.c=en_text charAt(i);
int pos=code.index of(C);
system.out.println(Alphabets.charAt(pos));
}
}
}

