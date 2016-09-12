<?php

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