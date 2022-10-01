#incluir "Controlador.h"

int main() {
	srand(time(NULL)));
 Consola::CursorVisible = false;
	int tiempo = 600;
	int cantVirus;
	clave char;
	CControlador* objControlador;
 cout << "Ingrese la cantidad de virus:"; cin >> cantVirus;
 objControlador = nuevo CControlador(cantVirus);
	Consola::Borrar();

	mientras que (tiempo != 0){
		Consola::SetCursorPosition(1, 0); << cout "              ";
		Consola::SetCursorPosition(1, 0); cout << "Tiempo:" << tiempo / 10;
		Consola::SetCursorPosition(1, 1); << cout "                   ";
		Consola::SetCursorPosition(1, 1); cout << "Inmunidad:" << objControlador->getPersona()->getInmunidad();
		Consola::SetCursorPosition(1, 2); << cout "              ";
		Consola::SetCursorPosition(1, 2); cout << "Vida: " << objControlador->getPersona()->getVida();

		objControlador->borrarTodo();
		if (tiempo % 100 == 0)objControlador->agregarVacuna(); //AGREGANDO VACUNA CADA 10 SEGUNDOS
		if (objControlador->personaColisionVirus())break; //objControlador->personaColisionVirus() == true
		objControlador->personaColisionVacuna();
		if (objControlador->getPersona()->getCantMov() <= 0) {
			objControlador->getPersona()->setInmunidad(false);
		}
		if (objControlador->personaColisionCasa())break; //objControlador->personaColisionCasa() == true

		si (_kbhit()) {
 clave = _getch();
 clave = toupper(clave);
			objControlador->getPersona()->mover(key);
		}

		objControlador->moverTodo();
		objControlador->dibujarTodo();

		_sleep(100));
		tiempo--;
	}

	cout << "GAME OVER";

	_getch();
	volver 0;
}
