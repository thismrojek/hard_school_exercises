<script lang="ts">
	import { addNote } from "../Data/ToDo";
	import plusIcon from "../Icons/plus.svg";

	let newToDoInput: HTMLInputElement;

	function handleAddToDo() {
		const newNoteText = newToDoInput.value;
		if (newNoteText) addNote(newNoteText);
	}
</script>

<div class="toDoInput">
	<input bind:this={newToDoInput} />
	<button on:click={handleAddToDo}>{@html plusIcon}</button>
</div>

<style type="text/scss">
	.toDoInput {
		display: flex;
		width: 100%;

		input {
			width: 100%;
			outline: none;

			&:focus {
				border: 1px solid gray;
				transition: 0.5s;
			}
		}

		button {
			margin-left: 0.5rem;
			background: #cc8787;
			color: white;
			width: 2.5rem;
			cursor: pointer;
		}
	}
</style>
