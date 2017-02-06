<?php

/**
 * Implements template_preprocess_html().
 */
function grimalt_theme_preprocess_html(&$variables) {
	drupal_add_css('//fonts.googleapis.com/css?family=Oxygen:300,400,700|Roboto+Condensed:300,400,700', array('type' => 'external'));
}

/**
 * Implements template_preprocess_page.
 */
function grimalt_theme_preprocess_page(&$variables) {
	$variables['show_tabs'] = TRUE;
	if(isset($variables['node'])) {
		if(!$variables['logged_in']) {
			$variables['show_tabs'] = FALSE;
		}
	}
}


function grimalt_theme_form_alter(&$form, &$form_state, $form_id) {
	switch ($form_id) {
		case 'views_exposed_form':
			if($form['#id'] == "views-exposed-form-product-search-page-1") {
				$form['search']['#prefix'] = "<div class='small-8 medium-10 columns'>";
				$form['search']['#attributes']['placeholder'] = t('Busca un producto o servicio...');
				$form['search_api_views_fulltext']['#suffix'] = "</div>";
				$form['submit']['#prefix'] = "<div class='small-4 medium-2 columns'>";
				$form['submit']['#suffix'] = "</div>";
				$form['submit']['#attributes']['class'][] = "postfix";
				$form['#prefix'] = "<div class='small-12 medium-10 small-centered column'>";
				$form['#suffix'] = "</div>";
			}
			if($form['#id'] == "views-exposed-form-product-by-category-line-items-panel-pane-1") {
				$form['title']['#prefix'] = "<div class='small-8 medium-10 columns'>";
				$form['title']['#suffix'] = "</div>";
				$form['title']['#attributes']['placeholder'] = t('Busca un producto...');
				$form['submit']['#prefix'] = "<div class='small-4 medium-2 columns'>";
				$form['submit']['#suffix'] = "</div>";
				$form['submit']['#attributes']['class'][] = "postfix";
				$form['#prefix'] = "<div class='row'>";
				$form['#suffix'] = "</div>";
			}
			// dpm($form);
			break;
	}
}