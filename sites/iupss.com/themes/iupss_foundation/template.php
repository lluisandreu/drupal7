<?php

/**
 * Implements template_preprocess_html().
 */
function iupss_foundation_preprocess_html(&$variables) {
	drupal_add_css('//fonts.googleapis.com/css?family=Karla:400,400i,700|Roboto:300,300i,400,400i,500,500i&subset=latin-ext', array("type" => "external"));
	drupal_add_js("//use.fontawesome.com/7acc268cad.js", array("type" => "external"));
	drupal_add_js("//unpkg.com/masonry-layout@4.1/dist/masonry.pkgd.min.js", array("type" => "external"));
}

/**
 * Implements template_preprocess_page.
 */
function iupss_foundation_preprocess_page(&$variables) {

	$main_menu = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
	$variables['menu'] = $main_menu;

	$variables['white_logo'] = '/' . drupal_get_path("theme", "iupss_foundation") . '/white-logo.png';
}

/**
 * Implements template_preprocess_node.
 */
function STARTER_preprocess_node(&$variables) {
}
