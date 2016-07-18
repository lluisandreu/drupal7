<?php global $user; ?>
<div class="sidebar-info hide-small">
	<div class="sidebar-info-addthis">
		<div class="addthis_sharing_toolbox"></div>
	</div>
	<br>
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
	<div class="fb-like" data-href="http://www.davidquerol.com/" data-layout="button_count" data-action="like" data-size="small" data-show-faces="true" data-share="false"></div>
</div>