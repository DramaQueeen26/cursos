"use strict";
(() => {
    // No tiene que tener un punto de retorno
    const error = (message) => {
        throw new Error(message);
    };
    error('Auxilio');
})();
