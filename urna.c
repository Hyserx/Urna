#include <stdio.h>
#include <locale.h>

int main (void){
	
		
	setlocale(LC_ALL,"Portuguese");
	int n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n10=0,n11=0, n0=0, n=0, nn=0;
	char cont;
	
	
	
	
	
	

	printf("           ELEIÇÕES 2018         \n");
	
	printf("Vote no seu candidato com seus respectivos números antes do nome: \n");
	printf("1- Alvaro Dias\n2- Guilherme Boulos\n3- Ciro Gomes\n4- Cabo Daciolo\n5- José Maria Eymael\n6- João Amoêdo\n7- Fernando Haddad\n8- Geraldo Alckmin\n9- Henrique Meirelles\n10- Jair Bolsonaro\n11- Marina Silva\n00- Voto em branco\n");
	while (n!=99){
	scanf("%i",&n);
	
	

	
	if (n==1){	
		printf ("Deseja confirmar? s/n \n");
		scanf (" %c", &cont);
		if (cont == 's'){
			printf ("Voto confirmado \n");
			n1 ++;}
			if (cont != 's'){
				printf ("Tente novamente digitando o numero do candidato e confirmando. \n");
			}
			}
	if (n==2){
		printf ("Deseja confirmar? s/n \n");
		scanf (" %c", &cont);
		if (cont == 's'){
			printf ("Voto confirmado \n");
			n2 ++;}
			if (cont != 's'){
				printf ("Tente novamente digitando o numero do candidato e confirmando. \n");
			}
			}
	if (n==3){
		printf ("Deseja confirmar? s/n \n");
		scanf (" %c", &cont);
		if (cont == 's'){
			printf ("Voto confirmado \n");
			n3 ++;}
			if (cont != 's'){
				printf ("Tente novamente digitando o numero do candidato e confirmando. \n");
			}
			}
	if (n==4){
		printf ("Deseja confirmar? s/n \n");
		scanf (" %c", &cont);
		if (cont == 's'){
			printf ("Voto confirmado \n");
			n4 ++;}
			if (cont != 's'){
				printf ("Tente novamente digitando o numero do candidato e confirmando. \n");
			}
			}
	if (n==5){
		printf ("Deseja confirmar? s/n \n");
		scanf (" %c", &cont);
		if (cont == 's'){
			printf ("Voto confirmado \n");}
			if (cont != 's'){
				printf ("Tente novamente digitando o numero do candidato e confirmando. \n");
			}
			}
	if (n==6){
		printf ("Deseja confirmar? s/n \n");
		scanf (" %c", &cont);
		if (cont == 's'){
			printf ("Voto confirmado \n");
			n6 ++;}
			if (cont != 's'){
				printf ("Tente novamente digitando o numero do candidato e confirmando. \n");
			}
			}
	if (n==7){
		printf ("Deseja confirmar? s/n \n");
		scanf (" %c", &cont);
		if (cont == 's'){
			printf ("Voto confirmado \n");
			n7 ++;}
			if (cont != 's'){
				printf ("Tente novamente digitando o numero do candidato e confirmando. \n");
			}
			}
	if (n==8){
		printf ("Deseja confirmar? s/n \n");
		scanf (" %c", &cont);
		if (cont == 's'){
			printf ("Voto confirmado \n");
			n8 ++;}
			if (cont != 's'){
				printf ("Tente novamente digitando o numero do candidato e confirmando. \n");
			}
			}
	if (n==9){
		printf ("Deseja confirmar? s/n \n");
		scanf (" %c", &cont);
		if (cont == 's'){
			printf ("Voto confirmado \n");
			n9 ++;}
			if (cont != 's'){
				printf ("Tente novamente digitando o numero do candidato e confirmando. \n");
			}
			}
	if (n==10){
		printf ("Deseja confirmar? s/n \n");
		scanf (" %c", &cont);
		if (cont == 's'){
			printf ("Voto confirmado \n");
			n10 ++;}
			if (cont != 's'){
				printf ("Tente novamente digitando o numero do candidato e confirmando. \n");
			}
			}
	if (n==11){
		printf ("Deseja confirmar? s/n \n");
		scanf (" %c", &cont);
		if (cont == 's'){
			printf ("Voto confirmado \n");
			n11 ++;}
			if (cont != 's'){
				printf ("Tente novamente digitando o numero do candidato e confirmando. \n");
			}
			}
	if (n==0){
		printf ("Deseja confirmar voto em branco? s/n \n");
		scanf (" %c", &cont);
		if (cont == 's'){
			printf ("Voto confirmado \n");
			n0 ++;}
			if (cont != 's'){
				printf ("Tente novamente digitando o numero do candidato e confirmando. \n");
			}
			}
	if (n!=1 && n!=2 && n!=3 && n!=4 && n!=5 && n!=6 && n!=7  &&  n!=8 && n!=9 && n!=10 && n!=11 && n!=00 && n!=99){
		printf ("Deseja confirmar voto nulo? s/n \n");
		scanf (" %c", &cont);
		if (cont == 's'){
			printf ("Voto confirmado \n");
			nn ++;}
			if (cont != 's'){
				printf ("Tente novamente digitando o numero do candidato e confirmando. \n");
			}
			}
	
}	
	




	printf ("1- Alvaro Dias %d\n2- Guilherme Boulos %d\n3- Ciro Gomes %d\n4- Cabo Daciolo %d\n5- José Maria Eymael %d\n6- João Amoêdo %d\n7- Fernando Haddad %d\n8- Geraldo Alckmin %d\n9- Henrique Meirelles %d\n10- Jair Bolsonaro %d\n11- Marina Silva %d\n00- Votos em branco %d\nVotos nulos %d\n",n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11, n0, nn);
	
	if (n1>n2 && n1>n3 && n1>n4 && n1>n5 && n1>n6 && n1>n7 && n1>n8 && n1>n9 && n1>n10 && n1>n11 && n1>0 ){
		printf ("Candidato eleito: Alvaro dias com %d votos",n1);}
	if (n2>n1 && n2>n3 && n2>n4 && n2>n5 && n2>n6 && n2>n7 && n2>n8 && n2>n9 && n2>n10 && n2>n11 && n2>0 ){
		printf ("Candidato eleito: Guilherme Boulos com %d votos",n2);}
	if (n3>n2 && n3>n1 && n3>n4 && n3>n5 && n3>n6 && n3>n7 && n3>n8 && n3>n9 && n3>n10 && n3>n11 && n3>0 ){
		printf ("Candidato eleito: Ciro Gomes com %d votos",n3);}
	if (n4>n2 && n4>n3 && n4>n1 && n4>n5 && n4>n6 && n4>n7 && n4>n8 && n4>n9 && n4>n10 && n4>n11  && 1>0 ){
		printf ("Candidato eleito: Cabo Daciolo com %d votos",n4);}
	if (n5>n2 && n5>n3 && n5>n4 && n5>n1 && n5>n6 && n5>n7 && n5>n8 && n5>n9 && n5>n10 && n5>n11 && n5>0 ){
		printf ("Candidato eleito: José Maria Eymael com %d votos",n5);}
	if (n6>n2 && n6>n3 && n6>n4 && n6>n5 && n6>n1 && n6>n7 && n6>n8 && n6>n9 && n6>n10 && n6>n11 && n6>0 ){
		printf ("Candidato eleito: João Amoêdo com %d votos",n6);}
	if (n7>n2 && n7>n3 && n7>n4 && n7>n5 && n7>n6 && n7>n1 && n7>n8 && n7>n9 && n7>n10 && n7>n11 && n7>0 ){
		printf ("Candidato eleito: Fernando Haddad com %d votos",n7);}
	if (n8>n2 && n8>n3 && n8>n4 && n8>n5 && n8>n6 && n8>n7 && n8>n1 && n8>n9 && n8>n10 && n8>n11 && n8>0 ){
		printf ("Candidato eleito: Geraldo Alckmin com %d votos",n8);}
	if (n9>n2 && n9>n3 && n9>n4 && n9>n5 && n9>n6 && n9>n7 && n9>n8 && n9>n1 && n9>n10 && n9>n11 && n9>0 ){
		printf ("Candidato eleito: Henrique Meirelles com %d votos",n9);}
	if (n10>n2 && n10>n3 && n10>n4 && n10>n5 && n10>n6 && n10>n7 && n10>n8 && n10>n9 && n10>n11 && n10>n11 && n10>0  ){
		printf ("Candidato eleito: Jair Bolsonaro com %d votos",n10);}
	if (n11>n2 && n11>n3 && n11>n4 && n11>n5 && n11>n6 && n11>n7 && n11>n8 && n11>n9 && n11>n10 && n11>n1 && n11>0  ){
		printf ("Candidato eleito: Marina Silva com %d votos",n11);}			
	
		

}


