/*
 * Laser.cpp
 *
 *  Created on: 12 mar. 2018
 *      Author: Alvaro Ruifernández Palacios
 */

#include <Laser.h>
#include <Interfaz.h>
#include <stddef.h>
#include <WinSock2.h>
#pragma comment(lib,"ws2_32.lib")

using namespace std;


Laser::Laser() {
}

Laser::~Laser() {
}



Punto* Laser::setDatos(){
	string data;
	istringstream iss(data);
	string item;
	string parcial;
	double dat1;
	double dat2;
	int i=0;
	while (getline(iss,item,',')){
		parcial =stoi(item,nullptr,10);
		Punto p;
		dat1=(double)parcial.substr(0, parcial.find('|'));
		dat2=(double)parcial.substr(parcial.find('|'), sizeof(parcial)-1);
		p.setCoors(dat1,dat2);
		entrada[i]= p;
	}
	return entrada;
}

int* Laser::getDatos(){
	return datos;
}

void Laser::conectar(){
	//Winsock Startup
		WSAData wsaData;
		WORD DllVersion = MAKEWORD(2, 1);
		if (WSAStartup(DllVersion, &wsaData) != 0)
		{
			MessageBoxA(NULL, "Winsock startup failed", "Error", MB_OK | MB_ICONERROR);
			exit(1);
		}

		SOCKADDR_IN addr;
		int sizeofaddr = sizeof(addr);
		addr.sin_addr.s_addr = inet_addr("127.0.0.1");
		addr.sin_port = htons(1111);
		addr.sin_family = AF_INET;

		SOCKET Connection = socket(AF_INET, SOCK_STREAM, NULL);
		if (connect(Connection, (SOCKADDR*)&addr, sizeofaddr) != 0)
		{
			MessageBoxA(NULL, "Failed to Connect", "Error", MB_OK | MB_ICONERROR);
		}
		std::cout << "Connected!" << std::endl;

		char MOTD[256];
		recv(Connection, MOTD, sizeof(MOTD), NULL);
		std::cout << "MOTD:" << MOTD << std::endl;
		while (true)
		{
			Sleep(10);
		}

}
