import Deserializador;
import Serializador;
import Pessoa;

public class Principal {
    public static void main(String args[]){
        Serializador s = new Serializador();
        Pessoa pessoa = new Pessoa("Jonas", 17);
        try {
            s.serializar("/home/gustavo/pessoa", pessoa);
        } catch (Exception ex) {
            System.err.println("Falha ao serializar! - " + ex.toString());
        }

        Deserializador d = new Deserializador();
        pessoa = null;
        try {
            pessoa = (Pessoa) d.deserializar("/home/gustavo/pessoa");
        } catch (Exception ex) {
            System.err.println("Falha ao deserializar! - " + ex.toString());
        }
        System.out.println(pessoa.getNome() + " - " + pessoa.getIdade());
    }
}

