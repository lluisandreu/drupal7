<?php

function tomeuben_theme_preprocess_html(&$variables) {
	drupal_add_css("//fonts.googleapis.com/css?family=Lato:300,400,400i,700|Lora:400,400i", array('group' => CSS_THEME));
}