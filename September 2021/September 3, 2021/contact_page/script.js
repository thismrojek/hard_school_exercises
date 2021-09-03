const selectors = {
    forms: {
        contactForm: document.querySelector('#contactForm')
    }
}

selectors.forms.contactForm.addEventListener('submit', (e) => {
    e.preventDefault();
    const formData = new FormData(selectors.forms.contactForm);
    const firstname = formData.get('firstname');
    alert(`Dziękujemy, ${firstname}, za złożenie zapytania. Odpowiemy jak najszybciej.`)
})