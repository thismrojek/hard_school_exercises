<script lang="ts">
    import { TODO } from "../Data/ToDo";
    import trashIcon from "../Icons/trash.svg";

    export let toDoText: string;
    export let toDoIndex: number;

    let toDo: string[] = [];

    TODO.subscribe(data => toDo = data);

    function removeNote() {
        const reducedToDo = toDo.filter(n => toDo.indexOf(n) !== toDoIndex);
        TODO.set(reducedToDo);
    }
</script>

<article data-index={toDoIndex}>{toDoText} <span on:click={removeNote}>{@html trashIcon}</span></article>

<style type="text/scss">
    article {
        width: 100%;
        background: #dddddd;
        padding: .25rem;
        box-sizing: border-box;
        margin-bottom: .5rem;
        overflow-wrap: anywhere;
    }
</style>