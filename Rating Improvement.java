import java.util.Scanner; 

class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    
  int t = input.nextInt();   
for (int i = 0; i < t; i++) {
      int a = input.nextInt();
      int b = input.nextInt();
      if(b>=a && b<=a+200){
          System.out.println("YES");   
      }
      else{
          System.out.println("NO"); 
      }
  }
       
         
  }
}
