<div class="iac-container panel">
	<div class="panel-image">
		<?php print render($fields['field_page_images']->content); ?>
	</div>
	<div class="panel-body row">
		<div class="columns nine">
			<h3><?php print $fields['title']->content; ?></h3>
			<div class="panel-dates">
				<?php print render($fields['field_page_date']->content); ?>
			</div>
		</div>
		<div class="columns three view-more">
			<a href="<?php print url('node/'.$fields['nid']->content); ?>" class="btn secondary">View</a>
		</div>
	</div>
<?php
global $user;
if((in_array("administrator",$user->roles)) || ($user->uid == 1)) {
        print '<div class="iac iac-edit pretty medium primary btn icon-left icon-pencil"><a href="'.url('node/'.$fields['nid']->content.'/edit').'">Edit</a></div>';
}
?>
</div>