<?php
/**
 * @file
 * page_manager_handlers.pm_existing_pages_test__panel_context_1a00d141_78ac_442a_afe2_5b3e53fefd0f.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'pm_existing_pages_test__panel_context_1a00d141-78ac-442a-afe2-5b3e53fefd0f';
$handler->task = 'pm_existing_pages';
$handler->subtask = 'test';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Product search',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(
    0 => array(
      'identifier' => 'View: Product Search API',
      'keyword' => 'view',
      'name' => 'view:products_search_api-ctools_context_1',
      'id' => 1,
    ),
  ),
  'relationships' => array(),
  'name' => '',
);
$display = new panels_display();
$display->layout = 'foundation_2col';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'left' => NULL,
    'right' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = '1dcc1c1c-071c-43c1-a31a-330305af3285';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2af45b79-980e-4895-b221-724ef7a0793d';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-tPRLiOd3Sc6xw3kL7nHe3RI1o0ne2QIK';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Categorias',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2af45b79-980e-4895-b221-724ef7a0793d';
  $display->content['new-2af45b79-980e-4895-b221-724ef7a0793d'] = $pane;
  $display->panels['left'][0] = 'new-2af45b79-980e-4895-b221-724ef7a0793d';
  $pane = new stdClass();
  $pane->pid = 'new-32b65cea-c4fa-4f50-b078-4cbc4d6652dd';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-gsG3xwbomtYE0fjJQG1T3bNgtPT6k0pr';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Marcas',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '32b65cea-c4fa-4f50-b078-4cbc4d6652dd';
  $display->content['new-32b65cea-c4fa-4f50-b078-4cbc4d6652dd'] = $pane;
  $display->panels['left'][1] = 'new-32b65cea-c4fa-4f50-b078-4cbc4d6652dd';
  $pane = new stdClass();
  $pane->pid = 'new-21c8880c-a3b4-418b-bb27-58ae66450e4a';
  $pane->panel = 'right';
  $pane->type = 'views_row';
  $pane->subtype = 'views_row';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'rows' => array(),
    'use_fields' => 0,
    'fields' => array(),
    'context' => 'context_view:products_search_api-ctools_context_1_1',
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
  $pane->uuid = '21c8880c-a3b4-418b-bb27-58ae66450e4a';
  $display->content['new-21c8880c-a3b4-418b-bb27-58ae66450e4a'] = $pane;
  $display->panels['right'][0] = 'new-21c8880c-a3b4-418b-bb27-58ae66450e4a';
  $pane = new stdClass();
  $pane->pid = 'new-e32a33a6-9397-4d7f-9c87-1dff8998f1f1';
  $pane->panel = 'right';
  $pane->type = 'views_empty';
  $pane->subtype = 'views_empty';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_view:products_search_api-ctools_context_1_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e32a33a6-9397-4d7f-9c87-1dff8998f1f1';
  $display->content['new-e32a33a6-9397-4d7f-9c87-1dff8998f1f1'] = $pane;
  $display->panels['right'][1] = 'new-e32a33a6-9397-4d7f-9c87-1dff8998f1f1';
  $pane = new stdClass();
  $pane->pid = 'new-55fedee7-d2b7-4c2b-b182-7141afe44b0b';
  $pane->panel = 'right';
  $pane->type = 'views_pager';
  $pane->subtype = 'views_pager';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_view:products_search_api-ctools_context_1_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '55fedee7-d2b7-4c2b-b182-7141afe44b0b';
  $display->content['new-55fedee7-d2b7-4c2b-b182-7141afe44b0b'] = $pane;
  $display->panels['right'][2] = 'new-55fedee7-d2b7-4c2b-b182-7141afe44b0b';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-21c8880c-a3b4-418b-bb27-58ae66450e4a';
$handler->conf['display'] = $display;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
