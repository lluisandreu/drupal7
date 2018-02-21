<?php 

$cart = commerce_cart_order_load($variables['user']->uid);
$quantity = count($cart->commerce_line_items);

?>
<?php if($cart): ?>
	<div class="cart-block">
		<a href="<?php print url('cart'); ?>">My cart (<?php print $quantity; ?>)</a>
	</div>

<?php endif; ?>