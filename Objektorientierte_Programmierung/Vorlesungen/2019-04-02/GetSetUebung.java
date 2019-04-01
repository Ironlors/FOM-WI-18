package HelloWorld;

public class GetSetUebung {
public GetSetUebung(int j, String str, double e) {
		// TODO Auto-generated constructor stub
	i=j;
	s=str;
	d=e;
	}
public GetSetUebung() {
	i=20;
	s="ABC";
	d=2.1;
}
private int i;
private String s;
private double d;
public void setD(double de) {
	this.d=de;
}
public double getD() {
	return this.d;
}
public void setI(int in) {
	this.i=in;
}
public int getI() {
	return this.i;
}
public void setS(String st) {
	this.s=st;
}
public String getS() {
	return this.s;
}
public void ausgeben() {
	System.out.println("I: "+this.i);
	System.out.println("S: "+this.s);
	System.out.println("D: "+this.d);
}
}


