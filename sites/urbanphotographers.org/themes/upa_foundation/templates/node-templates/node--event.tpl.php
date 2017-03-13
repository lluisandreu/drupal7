<div class="node-default-template">
	<div class="node-page-content node-main <?php print (isset($content['field_cover_image'])) ? 'large-6 column' : 'column'; ?>" >
		<h3><?php print render($content['field_event_organiser']); ?></h3>
		<time><i class="fa fa-calendar"></i> <?php print render($content['field_event_date']); ?></time>
		<?php print render($content['body']); ?>
		<?php if(isset($content['field_event_info'])): ?>
			<div class="panel">
				<?php print render($content['field_event_info']); ?>
			</div>
		<?php endif; ?>
		<p><i class="fa fa-info-circle"></i> <small>If you want to book your tickets for this event please use the payment button below, you will be redirected to a payment gateway.</small></p>
		<form action="https://secure-test.worldpay.com/wcc/purchase" method="POST" target="_blank">
			<input type="hidden" name="testMode" value="100">
			<input type="hidden" name="instId" value="1142634">
			<input type="hidden" name="cartId" value="UPAMEMBERS">
			<input type="hidden" name="amount" value="250.00">
			<input type="hidden" name="currency" value="GBP">
			<input type="submit" class="button default" value="Pay">
		</form>	
		<?php if($content['field_terms_and_conditions']): ?>
			<p><small><?php print render($content['field_terms_and_conditions']); ?></small></p>
		<?php endif; ?>
	</div>
	<?php if(isset($content['field_cover_image'])): ?>
		<aside id="main-aside" class="large-6 column">
			<?php print render($content['field_cover_image']); ?>
		</aside>
	<?php endif; ?>
</div>