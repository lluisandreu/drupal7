<?php

/**
 * Implements template_preprocess_html().
 */
function ths_preprocess_html(&$variables) {
  // Loads Roboto font
  drupal_add_css("//fonts.googleapis.com/css?family=Roboto:400,300,300italic,400italic,700italic,700", array("type" => "external"));
  // Loads Font
  drupal_add_css("//maxcdn.bootstrapcdn.com/font-awesome/4.5.0/css/font-awesome.min.css", array("type" => "external"));
}


/**
 * Implements template_preprocess_page.
 */
function ths_preprocess_page(&$variables) {
 
}

/**
 * Implements template_preprocess_node.
 */
function STARTER_preprocess_node(&$variables) {
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
  	
  	default:
  		# code...
  		break;
  }
}
