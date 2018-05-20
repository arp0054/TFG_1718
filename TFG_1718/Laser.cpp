/*
 * Laser.cpp
 *
 *  Created on: 12 mar. 2018
 *      Author: Alvaro Ruifernández Palacios
 */

#include "Laser.h"
#include "Interfaz.cpp"

Laser::Laser() {
	Connection_information con=new Connection_information("/dev/ttyACM0");
}

Laser::~Laser() {
}

Interfaz Laser::getInterfaz(){
	return inter;
}

void Laser::setInterfaz(Interfaz _inter){

	Urg_driver::connection_type_t connection_type_;
	    string device_ip;
	    long baudrate_or_port_number_;
	    device_ip = "192.168.1.37";
	    baudrate_or_port_number_ = 10940;
}

Punto* Laser::dividirDatos(){
	return entrada;
}

int* Laser::getDatos(){
	Urg_driver urg;
	urg.set_scanning_parameter(urg.deg2step(-90), urg.deg2step(+90), 0);
	    enum { Capture_times = 10 };
	    urg.start_measurement(Urg_driver::Distance, Urg_driver::Infinity_times, 0);
	    for (int i = 0; i < Capture_times; ++i) {
	        vector<long> data;
	        long time_stamp = 0;

	        if (!urg.get_distance(data, &time_stamp)) {
	            cout << "Urg_driver::get_distance(): " << urg.what() << endl;
	            return 1;
	        }
	        datos==(urg, data, time_stamp);
	    }
	return datos[1];
}

void Laser::setDatos(int* dat){

}
