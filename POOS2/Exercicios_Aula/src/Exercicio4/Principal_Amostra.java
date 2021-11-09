package Exercicio4;

import javax.swing.JOptionPane;
public class Principal_Amostra {
    public static void main(String[] args){
        Amostra amostra = new Amostra();
        
        JOptionPane.showMessageDialog(null, "A classificação da amostra é: " + 
                amostra.mostrar(Double.parseDouble(JOptionPane.showInputDialog("Informe a pontuação de água na amostra")))
        );
    }
}
