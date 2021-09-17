<script lang="ts">
	import NewToDoInput from "../Components/NewToDoInput.svelte";
	import ToDoEntry from "../Components/ToDoEntry.svelte";
	import { TODO } from "../Data/ToDo";

	let toDoContainer: HTMLDivElement;
	let toDo: string[] = [];

	TODO.subscribe(data => toDo = data);
</script>

<header>
	<h1>Lista zadań</h1>
</header>

<main>
	<section class="addToDo">
		<NewToDoInput />
	</section>
	<section bind:this={toDoContainer} class="listToDo">
		{#each toDo as entry, index}
			<ToDoEntry toDoIndex={index} toDoText={entry} />
		{/each}
	</section>
</main>

<style type="text/scss">
	header,
	.addToDo {
		display: flex;
		justify-content: center;
	}

	main {
		width: 40vw;
		margin: 0 auto;
	}

	header {
		h1 {
			text-decoration: underline;
		}
	}
</style>
