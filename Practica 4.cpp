class mexicano {

   public String nombre;
   public String app;
   public String apm;
   public long RFC;
   public long CURP;
   public int  dia_nac;
   public int  mes_nac;
   public int  year_nac;
   public String  genero;
   public String estado;

}

public class Main{
   static Scanner sc = new Scanner(System.in);
   static Scanner scn = new Scanner(System.in);
   static Scanner scnr = new Scanner(System.in);
   
   
   public static void main(String[] args) {

     Random random = new Random();

     int valor1 = random.nextInt(9 - 1) + 1;
     
     int valor2 = random.nextInt(9 - 1) + 1;
       int valor3 = random.nextInt(9 - 1) + 1;
     

       mexicano m1 = new mexicano();
       mexicano m2 = new mexicano();   
       mexicano m3 = new mexicano();   
       
       System.out.println( "\n1");
       System.out.println( "Ingresar el  nombre: ");
       m1.nombre = sc.nextLine();
       System.out.println( "Ingrese su primer apellido: ");
       m1.app = sc.nextLine();
       System.out.println( "Ingrese su segundo apellido: ");
       m1.ape = sc.nextLine();
       System.out.println( "Genero(H o M): ");
       m1.genero = sc.nextLine();
       System.out.println( "Ingrese el estado de nacimiento: ");
       m1.estado = sc.nextLine();
       System.out.println( "Dia de nacimiento: ");
       m1.dia_nac = sc.nextInt();
       System.out.println( "Mes de nacimiento: ");
       m1.mes_nac = sc.nextInt();
       System.out.println( "Año de nacimiento: ");
       m1.year_nac = sc.nextInt();
       
       
       System.out.print( "CURP: ");

       System.out.print( ""+m1.app.charAt(0)+"");
       System.out.print( ""+m1.app.charAt(1)+"");
       System.out.print( ""+m1.apm.charAt(0)+"");
       System.out.print( ""+m1.nombre.charAt(0)+"");
       System.out.print( ""+m1.year_nac+"");
       System.out.print( ""+m1.mes_nac+"");
       System.out.print( ""+m1.dia_nac+"");
       System.out.print( ""+m1.genero.charAt(0)+"");
       System.out.print( ""+m1.estado.charAt(0)+"");
       System.out.print( ""+m1.estado.charAt(4)+"");
       System.out.print( ""+m1.app.charAt(2)+"");
       System.out.print( ""+m1.apm.charAt(1)+"");
       System.out.print( ""+m1.nombre.charAt(1)+"");
       System.out.print(valor1);
       System.out.print(valor2);
       System.out.print("\n");
       
       System.out.println( "\n2 ");
       System.out.println( "Ingrese su nombre: ");
       m2.nombre = scn.nextLine();
       System.out.println( "Ingrese su primer apellido: ");
       m2.app = scn.nextLine();
       System.out.println( "Ingrese su segundo apellido: ");
       m2.apm = scn.nextLine();
       System.out.println( "Dia de nacimiento: ");
       m2.dia_nac = scn.nextInt();
       System.out.println( "Mes de nacimiento: ");
       m2.mes_nac = scn.nextInt();
       System.out.println( "Año de nacimiento: ");
       m2.yea_rnac = scn.nextInt();
       
 
       System.out.println( "RFC: ");

       System.out.print( ""+m2.app.charAt(0)+"");
       System.out.print( ""+m2.app.charAt(1)+"");
       System.out.print( ""+m2.apm.charAt(0)+"");
       System.out.print( ""+m2.nombre.charAt(0)+"");
       System.out.print( ""+m2.year_nac+"");
       System.out.print( ""+m2.mes_nac+"");
       System.out.print( ""+m2.dia_nac+"");
       System.out.print(valor1);
       System.out.print(valor2);
       System.out.println(valor3);
       
       System.out.println( "\n3");
       System.out.println( "Ingrese su nombre: ");
       m3.nombre = scnr.nextLine();
       System.out.println( "Ingrese su primer apellido: ");
       m3.app = scnr.nextLine();
       System.out.println( "Ingrese su segundo apellido: ");
       m3.apm = scnr.nextLine();
       System.out.println( "Genero(H o M): ");
       m3.genero = scnr.nextLine();
       System.out.println( "Estado de nacimiento: ");
       m3.estado = scnr.nextLine();
       System.out.println( "Dia de nacimiento: ");
       m3.dia_nac = scnr.nextInt();
       System.out.println( "Mes de nacimiento: ");
       m3.mes_nac = scnr.nextInt();
       System.out.println( "Año de nacimiento: ");
       m3.year_nac = scnr.nextInt();
       
       
       System.out.print( "CURP: ");

       System.out.print( ""+m3.app.charAt(0)+"");
       System.out.print( ""+m3.app.charAt(1)+"");
       System.out.print( ""+m3.apm.charAt(0)+"");
       System.out.print( ""+m3.nombre.charAt(0)+"");
       System.out.print( ""+m3.yea_rnac+"");
       System.out.print( ""+m3.mes_nac+"");
       System.out.print( ""+m3.dia_nac+"");
       System.out.print( ""+m3.genero.charAt(0)+"");
       System.out.print( ""+m3.estado.charAt(0)+"");
       System.out.print( ""+m3.estado.charAt(4)+"");
       System.out.print( ""+m3.app.charAt(2)+"");
       System.out.print( ""+m3.apm.charAt(1)+"");
       System.out.print( ""+m3.nombre.charAt(1)+"");
       System.out.print(valor1);
       System.out.print(valor2);
       System.out.print("\n");
       
       System.out.println( "RFC: ");

       System.out.print( ""+m3.app.charAt(0)+"");
       System.out.print( ""+m3.app.charAt(1)+"");
       System.out.print( ""+m3.apm.charAt(0)+"");
       System.out.print( ""+m3.nombre.charAt(0)+"");
       System.out.print( ""+m3.year_nac+"");
       System.out.print( ""+m3.mes_nac+"");
       System.out.print( ""+m3.dia_nac+"");
       System.out.print(valor1);
       System.out.print(valor2);
       System.out.println(valor3);
   }
}


