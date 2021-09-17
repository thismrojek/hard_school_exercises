<script lang="ts">
    let counter = 0;

    function clickHandler(e) {
        counter++;
    }
</script>

<div class="counterButton">
    <button on:click={clickHandler}>
        Kliknij
    </button>
    <p>Przycisk został kilknięty {counter} razy.</p>
</div>

<style type="text/scss">
    .counterButton {
        button {
            display: flex;
            justify-content: center;
            align-items: center;
            margin: 1rem;
            width: 200px;
            height: 200px;
            font-size: 1.5rem;
            color: white;
            background: #d89e22;
            cursor: pointer;
        }
        p {
            margin: 1rem;
            padding-top: .25rem;
            border-top: 2px solid black;
            text-align: center;
            font-size: .75rem;
            color: gray;
        }
    }
</style>