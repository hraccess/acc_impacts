<?php
/**
 * @file
 * acc_impacts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function acc_impacts_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in acc_impact_types'.
  $permissions['delete terms in acc_impact_types'] = array(
    'name' => 'delete terms in acc_impact_types',
    'roles' => array(
      'access manager' => 'access manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in acc_impact_types'.
  $permissions['edit terms in acc_impact_types'] = array(
    'name' => 'edit terms in acc_impact_types',
    'roles' => array(
      'access manager' => 'access manager',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
