<?php

function jean_foundation_preprocess_html(&$variables) {
	drupal_add_css('//fonts.googleapis.com/css?family=Karla:400,700|Lora:400,400i,700,700i', array('type' => 'external'));
}

/**
 * Implements template_preprocess_html().
 */
function STARTER_preprocess_html(&$variables) {
}

/**
 * Implements template_preprocess_page.
 */
function STARTER_preprocess_page(&$variables) {
}

/**
 * Implements template_preprocess_node.
 */
function STARTER_preprocess_node(&$variables) {
}
