class Gado{
    public Gado(String nome, int idade){
        this.nome = nome;
        this.idade = idade;
    }
    
    String nome;
    int idade;
}

public class FazendaOrdenada{

    public static void main(String[] args){
        Gado[] boiada = new Gado[10];
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i < 10; i++) {
            String nome = sc.nextLine();
            int idade = Integer.parseInt(sc.nextLine());

            Gado boi = new Gado(nome, idade); 
        }
    }
}