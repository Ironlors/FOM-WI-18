package HelloWorld;

public class FruchtfliegeAblauf {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Fruchtfliege f1 = new Fruchtfliege();
		System.out.println("Alter: "+f1.getAge());
		System.out.println("Name: "+f1.getName());
		f1.setName("Martin");
		System.out.println("Alter: "+f1.getAge());
		System.out.println("Name: "+f1.getName());
		
	}

}
