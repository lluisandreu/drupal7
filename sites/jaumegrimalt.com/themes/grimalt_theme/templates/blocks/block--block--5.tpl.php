<?php 
global $language;
global $base_url;
$q = $_GET['q']; 
$lang_name = $language->language;
$lang_list = language_list($field = 'language');
?>

<?php if ($block->delta != 'main'): ?>
<section class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php endif; ?>
  <div class="block-inner">
 <div class="language-switcher">
	<button href="#" data-dropdown="drop1" aria-controls="drop1" aria-expanded="false" class="button tiny dropdown"><?php print strtoupper($lang_name); ?></button><br>
	<ul id="drop1" data-dropdown-content class="f-dropdown" aria-hidden="true">
	  	<?php foreach ($lang_list as $lang): ?>
	  		<li><a href="<?php print $base_url .'/'. $lang->language .'/'. $q; ?>"><?php print $lang->name; ?></a></li>
	  	<?php endforeach; ?>
	</ul>
</div>
  </div>
  <?php $block->delta != 'main' ? print '</section>' : ''; ?>

