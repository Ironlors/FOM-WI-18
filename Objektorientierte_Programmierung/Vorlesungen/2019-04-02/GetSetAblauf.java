package HelloWorld;

public class GetSetAblauf {
public static void main(String[] args) {
GetSetUebung gs1 = new GetSetUebung();
gs1.setI (3); gs1.setD (3.3); gs1.setS ("Blau");
GetSetUebung gs2 = new GetSetUebung(7, "Hund", 1.2);
gs2.setD(gs2.getI()*gs2.getD());
gs2.setS ("Katze");
gs1.ausgeben(); gs2.ausgeben();
}
}
