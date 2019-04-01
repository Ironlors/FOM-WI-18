package HelloWorld;

public class Fruchtfliege {
	private String latName;
	private int alterInTagen;
	Fruchtfliege(){
		latName="Fructus Fligus";
		alterInTagen=3;
	}
	public int getAge() {
		return this.alterInTagen;
	}
	public void setAge(int x) {
		this.alterInTagen=x;
	}
	public String getName() {
		return this.latName;
	}
	public void setName(String na) {
		this.latName=na;
	}

}
