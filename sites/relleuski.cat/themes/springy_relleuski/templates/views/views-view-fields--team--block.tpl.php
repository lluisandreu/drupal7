<div class="iac-container row">
    <?php print render($fields['field_team_picture']->content); ?>
    <h3><?php print render($fields['title']->content); ?></h3>
    <?php print render($fields['body']->content); ?>
<?php
global $user;
if((in_array("administrator",$user->roles)) || ($user->uid == 1)) {
        print '<div class="iac iac-edit pretty medium primary btn icon-left icon-pencil"><a href="'.url('node/'.$fields['nid']->content.'/edit').'">Edit</a></div>';
}
?>
</div>