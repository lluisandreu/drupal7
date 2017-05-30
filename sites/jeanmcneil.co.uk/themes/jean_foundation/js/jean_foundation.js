/* Implement custom javascript here */

// We define a function that takes one parameter named $.
(function ($) {

    $(window).load(function () {
        if ($('.owl-slideshow').size()) {
            $('.owl-slideshow').owlCarousel({
                items: 1,
                loop: true,
                autoHeight: true,
            });
        };
    });

    var userFeed = new Instafeed({
        get: 'user',
        userId: '3917793454',
        accessToken: '3917793454.1677ed0.e77f265bc52f4958b31fd7b9bae3093c',
        sortBy: "most-recent",
        resolution: "low_resolution",
        limit: 8,
        template: '<li class="instafeed-row"><a href="{{link}}"><img src="{{image}}" /></a><div><h5>{{location}}</h5>{{caption}}</div></li>'
    });
    userFeed.run();

}(jQuery));