import java.io.Serializable;

public class Pessoa implements Serializable {
    private String nome;
    private int idade;

    public Pessoa(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }

    public String getNome(){return this.cor;}
    public int getIdade(){return this.idade;}
}