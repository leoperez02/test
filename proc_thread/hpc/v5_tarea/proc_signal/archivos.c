#include "archivos.h"

void guarda_datos(float seno[], char* file_name)
{
	FILE *ap_arch;
	register int i;

	ap_arch = fopen(file_name,"w");
	if(!ap_arch)
	{
		perror("Error al abrir el archivo...\n");
		exit(EXIT_FAILURE);
	}
	for ( i = 0 ; i < MUESTRAS ; i++)
	{
		fprintf(ap_arch, "%f\n", seno[i]);
	}
	fclose(ap_arch);
}
