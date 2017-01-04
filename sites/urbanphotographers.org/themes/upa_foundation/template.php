<?php

/**
 * Implements template_preprocess_html().
 */
function upa_foundation_preprocess_html(&$variables) {
	drupal_add_js('//use.fontawesome.com/b0789a050e.js', array('type' => 'external'));
	if($variables['is_front']) {
		drupal_add_js(drupal_get_path('theme', 'upa_foundation') . '/vendor/owl.carousel/owl.carousel.min.js');
		drupal_add_css(drupal_get_path('theme', 'upa_foundation') . '/vendor/owl.carousel/assets/owl.carousel.min.css');
		drupal_add_css(drupal_get_path('theme', 'upa_foundation') . '/vendor/owl.carousel/assets/owl.theme.default.min.css');
		drupal_add_css(drupal_get_path('theme', 'upa_foundation') . '/vendor/animate/animate.min.css');
	}
}

/**
 * Implements template_preprocess_page.
 */
function upa_foundation_preprocess_page(&$variables) {
	$main_menu = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
	$variables['menu'] = $main_menu;
}

/**
 * Implements template_preprocess_node.
 */
function upa_foundation_preprocess_node(&$variables) {
	
}
