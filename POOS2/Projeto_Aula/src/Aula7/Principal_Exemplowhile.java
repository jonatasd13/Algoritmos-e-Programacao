package Aula7;

import javax.swing.JOptionPane;
public class Principal_Exemplowhile {
    public static void main(String[] args){
        int numero = 1;
        
        Exemplowhile exemplowhile = new Exemplowhile();
        
        while(numero != 0){
            numero = Integer.parseInt(
                    JOptionPane.showInputDialog("Informe o número"));
            exemplowhile.somar(numero);
        }
        
        JOptionPane.showMessageDialog(null, exemplowhile.mostra());
    }
}
