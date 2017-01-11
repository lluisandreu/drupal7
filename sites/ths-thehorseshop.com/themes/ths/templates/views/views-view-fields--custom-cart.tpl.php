<div class="custom-cart">
	<a href="<?php print url('cart'); ?>"><?php print render($fields['commerce_order_total']->content); ?></a>
	(<?php print render($fields['quantity']->content); ?>)
</div>