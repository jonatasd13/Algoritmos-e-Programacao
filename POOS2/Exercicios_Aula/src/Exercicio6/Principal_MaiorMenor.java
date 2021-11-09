package Exercicio6;
import javax.swing.JOptionPane;
public class Principal_MaiorMenor {
    public static void main(String[] args){
        MaiorMenor maiormenor = new MaiorMenor();
        
        int maior, menor, num, a;
        
        a = Integer.parseInt(JOptionPane.showInputDialog("Informe um número"));
        maior = a;
        menor = a;
        for(int i=1; i<=9; i++){
            num = Integer.parseInt(JOptionPane.showInputDialog("Informe um número"));
            if(num > maior){
                maior = num;
            }
            if(num < menor){
                menor = num;
            }
        }
        
        maiormenor.mostrar(maior, menor);
    }
}
