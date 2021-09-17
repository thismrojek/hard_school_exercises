import { writable } from "svelte/store";

export const TODO = writable([]);

export const addNote = (newNote) => {
	TODO.update(n => [...n, newNote]);
}