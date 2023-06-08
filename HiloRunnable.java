public class HiloRunnable{

	public String corredor;
	public int numvueltas;
	
public HiloRunnable(String corredor,int numvueltas){
this.corredor = corredor;
this.numvueltas = numvueltas;

}
@Override
public void Run(){
 for(int i =0 ; i <= numvueltas; i++){
 System.out.println(corredor+"termina vuelta"+i);
 
 }
 System.out.println("******* Ganador ******* " + corredor);
}
public static void main(String[]tesji){
//Crear Hilos
	Thread corredor1 = new Thread(new HiloRunnable("hamilton",25));
	Thread corredor2 = new Thread(new HiloRunnable("Checo perez",25));
	Thread corredor3 = new Thread(new HiloRunnable("Max Verstapen",25));
	Thread corredor4 = new Thread(new HiloRunnable("Rayo Mc queen",25));
	// Ejecutar hilos
	corredor1.start();
	corredor2.start();
	corredor3.start();
	corredor4.start();
	}
}
