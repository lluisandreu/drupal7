<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="row">
	<?php foreach ($rows as $id => $row): ?>
	  <div class="col-md-4 col-12">
	    <?php print $row; ?>
	  </div>
	<?php endforeach; ?>
</div>