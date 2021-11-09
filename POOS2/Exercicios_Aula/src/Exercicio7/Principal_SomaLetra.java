package Exercicio7;

import javax.swing.JOptionPane;

public class Principal_SomaLetra {
    
    public static void main(String[] args){
        String letra;
        
        SomaLetra somaletra = new SomaLetra();
        
        letra = JOptionPane.showInputDialog("Informe a letra");
        
        do{
            somaletra.verificar(letra);
            letra = JOptionPane.showInputDialog("Informe a letra");
        } while(!"0".equals(letra));
        
        System.out.println("O número de vogais A é: " + somaletra.mostraQtdA());
        System.out.println("O número de vogais E é: " + somaletra.mostraQtdE());
        System.out.println("O número de vogais I é: " + somaletra.mostraQtdI());
        System.out.println("O número de vogais O é: " + somaletra.mostraQtdO());
        System.out.println("O número de vogais U é: " + somaletra.mostraQtdU());
        System.out.println("O número de consoantes é: " + somaletra.mostraConsoantes());
    }
}
