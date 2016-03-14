<?php
/**
 * @file
 * page_manager_handlers.node_view__panel_context_75f5774f_6e50_40f4_a293_02e5f7cc4841.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__panel_context_75f5774f-6e50-40f4-a293-02e5f7cc4841';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 1;
$handler->conf = array(
  'title' => 'Product page',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => '',
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'producto' => 'producto',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  ),
);
$display = new panels_display();
$display->layout = 'foundation_2col_stacked';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'top' => NULL,
    'left' => NULL,
    'right' => NULL,
    'bottom' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = '509ec1e1-022a-40ba-91ed-19a2f93739fd';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-f750575e-1da8-4b9c-8f98-c2f616bb288b';
$pane->panel = 'left';
$pane->type = 'entity_field';
$pane->subtype = 'node:body';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
  'formatter' => 'text_default',
  'delta_limit' => 0,
  'delta_offset' => '0',
  'delta_reversed' => FALSE,
  'formatter_settings' => array(),
  'context' => 'argument_entity_id:node_1',
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
$pane->uuid = 'f750575e-1da8-4b9c-8f98-c2f616bb288b';
$display->content['new-f750575e-1da8-4b9c-8f98-c2f616bb288b'] = $pane;
$display->panels['left'][0] = 'new-f750575e-1da8-4b9c-8f98-c2f616bb288b';
$pane = new stdClass();
$pane->pid = 'new-c73badb4-4d9a-4384-b86c-27236a8614a7';
$pane->panel = 'right';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_image';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
  'formatter' => 'image',
  'delta_limit' => 0,
  'delta_offset' => '0',
  'delta_reversed' => FALSE,
  'formatter_settings' => array(
    'image_style' => 'product_node_desktop',
    'image_link' => '',
    'picture_mapping' => 'product_thumb',
    'fallback_image_style' => 'product_image_thumb_desktop',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
  ),
  'context' => 'argument_entity_id:node_1',
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
$pane->uuid = 'c73badb4-4d9a-4384-b86c-27236a8614a7';
$display->content['new-c73badb4-4d9a-4384-b86c-27236a8614a7'] = $pane;
$display->panels['right'][0] = 'new-c73badb4-4d9a-4384-b86c-27236a8614a7';
$pane = new stdClass();
$pane->pid = 'new-b3de9ce3-3114-4389-8437-d91c46f89035';
$pane->panel = 'right';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_product_price';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
  'formatter' => 'number_integer',
  'delta_limit' => 0,
  'delta_offset' => '0',
  'delta_reversed' => FALSE,
  'formatter_settings' => array(
    'thousand_separator' => '.',
    'prefix_suffix' => 1,
  ),
  'context' => 'argument_entity_id:node_1',
  'override_title' => 1,
  'override_title_text' => 'Oferta',
  'override_title_heading' => 'span',
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 1;
$pane->locks = array();
$pane->uuid = 'b3de9ce3-3114-4389-8437-d91c46f89035';
$display->content['new-b3de9ce3-3114-4389-8437-d91c46f89035'] = $pane;
$display->panels['right'][1] = 'new-b3de9ce3-3114-4389-8437-d91c46f89035';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-f750575e-1da8-4b9c-8f98-c2f616bb288b';
$handler->conf['display'] = $display;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
