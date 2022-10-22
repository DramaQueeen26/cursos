var planta = {
	color: 'Verde',
	tamaño: 'Grande',
	cantidad: 5,
	metodo: function (){
		//Código
		alert('Entrando al método');

		return 'Hola';
	}
};

// document.write(planta.color); //Propiedad no lleva paréntesis

	document.write(planta.metodo()); //Los métodos si llevan paréntesis