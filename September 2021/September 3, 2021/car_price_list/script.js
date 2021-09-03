const data = {
    cars: ['Mazda', 'BMW', 'Toyota', 'Honda'],
    prices: ['16 000 zł', '28 000 zł', '21 000 zł', '59 000 zł']
}

const selectors = {
    buttons: {
        getCars: document.querySelector('#getCars'),
        getPrices: document.querySelector('#getPrices')
    },
    containers: {
        carsList: document.querySelector('#carsList'),
        pricesList: document.querySelector('#pricesList')
    }
}

let appended = {
    cars: false,
    prices: false
}

selectors.buttons.getCars.addEventListener('click', () => {
    if (!appended.cars) {
        const cars = data.cars.map(car => `<li>${car}</li>`);
        cars.forEach(DOM => selectors.containers.carsList.innerHTML += DOM);
        appended.cars = true;
    }
})

selectors.buttons.getPrices.addEventListener('click', () => {
    if (!appended.prices) {
        const prices = data.prices.map(price => `<li>${price}</li>`);
        prices.forEach(DOM => selectors.containers.pricesList.innerHTML += DOM);
        appended.prices = true;
    }
})