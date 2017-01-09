<?php

/**
 * Implements template_preprocess_html().
 */
function hamad_foundation_preprocess_html(&$variables) {
	drupal_add_css('//fonts.googleapis.com/css?family=Montserrat', array('type' => 'external'));
	drupal_add_js('//use.fontawesome.com/38b1602d22.js', array('type' => 'external'));
}

/**
 * Implements template_preprocess_page.
 */
function hamad_foundation_preprocess_page(&$variables) {
	$menu = menu_tree_output(menu_tree_all_data('main-menu', null, 2));
	$variables['top_menu'] = $menu;
	$variables['main_menu'] = $menu;
}

/**
 * Implements template_preprocess_node.
 */
function STARTER_preprocess_node(&$variables) {
}
