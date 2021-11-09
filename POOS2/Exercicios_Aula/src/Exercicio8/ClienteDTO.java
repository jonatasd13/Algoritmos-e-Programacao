package Exercicio8;

public class ClienteDTO {
    private String nome, rg;
    private int idade;
    
    public String getNome(){
        return nome;
    }
    
    public void setNome(String nome){
        this.nome = nome;
    }
    
    public String getRG(){
        return rg;
    }
    
    public void setRG(String rg){
        this.rg = rg;
    }
    
    public int getIdade(){
        return idade;
    }
    
    public void setIdade(int idade){
        this.idade = idade;
    }
}
