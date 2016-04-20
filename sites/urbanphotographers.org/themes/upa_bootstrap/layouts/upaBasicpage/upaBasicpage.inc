<?php
/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
	'title' => t('UPA Basic Page Layout'),
	'category' => t('UPA Layouts'),
	'icon' => 'upaBasicpage.png',
	'css' => 'upaBasicpage.css',
	'theme' => 'upabasicpage',
	'regions' => array(
		'top' => 'Top',
		'main' => 'Main content',
		'aside' => 'Aside',
		'bottom' => 'Bottom' 
	),
);