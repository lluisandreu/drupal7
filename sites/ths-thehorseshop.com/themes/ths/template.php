<?php

/**
 * Implements template_preprocess_html().
 */
function ths_preprocess_html(&$variables) {
  // Loads Roboto font
  drupal_add_css("//fonts.googleapis.com/css?family=Nunito:400,600,700&amp;subset=latin-ext", array("type" => "external"));
  // Loads Font
  drupal_add_css("//maxcdn.bootstrapcdn.com/font-awesome/4.5.0/css/font-awesome.min.css", array("type" => "external"));
}

function ths_preprocess_page(&$variables) {
  $menu = menu_tree_output(menu_tree_all_data('main-menu', null, 2));
  $variables['top_menu'] = $menu;
  $variables['main_menu'] = $menu;

  /// Render cart
  $cart = views_embed_view("custom_cart", "block_1");
  $variables['cart'] = $cart;

  // Search bar
  $search_form = module_invoke('views', 'block_view', '-exp-products_search_api-page_1');
  $variables['search'] = $search_form;
}

/**
 * Implements hook_form_alter().
 */
function ths_form_alter(&$form, &$form_state, $form_id) {
  /*
   *if (isset($form['type']) && $form['type']['#value'] . '_node_settings' == $form_id) {
   *  $form['workflow']['upload_' . $form['type']['#value']] = array(
   *    '#type' => 'radios',
   *    '#title' => t('Attachments'),
   *    '#default_value' => variable_get('upload_' . $form['type']['#value'], 1),
   *    '#options' => array(t('Disabled'), t('Enabled')),
   * );
   *}
   */
  //dpm($form_id);
  switch ($form_id) {
  	case 'views_exposed_form':
  		
		$form['search']['#prefix'] = "<div class='small-8 medium-10 columns'>";
		$form['search']['#attributes']['placeholder'] = t('Busca un producto o servicio...');
		$form['search']['#suffix'] = "</div>";

		$form['submit']['#prefix'] = "<div class='small-4 medium-2 columns'>";
		$form['submit']['#suffix'] = "</div>";
		$form['submit']['#attributes']['class'][] = "postfix";
		$form['#prefix'] = "<div class='small-12 medium-10 small-centered column'>";
		$form['#suffix'] = "</div>";
		break;
  
    case 'commerce_checkout_form_review': 
      //dpm($form);
      $form['commerce_payment']['payment_details']['#prefix'] = '<div id="payment-details"><div class="inner">';
      $form['commerce_payment']['payment_details']['#suffix'] = '</div></div>';
      if($form['commerce_payment']['payment_method']['#options']['commerce_cod|commerce_payment_commerce_cod']){
        $form['commerce_payment']['payment_method']['#options']['commerce_cod|commerce_payment_commerce_cod'] = '<i class="fa fa-home"></i> ' . $form['commerce_payment']['payment_method']['#options']['commerce_cod|commerce_payment_commerce_cod'];
      }
      if($form['commerce_payment']['payment_method']['#options']['bank_transfer|commerce_payment_bank_transfer']) {
        $form['commerce_payment']['payment_method']['#options']['bank_transfer|commerce_payment_bank_transfer'] = '<i class="fa fa-exchange"></i> ' . $form['commerce_payment']['payment_method']['#options']['bank_transfer|commerce_payment_bank_transfer'];
      }
      if($form['commerce_payment']['payment_method']['#options']['paypal_wps|commerce_payment_paypal_wps']) {
        $form['commerce_payment']['payment_method']['#options']['paypal_wps|commerce_payment_paypal_wps'] = '<i class="fa fa-credit-card"></i> A través de Paypal. <i class="fa fa-paypal"></i>'; 
      }  
      $form['buttons']['continue']['#value'] = t('Terminar pedido');
    break;
    	default:
  		# code...
  		break;
  }
}

function ths_preprocess_field(&$variables, $hook) {
  
  if($variables['element']['#field_name'] == 'commerce_price') {
    $variables['onsale'] = FALSE;
    $entity = $variables['element']['#object'];
    
    if(isset($entity->field_commerce_saleprice_on_sale['und'])) {
      if($entity->field_commerce_saleprice_on_sale['und'][0]['value'] == '1') {
        $variables['onsale'] = TRUE;
        $variables['original_price'] = commerce_currency_format($entity->commerce_price['und'][0]['original']['amount'], 'EUR');
      }
    }
    //dpm($variables);
  }
}

