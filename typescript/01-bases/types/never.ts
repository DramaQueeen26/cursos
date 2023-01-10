(() => {

    // No tiene que tener un punto de retorno
    const error = ( message:string ):never => {

        throw new Error(message);

    }

    error('Auxilio');

})();