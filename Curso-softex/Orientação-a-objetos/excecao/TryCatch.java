package excecao;

import java.util.Scanner;

public class TryCatch {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    try {
      System.out.print("Digite um valor inteiro..:");
      int numero1 = s.nextInt();
      System.out.println(numero1);
    } catch (Exception ex) {
      System.out.println("ERRO - Valor digitado nao e um numero inteiro!");
    }
  }
}