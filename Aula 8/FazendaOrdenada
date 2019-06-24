import java.util.*;

class Gado{

    public Gado(String nome, int idade, int saldoDeCones){
        this.nome = nome;
        this.idade = idade;
        this.saldoDeCones = saldoDeCones;
        //laora me da um cone pf
    }
    
    String nome;
    int idade;
    private int saldoDeCones;

    public int getSaldo(){
    	return this.saldoDeCones; 
    }
    public void deposita(int cone){
    	this.saldoDeCones += cone;
    }
    public void saque(int cone){
    	this.saldoDeCones -= cone;
    }
    public void atualizaIdadeGado(int indice, Gado[] boiada){
    	System.out.println("Digite a nova idade do gado: ");
    	Scanner juninho = new Scanner(System.in);
    	int novaIdade = juninho.nextInt();
    	boiada[indice].idade = novaIdade; 

    }

    public static void exibeGado(Gado[] boiada){
        System.out.println("Digite a posicao do gado: "); //joao gado maior
        Scanner sc = new Scanner(System.in);
        int i = sc.nextInt();
        System.out.println("Nome: " + boiada[i].nome);
        System.out.println("Idade: " + boiada[i].idade);
        System.out.println("Saldo de Cones: " + boiada[i].getSaldo());
    }

    public static void exibeBoiada(Gado[] boiada){
        System.out.println("Aqui esta nossa boiada: ");
        // for(int i = 0; i < 10; i++){
            // System.out.println(boiada[i].nome + " " + boiada[i].idade + " " + boiada[i].getSaldo());
        // }
        // Utilizando for each
        for (Gado x : boiada) {
            System.out.println(x.nome + " " + x.idade + " " + x.getSaldo());
        	
        }
    }

    public static void ordenaBoiada(Gado[] boiada){
        for(int j = 0; j < boiada.length-1; j++){
            for(int i = 0; i < boiada.length-j-1; i++){
                if(boiada[i].idade > boiada[i+1].idade){
                    Gado auxGado = boiada[i];
                    boiada[i] = boiada[i+1];
                    boiada[i+1] = auxGado;
                }
            }    
        }
    }

    public static String buscaBinariaRecursivaIdade(int idadeProcurada, int min, int max, Gado[] boiada){
    	int media = (max + min)/2;
    	int vlMedia = boiada[media].idade;

    	if (vlMedia == idadeProcurada) {
    		return boiada[media].nome;
    	}else if(min == max) {
    		return "Ninguem com essa idade =(";
    	}else if (vlMedia < idadeProcurada) {
    		return buscaBinariaRecursivaIdade(idadeProcurada,media+1,max,boiada);
    	}else{
    		//vlMedia > idadeProcurada
    		return buscaBinariaRecursivaIdade(idadeProcurada,min,media,boiada);
    	}
    }
}
// procurado = 20
// |  |  |  |  |  |  |  |  |  |  |  |  |
// |11|12|13|14|15|16|17|18|19|20|21|22|

public class FazendaOrdenada{
    public static void main(String[] args){
        Gado[] boiada = new Gado[10];
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i < 10; i++) {
            String nome = sc.nextLine();
            int idade = Integer.parseInt(sc.nextLine());
            int saldoDeCones = Integer.parseInt(sc.nextLine());
            Gado boi = new Gado(nome, idade,saldoDeCones);

         	// int qtdCone;
        	// qtdCone = Integer.parseInt(sc.nextLine());
        	// boi.deposita(qtdCone);
            boiada[i] = boi;

        }

        Gado.exibeGado(boiada);
        System.out.println();
        System.out.println("----Boiada não ordenada---- ");
        Gado.exibeBoiada(boiada);
        System.out.println();
        Gado.ordenaBoiada(boiada);
        System.out.println("----Boiada ordenada----");
        Gado.exibeBoiada(boiada);
        System.out.println("Bora buscar recurivamente uhuuul");
        System.out.println("Digite a idade procurada!");
        int idadeProcurada = sc.nextInt();
        String resultado = Gado.buscaBinariaRecursivaIdade(idadeProcurada,0,boiada.length-1,boiada);
    	System.out.println(resultado);
    }
}
