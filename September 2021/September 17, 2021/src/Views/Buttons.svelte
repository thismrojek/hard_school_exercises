<script>
    import CounterButton from "../Components/counterButton.svelte";
    import HoverButton from "../Components/hoverButton.svelte";
</script>

<div class="hoverButtons">
    <HoverButton hoverColor={'#454545'} />
    <HoverButton hoverColor={'#223322'} />
    <HoverButton hoverColor={'#558877'} />
</div>

<div class="hoverButtons">
    <CounterButton />
</div>

<style type="text/scss">
    .hoverButtons {
        display: flex;
        justify-content: center;

        &:first-of-type {
            margin-top: 3rem;
        }
    }
</style>