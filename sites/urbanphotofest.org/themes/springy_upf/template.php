<?php 

/**
 * Implements hook_form_alter().
 */
function springy_upf_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'commerce_cart_add_to_cart_form_1') {
  	$form['submit']['#value'] = t('Book course');
  }
}

function springy_upf_preprocess_page(&$variables) {
	global $user;
    $order = commerce_cart_order_load($user->uid);
    if(isset($order)) {
    	$wrapper = entity_metadata_wrapper('commerce_order', $order);
        $line_items = $wrapper->commerce_line_items;
        $quantity = commerce_line_items_quantity($line_items, commerce_product_line_item_types());
        $variables['cart']['quantity'] = $quantity;
        $variables['cart']['total'] = commerce_currency_format($order->commerce_order_total['und'][0]['amount'], $order->commerce_order_total['und'][0]['currency_code']);
    }
}