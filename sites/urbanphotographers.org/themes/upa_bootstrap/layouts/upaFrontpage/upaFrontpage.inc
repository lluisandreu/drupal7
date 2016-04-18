<?php
/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
	'title' => t('UPA Homepage Layout'),
	'category' => t('UPA Layouts'),
	'icon' => 'upaFrontpage.png',
	'css' => 'upaFrontpage.css',
	'theme' => 'upafrontpage',
	'regions' => array(
		'top' => 'Top banner',
		'main' => 'Site name & description',
		'first_tryptic' => 'First tryptic',
		'second_tryptic' => 'Second tryptic',
		'third_tryptic' => 'Third tryptic',
		'bottom' => 'Bottom' 
	),
);