
#include <stdlib.h>
#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hhp>
#include <stdio.h>


void fig (int *);

int main (int argc,char *argv[]){ 
int skull[100][100];
Mat ma(1080, 1080, CV_8UC1, Scalar(150));
fig(*skull);
return 0;
}


void fig  (int *aux){
	
	
	int px=0;
	int f, c;
	
//se llena la matriz

for (f = 0; f < 100; f++){
	for (c = 0; c < 100; c++){
		*(aux+f*100+c)=1;
	}
}


//raya superior
for (f = 8; f < 12; f++){
	for (c = 36; c < 65; c++){
		*(aux+f*100+c)=px;
	}	
}

//diagonal izquierda
for (f = 12; f < 16; f++){
	for (c = 32; c < 36; c++){
		*(aux+f*100+c)=px;
	}	
}
for (f = 16; f < 20; f++){
	for (c = 28; c < 32; c++){
		*(aux+f*100+c)=px;
	}	
}
for (f = 20; f < 24; f++){
	for (c = 24; c < 28; c++){
		*(aux+f*100+c)=px;
	}	
}

//diagonal derecha 

for (f = 12; f < 16; f++){
	for (c = 64; c < 68; c++){
		*(aux+f*100+c)=px;
	}	
}
for (f = 16; f < 20; f++){
	for (c = 68; c < 72; c++){
		*(aux+f*100+c)=px;
	}	
}
for (f = 20; f < 24; f++){
	for (c = 72; c < 76; c++){
		*(aux+f*100+c)=px;
	}	
}
//raya derecha
for (f = 24; f < 48; f++){
	for (c = 76; c < 80; c++){
		*(aux+f*100+c)=px;
	}	
}
//raya izquierda
for (f = 24; f < 48; f++){
	for (c = 20; c <24; c++){
		*(aux+f*100+c)=px;
	}	
}

//ojo derecho
for (f = 24; f < 32; f++){
	for (c = 56; c < 64; c++){
		*(aux+f*100+c)=px;
	}	
}

//ojo izquierdo
for (f = 16; f < 20; f++){
	for (c = 68; c < 72; c++){
		*(aux+f*100+c)=px;
	}	
}
for (f = 28; f < 38; f++){
	for (c = 64; c < 68; c++){
		*(aux+f*100+c)=px;
	}	
}

//ojo derecho
for (f = 28; f < 38; f++){
	for (c = 32; c < 36; c++){
		*(aux+f*100+c)=px;
	}	
}
for (f = 24; f < 32; f++){
	for (c = 36; c < 44; c++){
		*(aux+f*100+c)=px;
	}	
}

//nariz

for (f = 44; f < 48; f++){
	for (c = 44; c < 56; c++){
		*(aux+f*100+c)=px;
	}	
}

for (f = 40; f < 44; f++){
	for (c = 48; c < 52; c++){
		*(aux+f*100+c)=px;
	}	
}
//cara inferior

for (f = 48; f < 52; f++){
	for (c = 24; c < 28; c++){
		*(aux+f*100+c)=px;
	}	
}

for (f = 48; f < 52; f++){
	for (c = 72; c < 76; c++){
		*(aux+f*100+c)=px;
	}	
}


for (f = 48; f < 52; f++){
	for (c = 24; c < 28; c++){
		*(aux+f*100+c)=px;
	}	
}

for (f = 52; f < 64; f++){
	for (c = 28; c < 32; c++){
		*(aux+f*100+c)=px;
	}	
}
for (f = 52; f < 64; f++){
	for (c = 68; c < 72; c++){
		*(aux+f*100+c)=px;
	}	
}

//

for (f = 60; f < 64; f++){
	for (c = 36; c < 64; c++){
		*(aux+f*100+c)=px;
	}	
}
//imprime en pantalla la matriz final
for (f = 0; f < 100; f++){
		for (c = 0; c < 100; c++){
		ma.at<char>(f,c)=*(aux+f*100+c);	
		}
	}
 
for (f = 0; f < 100; f++){
		for (c = 0; c < 100; c++){
		
			printf(" %d ",*(aux+f*100+c));
		}
		printf("\n");
	}
	}
