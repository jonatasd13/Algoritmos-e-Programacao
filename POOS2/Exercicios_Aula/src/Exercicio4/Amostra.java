package Exercicio4;

public class Amostra {
    private double pont;
    private String resposta;
    
    public String mostrar(double pont){
        this.pont = pont;
        
        if(this.pont <= 10){
            this.resposta = "Rochosa";
        }
        else{
            if((this.pont > 10) && (this.pont <= 40)){
                this.resposta = "Firme";
            }
            else{
                if((this.pont > 40) && (this.pont <= 80)){
                this.resposta = "Pantanosa";
                }
                else{
                    this.resposta = "Quantidade de água inválida!";
                }
            }
        }
        return this.resposta;
    }
}
