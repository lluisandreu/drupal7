<?php

// Gets background image from node
function calbarber_theme_preprocess_page(&$variables) {
	if (arg(0) == "node" && is_numeric(arg(1))) {
		$nodeid = arg(1);
		$thenode = node_load($nodeid);
		//dpm($thenode);
		if(!empty($thenode->field_page_bgimage)) {	
			$image_style_path = image_style_url("background_image", $thenode->field_page_bgimage['und'][0]['uri']);
			drupal_add_css("@media (min-width: 650px) {.main-section {background-image: url('$image_style_path') !important}}", array(
				'type' => 'inline',
				'group' => 'CSS_THEME',
				'preprocess' => FALSE,
				'media' => 'screen',
				)
			);
		}
		if(!empty($thenode->field_page_hide_content) && $thenode->field_page_hide_content['und'][0]['value'] == 1) {
			drupal_add_css(".not-logged-in .main-content-box { 
				position: absolute; 
				height: 1px;
				width: 1px;
				top: -990px;
				left: -999px;
				overflow: hidden;
			}", array(
				'type' => 'inline',
				'group' => 'CSS_THEME',
				'preprocess' => FALSE,
				'media' => 'screen',
				));
		}
	}
}
