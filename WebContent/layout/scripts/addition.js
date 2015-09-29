
$(function(){
var slider = new BeaverSlider({
    structure: {
        type: "slider",
        container: {
            id: "my-slider",
            width: 720,
            height: 420
        },
        controls: {
            previewMode: false,
            align: "center",
            containerClass: "control-container",
            elementClass: "control-element",
            elementActiveClass: "control-element-active"
        }
    },
    content: {
        images: [
          "img/1.jpg",
          "img/2.jpg",
          "img/pic.jpg"
        ]
    },
    animation: {
        waitAllImages: true,
        effects: effectSets["slider: big set 2"],
        initialInterval: 1000,
        interval: 2000
    }
});   
});