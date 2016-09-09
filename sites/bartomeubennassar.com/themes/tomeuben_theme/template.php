<?php

function tomeuben_theme_preprocess_html(&$variables) {
	drupal_add_css("//fonts.googleapis.com/css?family=Lora", array('group' => CSS_THEME));
	drupal_add_css("//fonts.googleapis.com/css?family=Open+Sans", array('group' => CSS_THEME));
}