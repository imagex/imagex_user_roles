<?php
/**
 * @file
 */

/**
 * Alters the users data before being used for creation and deletion.
 *
 * @param array $users
 *   An array of users to create or delete.
 */
function hook_imagex_user_roles_dummy_users_users_alter(array &$users) {
  // Perform some sort of operation on users to be created and deleted.
  // For example, perhaps you want to remove the Content Administrator user.
  foreach ($users as $k => $user) {
    if ('content-administrator' === $user->name) {
      unset($users[$k]);
    }
  }
}
