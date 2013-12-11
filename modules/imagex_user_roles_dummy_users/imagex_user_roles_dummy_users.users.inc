<?php
/**
 * @file
 */

/**
 * Returns an array of sample users to be created.
 *
 * @return array
 */
function imagex_user_roles_dummy_users_users() {
  $roles = imagex_user_roles_by_role_info();
  $users = array();
  $users[] = (object) array(
    'name' => 'content-administrator',
    'mail' => 'content-administrator@localhost.com',
    'pass' => 'password',
    'status' => '1',
    'roles' => array($roles['Content Administrator']->rid => $roles['Content Administrator']),
  );
  $users[] = (object) array(
    'name' => 'content-manager',
    'mail' => 'content-manager@localhost.com',
    'pass' => 'password',
    'status' => '1',
    'roles' => array($roles['Content Manager']->rid => $roles['Content Manager']),
  );
  $users[] = (object) array(
    'name' => 'content-creator',
    'mail' => 'content-creator@localhost.com',
    'pass' => 'password',
    'status' => '1',
    'roles' => array($roles['Content Creator']->rid => $roles['Content Creator']),
  );
  $users[] = (object) array(
    'name' => 'content-moderator',
    'mail' => 'content-moderator@localhost.com',
    'pass' => 'password',
    'status' => '1',
    'roles' => array($roles['Content Moderator']->rid => $roles['Content Moderator']),
  );

  drupal_alter('imagex_user_roles_dummy_users_users', $users);

  return $users;
}
