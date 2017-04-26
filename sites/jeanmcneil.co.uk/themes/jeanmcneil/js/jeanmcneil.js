var userFeed = new Instafeed({
    get: 'user',
    userId: '3917793454',
    accessToken: '3917793454.1677ed0.e77f265bc52f4958b31fd7b9bae3093c',
    sortBy: "most-recent",
    resolution: "low_resolution",
    limit: 8,
    template: '<div class="instafeed-row"><a href="{{link}}"><img src="{{image}}" /></a><div>{{location}}<br>{{caption}}</div></div>'
});
userFeed.run();