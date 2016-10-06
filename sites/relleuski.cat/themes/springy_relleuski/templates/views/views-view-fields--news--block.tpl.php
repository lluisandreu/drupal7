<div class="iac-container">
	<a href="<?php print url('node/'. $fields['nid']->content); ?>">
		<?php print render($fields['field_article_image']->content); ?>
	</a>
	<h3>
		<a href="<?php print url('node/'. $fields['nid']->content); ?>">
			<?php print render($fields['title']->content); ?>
		</a>
	</h3>
	<?php print render($fields['body']->content); ?>
	<a href="<?php print url('node/'. $fields['nid']->content); ?>">&nbsp;Llegeix més</a>
<?php
global $user;
if((in_array("administrator",$user->roles)) || ($user->uid == 1)) {
        print '<div class="iac iac-edit pretty medium primary btn icon-left icon-pencil"><a href="'.url('node/'.$fields['nid']->content.'/edit').'">Edit</a></div>';
}
?>
</div>
