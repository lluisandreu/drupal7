<?php
/**
 * @file
 * page_manager_handlers.term_view__category.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'term_view__category';
$handler->task = 'term_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 1;
$handler->conf = array(
  'title' => 'Category',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => 'category',
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'term_vocabulary',
        'settings' => array(
          'machine_name' => array(
            'categories' => 'categories',
          ),
        ),
        'context' => 'argument_term_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  ),
);
$display = new panels_display();
$display->layout = 'taxonomy';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'taxonomy_description' => NULL,
    'taxonomy_image' => NULL,
    'products_in_this_taxonomy' => NULL,
    'extra_content' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = '943131b0-9957-486d-8c4b-1691991c5796';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e84db5b2-2e00-40cc-9ebe-f05a43efbe79';
  $pane->panel = 'body';
  $pane->type = 'views_panes';
  $pane->subtype = 'products_by_category-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '20',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e84db5b2-2e00-40cc-9ebe-f05a43efbe79';
  $display->content['new-e84db5b2-2e00-40cc-9ebe-f05a43efbe79'] = $pane;
  $display->panels['body'][0] = 'new-e84db5b2-2e00-40cc-9ebe-f05a43efbe79';
  $pane = new stdClass();
  $pane->pid = 'new-1dc99ae2-0041-4bd0-9597-1e0a5a5eb565';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_products-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '4',
    'override_title' => 1,
    'override_title_text' => 'Productos destacados',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1dc99ae2-0041-4bd0-9597-1e0a5a5eb565';
  $display->content['new-1dc99ae2-0041-4bd0-9597-1e0a5a5eb565'] = $pane;
  $display->panels['bottom'][0] = 'new-1dc99ae2-0041-4bd0-9597-1e0a5a5eb565';
  $pane = new stdClass();
  $pane->pid = 'new-7fb8b50e-ce68-4538-991a-b4ed7e89626e';
  $pane->panel = 'left';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'taxonomy_term:description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_term_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7fb8b50e-ce68-4538-991a-b4ed7e89626e';
  $display->content['new-7fb8b50e-ce68-4538-991a-b4ed7e89626e'] = $pane;
  $display->panels['left'][0] = 'new-7fb8b50e-ce68-4538-991a-b4ed7e89626e';
  $pane = new stdClass();
  $pane->pid = 'new-02a99d16-5654-4082-8098-775e41d8f763';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_taxonomy_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'large',
      'image_link' => '',
    ),
    'context' => 'argument_term_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '02a99d16-5654-4082-8098-775e41d8f763';
  $display->content['new-02a99d16-5654-4082-8098-775e41d8f763'] = $pane;
  $display->panels['right'][0] = 'new-02a99d16-5654-4082-8098-775e41d8f763';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.products_by_category' => 'views_view.products_by_category',
  'views_view.featured_products' => 'views_view.featured_products',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
