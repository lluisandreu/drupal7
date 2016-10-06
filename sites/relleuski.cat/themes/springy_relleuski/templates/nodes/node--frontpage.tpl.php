<div class="hero-content iac-container">
	<div class="hero-content__text">
		<?php print $node->field_front_hero_text['und'][0]['value']; ?>
	</div>
<?php
global $user;
if((in_array("administrator",$user->roles)) || ($user->uid == 1)) {
        print '<div class="iac iac-edit pretty medium primary btn icon-left icon-pencil"><a href="'.url('node/'.$node->nid.'/edit').'">Edit</a></div>';
}
?>
</div>
<?php if(isset($node->field_front_cover)) {
	$background_image = image_style_url("hero", $node->field_front_cover['und'][0]['uri']);
	drupal_add_css("#hero {background-image: url('".$background_image."') ;}", array('type' => 'inline'));
}

?>