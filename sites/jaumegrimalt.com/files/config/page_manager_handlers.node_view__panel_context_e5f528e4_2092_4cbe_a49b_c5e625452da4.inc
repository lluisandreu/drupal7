<?php
/**
 * @file
 * page_manager_handlers.node_view__panel_context_e5f528e4_2092_4cbe_a49b_c5e625452da4.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__panel_context_e5f528e4-2092-4cbe-a49b-c5e625452da4';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Contact',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node_2',
      'name' => 'entity:node',
      'entity_id' => '9',
      'id' => 1,
    ),
  ),
  'relationships' => array(),
  'name' => '',
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'node/2',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  ),
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
$display->uuid = '886dbacc-9e7b-45b1-8b68-cd8e8c64f0a7';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-8bd25bc2-4d82-4644-8d9a-6d4e1577c90e';
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
  'override_title_text' => 'moneia',
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
$pane->uuid = '8bd25bc2-4d82-4644-8d9a-6d4e1577c90e';
$display->content['new-8bd25bc2-4d82-4644-8d9a-6d4e1577c90e'] = $pane;
$display->panels['left'][0] = 'new-8bd25bc2-4d82-4644-8d9a-6d4e1577c90e';
$pane = new stdClass();
$pane->pid = 'new-2ab15f3f-7bd0-4f15-bad1-022b6d7cdea6';
$pane->panel = 'right';
$pane->type = 'block';
$pane->subtype = 'webform-client-block-8';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'override_title' => 1,
  'override_title_text' => 'Contacto',
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
$pane->uuid = '2ab15f3f-7bd0-4f15-bad1-022b6d7cdea6';
$display->content['new-2ab15f3f-7bd0-4f15-bad1-022b6d7cdea6'] = $pane;
$display->panels['right'][0] = 'new-2ab15f3f-7bd0-4f15-bad1-022b6d7cdea6';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-8bd25bc2-4d82-4644-8d9a-6d4e1577c90e';
$handler->conf['display'] = $display;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
