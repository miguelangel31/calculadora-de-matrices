#include <iostream>
#include <conio.h>
#include<string.h>

using namespace std;

int main(){
	int matriz [5][5], matrizt[5][5], matriz2[5][5],matrizproducto[10][10]={{'\0'}}, det, producto, producto2, i;
	double comprobante= 0,nf, nc, nf2, nc2, z;
	char tipo[15], simetrica[]="simetrica", determinante[]="determinante", multiplicar[]="multiplicar", sumar[]="sumar", restar[]="restar";
	
	
	cout<<"que desea hacer? : ";cin.getline(tipo, 15, '\n');
	
		cout<<"\n";
		cout<<"*********************\n";
		
	//opcion de simetrica====================================================================================
	if(strcmp(tipo,simetrica)==0){	
		do{
		cout<<"introduce el numero de filas y columnas de la matriz: ";cin>>nf;cin>>nc;
		cout<<"\n";
		cout<<"*********************\n";
		comprobante = nf / nc;
	
		if(comprobante == 1){
			
		comprobante = 10000;
		}else{
		cout<<"!!!la matriz debe ser cuadrada!!!"<<endl;
		}}while(comprobante != 10000);
	
		for(int i=0; i<nf; i++){
			for(int j=0;j<nc;j++){
			
				cout<<"introduce un valor para ["<<i<<"]["<<j<<"] ";cin>>matriz[i][j];
			}
		}
		
		cout<<"\n";
		cout<<"*********************\n";
		cout<<"matriz introducida: "<<endl;
		for(int i=0; i<nf; i++){
			cout<<" ";
			for(int j=0;j<nc;j++){
				
				cout<<matriz[i][j]<<" ";
			}
			cout<<endl;
		}
		
			cout<<"\n";
		cout<<"*********************\n";
		
		
		for(int i=0; i<nf; i++){ //matriz transpuesta
			for(int j=0;j<nc;j++){
				
				matrizt[j][i]=matriz[i][j];
			}
		}
		
		
		cout<<"matriz transpuesta: "<<endl;
		for(int i=0; i<nf; i++){
			cout<<" ";
			for(int j=0;j<nc;j++){
				
				cout<<matrizt[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"\n";
		cout<<"*********************\n";
		
		for(int i=0; i<nf; i++){
			for(int j=0;j<nc;j++){
				
				comprobante = matrizt[i][j] /matriz[i][j];
				
				if(comprobante != 1){
					 z = 1;	
					
				}
			}
		}
		
		if(z ==1){
			
			cout<<"la matriz no es simetrica";
		}else{
			cout<<"la matriz es simetrica";
		}
		}
		
		
		//opcion determinante=======================================================================================
		else if(strcmp(tipo,determinante)== 0){
			
				do{
		cout<<"introduce el numero de filas y columnas de la matriz: ";cin>>nf;cin>>nc;
		if(nf < 4 && nf> 0){
		
		comprobante = nf / nc;
	
		if(comprobante == 1){
			
		comprobante = 10000;
		}
		}else{
			
		cout<<"\n";
		cout<<"*********************\n";
		cout<<"!!!la matriz debe ser menor que una 4*4!!!"<<endl;
		}}while(comprobante != 10000);
	
	
		cout<<"\n";
		cout<<"*********************\n";
			for(int i=0; i<nf;i++){
		for(int j=0; j<nc;j++){
			
			cout<<"introduce un valor para ["<<i<<"]["<<j<<"] ";cin>>matriz[i][j];
		}
		cout<<"";
		
		
		
	}
		
		
		cout<<"\n";
		cout<<"*********************\n";
	cout<<"matriz introducida: "<<endl;
		for(int i=0; i<nf; i++){
			cout<<" ";
			for(int j=0;j<nc;j++){
				
				cout<<matriz[i][j]<<" ";
			}
			cout<<endl;
		}
	
	if(nf == 1){
		
		det = matriz[0][0];
	}else if(nf == 2){
		
		det =( matriz[0][0] *matriz[1][1] ) - (matriz[0][1]*matriz[1][0]);
	}else if(nf == 3){
		
		det= (matriz[0][0]*matriz[1][1]*matriz[2][2] + matriz[1][0]*matriz[2][1]*matriz[0][2] + matriz[2][0]*matriz[0][1]*matriz[1][2])-(matriz[0][2]*matriz[1][1]*matriz[2][0] + matriz[1][2]*matriz[2][1]*matriz[0][0] + matriz[2][2]*matriz[0][1]*matriz[1][0]);
	}
	
	
		cout<<"\n";
		cout<<"*********************\n";
	cout<<"el determinante es: "<<det;
		}
	
	
	//opcion producto======================================================================================================================
	else if(strcmp(tipo,multiplicar)== 0){
		
				do{
		
		cout<<"introduce el numero de filas y columnas de la matriz 1: ";cin>>nf;cin>>nc;//introducir filas/columnas de la matriz
	
	
		cout<<"\n";
		cout<<"*********************\n";
		
		
		cout<<"introduce el numero de filas y columnas de la matriz 2: ";cin>>nf2;cin>>nc2;
		
		cout<<"\n";
		cout<<"*********************\n";
		if(nf != nc2 && nc != nf2){
			
			cout<<"los datos introducidos no son validos!!!"<<endl;//comprobador de que los datos introducidos son validos
		}
		}while((nf != nc2) || (nc != nf2));
		
		for(int i=0; i<nf;i++){
		for(int j=0; j<nc;j++){
			
			cout<<"introduce un valor para ["<<i<<"]["<<j<<"] de la matriz 1";cin>>matriz[i][j];//intoducir datos de la matriz
		}
		cout<<"";
		}
	
		cout<<"\n";
		cout<<"*********************\n";
		
		cout<<"matriz introducida: "<<endl;// se muestra la matriz introducida
		for(int i=0; i<nf; i++){
			cout<<" ";
			for(int j=0;j<nc;j++){
				
				cout<<matriz[i][j]<<" ";
			}
			cout<<endl;
		}
	
		cout<<"\n";
		cout<<"*********************\n";
		
		for(int i=0; i<nf2;i++){
		for(int j=0; j<nc2;j++){
			
			cout<<"introduce un valor para ["<<i<<"]["<<j<<"] de la matriz 2 ";cin>>matriz2[i][j];//intoducir datos de la matriz
		}
		cout<<"";}
		
		cout<<"\n";
		cout<<"*********************\n";
		
		cout<<"matriz introducida: "<<endl;// se muestra la matriz producto
		for(int i=0; i<nf2; i++){
			cout<<" ";
			for(int j=0;j<nc2;j++){
				
				cout<<matriz2[i][j]<<" ";
			}
			cout<<endl;
		}
		
		
		
	
		
		
	
	
		
		for(int i=0;i<nf;i++){
			for(int j=0;j<nc2;j++){
				
				matrizproducto[i][j]=0;
				for(int k=0; k<nc;k++){
					
						
						matrizproducto[i][j] += matriz[i][k] * matriz2[k][j];
						
						
						
				}
			}
		}
		
		
		cout<<"\n";
		cout<<"*********************\n";
		
		cout<<"producto: "<<endl;// se muestra la matriz producto
		
		for(int i=0; i<nf; i++){
			cout<<" ";
			for(int j=0;j<nc2;j++){
				
				cout<<matrizproducto[i][j]<<" ";
			}
			cout<<endl;
		}
		
	}
	//opcion suma===============================================================000
	else if(strcmp(tipo,sumar)==0){
		do{
			
			comprobante =0;
		cout<<"cuantas filas y columnas tiene la matriz 1: ";cin>>nf;cin>>nc;
	cout<<"\n";
	cout<<"*********************\n";
	cout<<"cuantas filas y columnas tiene la matriz 2: ";cin>>nf2;cin>>nc2;
	
	comprobante= nf/nf2 + nc/nc2;
	}while(comprobante != 2);
	cout<<"\n";
	cout<<"*********************\n";
	
	for(int i=0; i<nf;i++){
		for(int j=0;j<nc;j++){
			
			cout<<"introduce un valor para ["<<i<<"]["<<j<<"] ";cin>>matriz[i][j];
		}
	}
	cout<<"\n";
	cout<<"*********************\n";
	cout<<"matriz 1:\n ";
	for(int i=0; i<nf;i++){
		for(int j=0;j<nc;j++){
			
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n ";
	}
	
	cout<<"\n";
	cout<<"*********************\n";
	for(int i=0; i<nf;i++){
		for(int j=0;j<nc;j++){
			
			cout<<"introduce un valor para ["<<i<<"]["<<j<<"] ";cin>>matriz2[i][j];
		}
	}
	
	cout<<"\n";
	cout<<"*********************\n";
	cout<<"matriz 2: \n ";
	for(int i=0; i<nf;i++){
		for(int j=0;j<nc;j++){
			
			cout<<matriz[i][j]<<" ";
		}
	cout<<"\n ";
	}
	cout<<"\n";
	cout<<"*********************\n";
	
	for(int i=0;i<nf;i++){
		for(int j=0;j<nc;j++){
			
			matrizproducto[i][j] = matriz[i][j]+matriz2[i][j];
		}
	}
	
	cout<<"La suma de las matrices es: \n ";
	for(int i=0; i<nf;i++){
		for(int j=0;j<nc;j++){
			
			cout<<matrizproducto[i][j]<<" ";
		}
		cout<<"\n ";
	}
	// opcion restar======================================================================================
	}else if(strcmp(tipo, restar)== 0){
		do{
			
			comprobante= 0;
		cout<<"cuantas filas y columnas tiene la matriz 1: ";cin>>nf;cin>>nc;
	cout<<"\n";
	cout<<"*********************\n";
	cout<<"cuantas filas y columnas tiene la matriz 2: ";cin>>nf2;cin>>nc2;
	
	comprobante= nf/nf2 + nc/nc2;
	}while(comprobante != 2);
	cout<<"\n";
	cout<<"*********************\n";
	
	for(int i=0; i<nf;i++){
		for(int j=0;j<nc;j++){
			
			cout<<"introduce un valor para ["<<i<<"]["<<j<<"] ";cin>>matriz[i][j];
		}
	}
	cout<<"\n";
	cout<<"*********************\n";
	cout<<"matriz 1:\n ";
	for(int i=0; i<nf;i++){
		for(int j=0;j<nc;j++){
			
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n ";
	}
	
	cout<<"\n";
	cout<<"*********************\n";
	for(int i=0; i<nf;i++){
		for(int j=0;j<nc;j++){
			
			cout<<"introduce un valor para ["<<i<<"]["<<j<<"] ";cin>>matriz2[i][j];
		}
	}
	
	cout<<"\n";
	cout<<"*********************\n";
	cout<<"matriz 2: \n ";
	for(int i=0; i<nf;i++){
		for(int j=0;j<nc;j++){
			
			cout<<matriz[i][j]<<" ";
		}
	cout<<"\n ";
	}
	cout<<"\n";
	cout<<"*********************\n";
	
	for(int i=0;i<nf;i++){
		for(int j=0;j<nc;j++){
			
			matrizproducto[i][j] = matriz[i][j]-matriz2[i][j];
		}
	}
	
	cout<<"La resta de las matrices es: \n ";
	for(int i=0; i<nf;i++){
		for(int j=0;j<nc;j++){
			
			cout<<matrizproducto[i][j]<<" ";
		}
		cout<<"\n ";
	}
	
	}
	else{
		cout<<"Demomento no disponemos de esta opcion";
	}
getch ();
return 0;
}  
