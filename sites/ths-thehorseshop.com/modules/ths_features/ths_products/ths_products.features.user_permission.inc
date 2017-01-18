<?php
/**
 * @file
 * ths_products.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ths_products_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create producto content'.
  $permissions['create producto content'] = array(
    'name' => 'create producto content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any producto content'.
  $permissions['delete any producto content'] = array(
    'name' => 'delete any producto content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own producto content'.
  $permissions['delete own producto content'] = array(
    'name' => 'delete own producto content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any producto content'.
  $permissions['edit any producto content'] = array(
    'name' => 'edit any producto content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own producto content'.
  $permissions['edit own producto content'] = array(
    'name' => 'edit own producto content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
