<script lang="ts">
    export let hoverColor: string;

    function changeColor(e) {
        e.target.style.background = hoverColor;
    }
</script>

<button on:mouseover={changeColor}></button>

<style type="text/scss">
    button {
        margin: 1rem;
        width: 200px;
        height: 200px;
        background: #dddddd;
    }
</style>