<?php
/**
 * @file
 * ths_taxonomy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ths_taxonomy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in brands'.
  $permissions['delete terms in brands'] = array(
    'name' => 'delete terms in brands',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in categories'.
  $permissions['delete terms in categories'] = array(
    'name' => 'delete terms in categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tallas'.
  $permissions['delete terms in tallas'] = array(
    'name' => 'delete terms in tallas',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in brands'.
  $permissions['edit terms in brands'] = array(
    'name' => 'edit terms in brands',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in categories'.
  $permissions['edit terms in categories'] = array(
    'name' => 'edit terms in categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tallas'.
  $permissions['edit terms in tallas'] = array(
    'name' => 'edit terms in tallas',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
