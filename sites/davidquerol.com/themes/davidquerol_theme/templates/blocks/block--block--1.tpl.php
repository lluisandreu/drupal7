<?php global $user; ?>

<?php 
$cart = commerce_cart_order_load($variables['user']->uid);
$quantity = count($cart->commerce_line_items);
?>

<?php if($cart): ?>
<div class="cart-block">
	<p><a href="<?php print url('cart'); ?>" class="cart"><i class="fa fa-shopping-basket"></i> cart (<?php print $quantity; ?>)</a></p>
</div>
<?php endif; ?>

<div class="sidebar-info">
	<div class="social-icons">
      <ul>
        <li><a href="https://www.facebook.com/DavidQuerolPhotography/?ref=bookmarks" target="_blank"><i class="fa fa-facebook"></i></a></li>
         <li><a href="https://www.instagram.com/david_querol_photography/" target="_blank"><i class="fa fa-instagram"></i></a></li>
        <li><a href="https://www.linkedin.com/in/david-querol-064a095b/" target="_blank"><i class="fa fa-linkedin"></i></a></li>
       <li><a href="https://twitter.com/d_q_photography" target="_blank"><i class="fa fa-twitter"></i></a></li>
        <li><a href="https://vimeo.com/user11066826" target="_blank"><i class="fa fa-vimeo"></i></a></li>
      </ul>
    </div>
    <br>
    <div class="hide-small">
		<div class="sidebar-info-text">
			David Querol &copy;<br>
			<?php if(!$user->uid): ?><a href="<?php print url('user'); ?>">Login</a><br><?php endif; ?>
			<?php if($user->uid): ?><a href="<?php print url('user/logout'); ?>">Logout</a><?php endif; ?>
		</div>
		<br>
		<div class="sidebar-info-credits">
			Developed by <a href="http://lluisandreu.com" target="_blank">lluisandreu.com</a><br>using <a href="http://drupal.org" target="_blank">Drupal</a>
		</div>
		<br>
		<div class="fb-like " data-layout="button_count" data-action="like" data-size="small" data-show-faces="false" data-share="false"></div>
	</div>
</div>