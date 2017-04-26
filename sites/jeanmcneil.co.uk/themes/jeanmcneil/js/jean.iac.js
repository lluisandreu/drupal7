(function ($) {
	$(document).ready(function(){
		$("div.iac").hide();
		$("div.iac-container").hover(function(){
			$(this).find("div.iac").show();
		},function(){
			$(this).find("div.iac").hide();
		});
	});
})(jQuery);