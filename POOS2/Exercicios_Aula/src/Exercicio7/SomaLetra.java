package Exercicio7;
public class SomaLetra {
    private String letra;
    private int qtda, qtde, qtdi, qtdo, qtdu, qtdc;
    
    public void verificar(String letra){
        this.letra = letra;
        
        if("a".equalsIgnoreCase(letra)){
            qtda++;
        } else if("e".equalsIgnoreCase(letra)){
            qtde++;
        } else if("i".equalsIgnoreCase(letra)){
            qtdi++;
        } else if("o".equalsIgnoreCase(letra)){
            qtdo++;
        } else if("u".equalsIgnoreCase(letra)){
            qtdu++;
        } else{
            qtdc++;
        }
    }
    
    public int mostraQtdA(){
        return this.qtda;
    }
    
    public int mostraQtdE(){
        return this.qtde;
    }
    
    public int mostraQtdI(){
        return this.qtdi;
    }
    
    public int mostraQtdO(){
        return this.qtdo;
    }
    
    public int mostraQtdU(){
        return this.qtdu;
    }
    
    public int mostraConsoantes(){
        return this.qtdc;
    }
}
