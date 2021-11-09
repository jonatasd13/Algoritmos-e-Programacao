package Exercicio1;
import javax.swing.JOptionPane;
public class Principal_Media {
    public static void main(String[] args){
        Media media1 = new Media();
        
        int nota1, nota2, nota3;
        float media;
        
        nota1 = Integer.parseInt(JOptionPane.showInputDialog("Informe a nota 1 de peso 5"));
        nota2 = Integer.parseInt(JOptionPane.showInputDialog("Informe a nota 2 de peso 3"));
        nota3 = Integer.parseInt(JOptionPane.showInputDialog("Informe a nota 3 de peso 3"));
        media = ((nota1*5) + (nota2*3) + (nota3*2))/10;
        
        media1.mostrar(media);
    }
}
